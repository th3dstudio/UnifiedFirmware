/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */

//
// Main Menu
//

#include "../../inc/MarlinConfigPre.h"

#if HAS_LCD_MENU

#include "menu_item.h"
#include "../../module/temperature.h"
#include "../../gcode/queue.h"
#include "../../module/printcounter.h"
#include "../../module/stepper.h"
#include "../../sd/cardreader.h"

#if HAS_GAMES && DISABLED(LCD_INFO_MENU)
  #include "game/game.h"
#endif

#if EITHER(SDSUPPORT, HOST_PROMPT_SUPPORT) || defined(ACTION_ON_CANCEL)
  #define MACHINE_CAN_STOP 1
#endif
#if ANY(SDSUPPORT, HOST_PROMPT_SUPPORT, PARK_HEAD_ON_PAUSE) || defined(ACTION_ON_PAUSE)
  #define MACHINE_CAN_PAUSE 1
#endif

#if ENABLED(PRUSA_MMU2)
  #include "../../lcd/menu/menu_mmu2.h"
#endif

#if ENABLED(PASSWORD_FEATURE)
  #include "../../feature/password/password.h"
#endif

#if ENABLED(HOST_START_MENU_ITEM) && defined(ACTION_ON_START)
  #include "../../feature/host_actions.h"
#endif

void menu_tune();
void menu_cancelobject();
void menu_motion();
void menu_temperature();
void menu_configuration();

#if ENABLED(CUSTOM_USER_MENUS)
  void menu_user();
#endif

#if HAS_POWER_MONITOR
  void menu_power_monitor();
#endif

#if ENABLED(MIXING_EXTRUDER)
  void menu_mixer();
#endif

#if ENABLED(ADVANCED_PAUSE_FEATURE)
  void _menu_temp_filament_op(const PauseMode, const int8_t);
  void menu_change_filament();
#endif

#if ENABLED(LCD_INFO_MENU)
  void menu_info();
#endif

#if EITHER(LED_CONTROL_MENU, CASE_LIGHT_MENU)
  void menu_led();
#endif

#if HAS_CUTTER
  void menu_spindle_laser();
#endif

extern const char M21_STR[];

//added by TH3D
#if ENABLED(BABYSTEPPING) && DISABLED(TUNE_MENU_RESTORE)

  #include "../../feature/babystep.h"
  #include "../lcdprint.h"
  #if HAS_MARLINUI_U8GLIB
    #include "../dogm/ultralcd_DOGM.h"
  #endif

  void _lcd_babystep(const AxisEnum axis, PGM_P const msg) {
    if (ui.use_click()) return ui.goto_previous_screen_no_defer();
    if (ui.encoderPosition) {
      const int16_t steps = int16_t(ui.encoderPosition) * (
        #if ENABLED(BABYSTEP_XY)
          axis == X_AXIS ? BABYSTEP_SIZE_X :
          axis == Y_AXIS ? BABYSTEP_SIZE_Y :
        #endif
        BABYSTEP_SIZE_Z
      );
      ui.encoderPosition = 0;
      ui.refresh(LCDVIEW_REDRAW_NOW);
      babystep.add_steps(axis, steps);
    }
    if (ui.should_draw()) {
      const float spm = planner.steps_to_mm[axis];
      MenuEditItemBase::draw_edit_screen(msg, BABYSTEP_TO_STR(spm * babystep.accum));
      #if ENABLED(BABYSTEP_DISPLAY_TOTAL)
        const bool in_view = TERN1(HAS_MARLINUI_U8GLIB, PAGE_CONTAINS(LCD_PIXEL_HEIGHT - MENU_FONT_HEIGHT, LCD_PIXEL_HEIGHT - 1));
        if (in_view) {
          TERN_(HAS_MARLINUI_U8GLIB, ui.set_font(FONT_MENU));
          lcd_moveto(0, TERN(HAS_MARLINUI_U8GLIB, LCD_PIXEL_HEIGHT - MENU_FONT_DESCENT, LCD_HEIGHT - 1));
          lcd_put_u8str_P(GET_TEXT(MSG_BABYSTEP_TOTAL));
          lcd_put_wchar(':');
          lcd_put_u8str(BABYSTEP_TO_STR(spm * babystep.axis_total[BS_TOTAL_IND(axis)]));
        }
      #endif
    }
  }

  inline void _lcd_babystep_go(const screenFunc_t screen) {
    ui.goto_screen(screen);
    ui.defer_status_screen();
    babystep.accum = 0;
  }

  #if ENABLED(BABYSTEP_XY)
    void _lcd_babystep_x() { _lcd_babystep(X_AXIS, GET_TEXT(MSG_BABYSTEP_X)); }
    void _lcd_babystep_y() { _lcd_babystep(Y_AXIS, GET_TEXT(MSG_BABYSTEP_Y)); }
  #endif

  #if DISABLED(BABYSTEP_ZPROBE_OFFSET)
    void _lcd_babystep_z() { _lcd_babystep(Z_AXIS, GET_TEXT(MSG_BABYSTEP_Z)); }
    void lcd_babystep_z()  { _lcd_babystep_go(_lcd_babystep_z); }
  #endif

#endif
//added by TH3D

void menu_main() {
  const bool busy = printingIsActive()
    #if ENABLED(SDSUPPORT)
      , card_detected = card.isMounted()
      , card_open = card_detected && card.isFileOpen()
    #endif
  ;

  START_MENU();
  BACK_ITEM(MSG_INFO_SCREEN);

  if (busy) {
    //Move flow to main menu when tune is disabled. Change by TH3D.
    #if DISABLED(TUNE_MENU_RESTORE)
      #if EXTRUDERS
        EDIT_ITEM(int3, MSG_FLOW, &planner.flow_percentage[active_extruder], 10, 999, []{ planner.refresh_e_factor(active_extruder); });
        // Flow En:
        #if HAS_MULTI_EXTRUDER
          LOOP_L_N(n, EXTRUDERS)
            EDIT_ITEM_N(int3, n, MSG_FLOW_N, &planner.flow_percentage[n], 10, 999, []{ planner.refresh_e_factor(MenuItemBase::itemIndex); });
        #endif
      #endif
    #endif

    #if MACHINE_CAN_PAUSE
      ACTION_ITEM(MSG_PAUSE_PRINT, ui.pause_print);
    #endif
    #if MACHINE_CAN_STOP
      SUBMENU(MSG_STOP_PRINT, []{
        MenuItem_confirm::select_screen(
          GET_TEXT(MSG_BUTTON_STOP), GET_TEXT(MSG_BACK),
          ui.abort_print, ui.goto_previous_screen,
          GET_TEXT(MSG_STOP_PRINT), (const char *)nullptr, PSTR("?")
        );
      });
    #endif

    // Disabled to save space and reduce user confusion, redundant. Disabled by TH3D
    #if ENABLED(TUNE_MENU_RESTORE)
      SUBMENU(MSG_TUNE, menu_tune);
    #endif

    #if ENABLED(CANCEL_OBJECTS) && DISABLED(SLIM_LCD_MENUS)
      SUBMENU(MSG_CANCEL_OBJECT, []{ editable.int8 = -1; ui.goto_screen(menu_cancelobject); });
    #endif
  }
  else {

    #if !HAS_ENCODER_WHEEL && ENABLED(SDSUPPORT)

      // *** IF THIS SECTION IS CHANGED, REPRODUCE BELOW ***

      //
      // Autostart
      //
      #if ENABLED(MENU_ADDAUTOSTART)
        ACTION_ITEM(MSG_AUTOSTART, card.beginautostart);
      #endif

      if (card_detected) {
        if (!card_open) {
          SUBMENU(MSG_MEDIA_MENU, TERN(PASSWORD_ON_SD_PRINT_MENU, password.media_gatekeeper, menu_media));
          #if PIN_EXISTS(SD_DETECT)
            GCODES_ITEM(MSG_CHANGE_MEDIA, M21_STR);
          #else
            GCODES_ITEM(MSG_RELEASE_MEDIA, PSTR("M22"));
          #endif
        }
      }
      else {
        #if PIN_EXISTS(SD_DETECT)
          ACTION_ITEM(MSG_NO_MEDIA, nullptr);
        #else
          GCODES_ITEM(MSG_ATTACH_MEDIA, M21_STR);
        #endif
      }

    #endif // !HAS_ENCODER_WHEEL && SDSUPPORT

    if (TERN0(MACHINE_CAN_PAUSE, printingIsPaused()))
      ACTION_ITEM(MSG_RESUME_PRINT, ui.resume_print);

    #if ENABLED(HOST_START_MENU_ITEM) && defined(ACTION_ON_START)
      ACTION_ITEM(MSG_HOST_START_PRINT, host_action_start);
    #endif

    SUBMENU(MSG_MOTION, menu_motion);
  }

  #if HAS_CUTTER
    SUBMENU(MSG_CUTTER(MENU), menu_spindle_laser);
  #endif

  #if HAS_TEMPERATURE
    SUBMENU(MSG_TEMPERATURE, menu_temperature);
  #endif

  #if HAS_POWER_MONITOR
    SUBMENU(MSG_POWER_MONITOR, menu_power_monitor);
  #endif

  #if ENABLED(MIXING_EXTRUDER)
    SUBMENU(MSG_MIXER, menu_mixer);
  #endif

  #if ENABLED(MMU2_MENUS)
    if (!busy) SUBMENU(MSG_MMU2_MENU, menu_mmu2);
  #endif

  SUBMENU(MSG_CONFIGURATION, menu_configuration);

  #if ENABLED(CUSTOM_USER_MENUS)
    #ifdef CUSTOM_USER_MENU_TITLE
      SUBMENU_P(PSTR(CUSTOM_USER_MENU_TITLE), menu_user);
    #else
      SUBMENU(MSG_USER_MENU, menu_user);
    #endif
  #endif

  #if ENABLED(ADVANCED_PAUSE_FEATURE)
    #if E_STEPPERS == 1 && DISABLED(FILAMENT_LOAD_UNLOAD_GCODES)
      if (thermalManager.targetHotEnoughToExtrude(active_extruder))
        GCODES_ITEM(MSG_FILAMENTCHANGE, PSTR("M600 B0"));
      else
        SUBMENU(MSG_FILAMENTCHANGE, []{ _menu_temp_filament_op(PAUSE_MODE_CHANGE_FILAMENT, 0); });
    #else
      SUBMENU(MSG_FILAMENTCHANGE, menu_change_filament);
    #endif
  #endif

  #if EITHER(LED_CONTROL_MENU, CASE_LIGHT_MENU)
    SUBMENU(MSG_LEDS, menu_led);
  #endif

  //
  // Switch power on/off
  //
  #if ENABLED(PSU_CONTROL)
    if (powersupply_on)
      GCODES_ITEM(MSG_SWITCH_PS_OFF, PSTR("M81"));
    else
      GCODES_ITEM(MSG_SWITCH_PS_ON, PSTR("M80"));
  #endif

  #if BOTH(HAS_ENCODER_WHEEL, SDSUPPORT)

    if (!busy) {

      // *** IF THIS SECTION IS CHANGED, REPRODUCE ABOVE ***

      //
      // Autostart
      //
      #if ENABLED(MENU_ADDAUTOSTART)
        ACTION_ITEM(MSG_AUTOSTART, card.beginautostart);
      #endif

      if (card_detected) {
        if (!card_open) {
          #if PIN_EXISTS(SD_DETECT)
            GCODES_ITEM(MSG_CHANGE_MEDIA, M21_STR);
          #else
            GCODES_ITEM(MSG_RELEASE_MEDIA, PSTR("M22"));
          #endif
          SUBMENU(MSG_MEDIA_MENU, TERN(PASSWORD_ON_SD_PRINT_MENU, password.media_gatekeeper, menu_media));
        }
      }
      else {
        #if PIN_EXISTS(SD_DETECT)
          ACTION_ITEM(MSG_NO_MEDIA, nullptr);
        #else
          GCODES_ITEM(MSG_ATTACH_MEDIA, M21_STR);
        #endif
      }
    }

  #endif // HAS_ENCODER_WHEEL && SDSUPPORT

  #if HAS_SERVICE_INTERVALS
    static auto _service_reset = [](const int index) {
      print_job_timer.resetServiceInterval(index);
      ui.completion_feedback();
      ui.reset_status();
      ui.return_to_status();
    };
    #if SERVICE_INTERVAL_1 > 0
      CONFIRM_ITEM_P(PSTR(SERVICE_NAME_1),
        MSG_BUTTON_RESET, MSG_BUTTON_CANCEL,
        []{ _service_reset(1); }, ui.goto_previous_screen,
        GET_TEXT(MSG_SERVICE_RESET), F(SERVICE_NAME_1), PSTR("?")
      );
    #endif
    #if SERVICE_INTERVAL_2 > 0
      CONFIRM_ITEM_P(PSTR(SERVICE_NAME_2),
        MSG_BUTTON_RESET, MSG_BUTTON_CANCEL,
        []{ _service_reset(2); }, ui.goto_previous_screen,
        GET_TEXT(MSG_SERVICE_RESET), F(SERVICE_NAME_2), PSTR("?")
      );
    #endif
    #if SERVICE_INTERVAL_3 > 0
      CONFIRM_ITEM_P(PSTR(SERVICE_NAME_3),
        MSG_BUTTON_RESET, MSG_BUTTON_CANCEL,
        []{ _service_reset(3); }, ui.goto_previous_screen,
        GET_TEXT(MSG_SERVICE_RESET), F(SERVICE_NAME_3), PSTR("?")
      );
    #endif
  #endif

  #if ENABLED(LCD_INFO_MENU)
    SUBMENU(MSG_INFO_MENU, menu_info);
  #endif

  #if HAS_GAMES && DISABLED(LCD_INFO_MENU)
    #if ENABLED(GAMES_EASTER_EGG)
      SKIP_ITEM();
      SKIP_ITEM();
      SKIP_ITEM();
    #endif
    // Game sub-menu or the individual game
    {
      SUBMENU(
        #if HAS_GAME_MENU
          MSG_GAMES, menu_game
        #elif ENABLED(MARLIN_BRICKOUT)
          MSG_BRICKOUT, brickout.enter_game
        #elif ENABLED(MARLIN_INVADERS)
          MSG_INVADERS, invaders.enter_game
        #elif ENABLED(MARLIN_SNAKE)
          MSG_SNAKE, snake.enter_game
        #elif ENABLED(MARLIN_MAZE)
          MSG_MAZE, maze.enter_game
        #endif
      );
    }
  #endif

  END_MENU();
}

#endif // HAS_LCD_MENU
