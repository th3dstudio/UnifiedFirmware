#pragma once

#define CONFIGURATION_BACKEND_H_VERSION 02010204

//===========================================================================
//======================= DO NOT MODIFY THIS FILE ===========================
//===========================================================================

#ifndef UNIFIED_VERSION
  #define UNIFIED_VERSION "TH3D UFW 2.91"
#endif

/**
 * ABL Probe Settings
 */

#if ENABLED(CUSTOM_PROBE)
  #define ABL_ENABLE
#endif
#if ENABLED(ENDER5_S1_OEM)
  #define ABL_ENABLE
  #define NOZZLE_TO_PROBE_OFFSET { -35, -2, 0 }
#endif
#if ENABLED(KP3S_PRO_OEM_MOUNT)
  #define ABL_ENABLE
  #define NOZZLE_TO_PROBE_OFFSET { -54, -9, 0 }
#endif
#if ANY(SV01_PRO_EZABL_OEM_MOUNT, SV05_EZABL_OEM_MOUNT)
  #define ABL_ENABLE
  #define NOZZLE_TO_PROBE_OFFSET { 43, 5, 0 }
#endif
#if ANY(SV01_PRO_EZABL_8MM_OEM_MOUNT, SV05_EZABL_8MM_OEM_MOUNT)
  #define ABL_ENABLE
  #define NOZZLE_TO_PROBE_OFFSET { 38, 10, 0 }
#endif
#if ANY(SV06_EZABL_OEM_MOUNT, SV06_PLUS_EZABL_OEM_MOUNT)
  #define ABL_ENABLE
  #define NOZZLE_TO_PROBE_OFFSET { 30, -28, 0 }
#endif
#if ENABLED(SV06_EZABL_NG8_OEM_MOUNT)
  #define ABL_ENABLE
  #define NOZZLE_TO_PROBE_OFFSET { 25, -23, 0 }
#endif
#if ENABLED(SPRITE_EXTRUDER_18MM_MOUNT)
  #define ABL_ENABLE
  #define NOZZLE_TO_PROBE_OFFSET { -44, -42, 0 }
#endif
#if ENABLED(ENDER7_OEM_MICRO_MOUNT)
  #define ABL_ENABLE
  #define NOZZLE_TO_PROBE_OFFSET { 38.5, 23.5, 0 }
#endif
#if ENABLED(ZYLTECH_GEAR_OEM)
  #define ABL_ENABLE
  #define NOZZLE_TO_PROBE_OFFSET { 0, -42, 0 }
#endif
#if ENABLED(ENDER6_PETSFANG)
  #define ABL_ENABLE
  #define NOZZLE_TO_PROBE_OFFSET { -45, -2, 0 }
#endif
#if ENABLED(AQUILA_X1_OEM)
  #define ABL_ENABLE
  #define NOZZLE_TO_PROBE_OFFSET { -45, -11, 0 }
#endif
#if ENABLED(ENDER3_S1_OEM_18MM)
  #define ABL_ENABLE
  #define NOZZLE_TO_PROBE_OFFSET { -44, -42, 0 }
#endif
#if ENABLED(ENDER3_S1_OEM_12MM)
  #define ABL_ENABLE
  #define NOZZLE_TO_PROBE_OFFSET { -42, -42, 0 }
#endif
#if ENABLED(ENDER2_PRO_OEM)
  #define ABL_ENABLE
  #define NOZZLE_TO_PROBE_OFFSET { -40, -13, 0 }
#endif
#if ENABLED(ENDER2_PRO_OEM_MICRO)
  #define ABL_ENABLE
  #define NOZZLE_TO_PROBE_OFFSET { -35, -9, 0 }
#endif
#if ENABLED(CHIRON_OEM)
  #define ABL_ENABLE
  #define NOZZLE_TO_PROBE_OFFSET { 40, 0, 0 }
#endif
#if ENABLED(ENDER6_OEM)
  #define ABL_ENABLE
  #define NOZZLE_TO_PROBE_OFFSET { -40, -14, 0 }
#endif
#if ANY(ENDER3_MAX_OEM,CRX_PRO_OEM)
  #define ABL_ENABLE
  #define NOZZLE_TO_PROBE_OFFSET { 57, -9, 0 }
#endif
#if ENABLED(KP3S_OEM_MOUNT)
  #define ABL_ENABLE
  #define NOZZLE_TO_PROBE_OFFSET { 37, -3, 0 }
#endif
#if ENABLED(KP3_OEM_MOUNT)
  #define NOZZLE_TO_PROBE_OFFSET { -46, -15, 0 }
  #define ABL_ENABLE
#endif
#if ANY(ENDER3_OEM, ENDER5_OEM, CR10_OEM, CR10S_OEM, ENDER5_PLUS_OEM, CR20_OEM)
  #define ABL_ENABLE
  #define NOZZLE_TO_PROBE_OFFSET { -44, -10, 0 }
#endif
#if ENABLED(ENDER3_V2_OEM)
  #define NOZZLE_TO_PROBE_OFFSET { -48, -15, 0 }
  #define ABL_ENABLE
#endif
#if ANY(SV01_OEM_MOUNT, SV03_OEM_MOUNT)
  #define NOZZLE_TO_PROBE_OFFSET { 22, -50, 0 }
  #define ABL_ENABLE
#endif
#if ENABLED(CR10_VOLCANO)
  #define NOZZLE_TO_PROBE_OFFSET { 30, 12, 0 }
  #define ABL_ENABLE
#endif
#if ENABLED(CR10_V6HEAVYDUTY)
  #define NOZZLE_TO_PROBE_OFFSET { 63, 0, 0 }
  #define ABL_ENABLE
#endif
#if ENABLED(TM3DAERO)
  #define NOZZLE_TO_PROBE_OFFSET { -51, -7, 0 }
  #define ABL_ENABLE
#endif
#if ENABLED(TM3DAERO_EXTENDED)
  #define NOZZLE_TO_PROBE_OFFSET { -55, -7, 0 }
  #define ABL_ENABLE
#endif
#if ENABLED(PETSFANG)
  #define NOZZLE_TO_PROBE_OFFSET { 48, -2, 0 }
  #define ABL_ENABLE
#endif
#if ENABLED(ENDER2_OEM)
  #define NOZZLE_TO_PROBE_OFFSET { -33, -10, 0 }
  #define ABL_ENABLE
#endif
#if ENABLED(ENDER2_V6)
  #define NOZZLE_TO_PROBE_OFFSET { -35, -2, 0 }
  #define ABL_ENABLE
#endif
#if ENABLED(CR10V2_OEM)
  #define NOZZLE_TO_PROBE_OFFSET { 52, 5, 0 }
  #define ABL_ENABLE
#endif
#if ENABLED(CR10S_PRO_OEM)
  #define NOZZLE_TO_PROBE_OFFSET { -27, 0, 0 }
  #define ABL_ENABLE
#endif
#if ENABLED(CRX_OEM)
  #define NOZZLE_TO_PROBE_OFFSET { -5, -48, 0 }
  #define ABL_ENABLE
#endif
#if ENABLED(ENDER4_OEM)
  #define NOZZLE_TO_PROBE_OFFSET { -53, -19, 0 }
  #define ABL_ENABLE
#endif

#if ENABLED(ABL_ENABLE)

  #if NONE(CHIRON)
    #define USE_PROBE_FOR_Z_HOMING
  #endif

  #define X_AXIS_TWIST_COMPENSATION //added in V2.90

  //#define ENABLE_LEVELING_FADE_HEIGHT // Disabling as it causes other issues
  #if ENABLED(ENABLE_LEVELING_FADE_HEIGHT)
    #define DEFAULT_LEVELING_FADE_HEIGHT 10
  #endif

  #define ABL_BILINEAR_SUBDIVISION //added in V2.90
  #define BILINEAR_SUBDIVISIONS 3  //added in V2.90
  
  #define SEGMENT_LEVELED_MOVES
  #define LEVELED_SEGMENT_LENGTH 5.0
  
  #undef Z_PROBE_OFFSET_RANGE_MIN
  #define Z_PROBE_OFFSET_RANGE_MIN    -10
  #undef Z_PROBE_OFFSET_RANGE_MAX
  #define Z_PROBE_OFFSET_RANGE_MAX     1
  
  #define Z_MIN_PROBE_REPEATABILITY_TEST
  #if NONE(BLTOUCH)
    #define Z_AFTER_HOMING             5
  #endif
  #define Z_PROBE_LOW_POINT           -10
  
  #if NONE(BLTOUCH)
    #define FIX_MOUNTED_PROBE
  #endif
  
  #if ANY(SLOWER_PROBE_MOVES, PROBING_STEPPERS_OFF)
    #define XY_PROBE_FEEDRATE (133*60)
  #else
    #if ENABLED(EZABL_SUPERFASTPROBE)
      #define XY_PROBE_FEEDRATE (266*60)
    #else
      #define XY_PROBE_FEEDRATE (200*60)
    #endif
  #endif
  
  #define PROBING_MARGIN EZABL_PROBE_EDGE
  
  #if DISABLED(HEATERS_ON_DURING_PROBING)
    #define PROBING_HEATERS_OFF   
  #endif
  
  #define MULTIPLE_PROBING 2
  #define AUTO_BED_LEVELING_BILINEAR
  
  #ifndef EZABL_POINTS
    #define EZABL_POINTS 3
  #endif
  
  #define GRID_MAX_POINTS_X EZABL_POINTS
  #define GRID_MAX_POINTS_Y GRID_MAX_POINTS_X
  #define Z_SAFE_HOMING
  
  #if ENABLED(Z_SAFE_HOMING)
    #define Z_SAFE_HOMING_X_POINT X_CENTER  // X point for Z homing
    #define Z_SAFE_HOMING_Y_POINT Y_CENTER  // Y point for Z homing
  #endif
  
  // ABL Probe Logic Settings
  #if ENABLED(BLTOUCH) // BLTouch uses false
    #undef Z_MIN_PROBE_ENDSTOP_INVERTING
    #define Z_MIN_PROBE_ENDSTOP_INVERTING false
    #undef Z_MIN_ENDSTOP_INVERTING
    #define Z_MIN_ENDSTOP_INVERTING false
  #elif (ENABLED(CR10S_PRO_STOCK_ABL) && ENABLED(CR10S_PRO)) || (ANY(ENDER3_S1, ENDER3_S1_PRO, ENDER3_S1_PLUS, ENDER5_S1) && DISABLED(INVERT_EZABL_LOGIC)) || (ANY(SOVOL_SV06, SOVOL_SV06_PLUS) && DISABLED(SV06_EZABL_INSTALLED)) || (NONE(ENDER3_S1, ENDER3_S1_PRO, ENDER3_S1_PLUS, ENDER5_S1) && ENABLED(INVERT_EZABL_LOGIC))
    //Ender 3 S1 & 5 S1 J713 header for Z Endstop is reverse logic via hardware for some reason. Need to invert the EZABL logic for it here.
    #undef Z_MIN_PROBE_ENDSTOP_INVERTING
    #define Z_MIN_PROBE_ENDSTOP_INVERTING false
    #undef Z_MIN_ENDSTOP_INVERTING
    #define Z_MIN_ENDSTOP_INVERTING false
  #else                // EZABL uses true
    #undef Z_MIN_PROBE_ENDSTOP_INVERTING
    #define Z_MIN_PROBE_ENDSTOP_INVERTING true
    #if DISABLED(CHIRON)
      #undef Z_MIN_ENDSTOP_INVERTING
      #define Z_MIN_ENDSTOP_INVERTING true
    #endif
  #endif

#endif

/**
 * Config Overrides
 */

#ifdef CUSTOM_X_BED_SIZE
  #undef X_BED_SIZE
  #define X_BED_SIZE CUSTOM_X_BED_SIZE
#endif

#ifdef CUSTOM_Y_BED_SIZE
  #undef Y_BED_SIZE
  #define Y_BED_SIZE CUSTOM_Y_BED_SIZE
#endif

#ifdef CUSTOM_Z_HEIGHT
  #undef Z_MAX_POS
  #define Z_MAX_POS CUSTOM_Z_HEIGHT
#endif

/**
 * TH3D Sanity Checks
 */

#if ENABLED(ABL_ENABLE) && ENABLED(S_CURVE_ACCELERATION)
  #error "S_CURVE_ACCELERATION is not compatible with ABL systems. Disable this and re-compile or comment out this error and continue at your own risk."
#endif

#if ENABLED(BLTOUCH) && DISABLED(CUSTOM_PROBE)
  #error "You must uncomment the CUSTOM_PROBE option in the EZABL probe mount section and then enter your mount offsets into the Custom Probe section."
#endif

#if ENABLED(BLTOUCH_ON_5PIN) && DISABLED(BLTOUCH)
  #error "You must also uncomment the #define BLTOUCH line when using the BLTOUCH_ON_5PIN option."
#endif

#if BOTH(BTT_TOUCH_SCREEN, ABL_ENABLE)
  #define G26_MESH_VALIDATION
#endif

#define NO_CREALITY_422_DRIVER_WARNING

#if ENABLED(G26_MESH_VALIDATION)
  #define MESH_TEST_NOZZLE_SIZE    0.4  // (mm) Diameter of primary nozzle.
  #define MESH_TEST_LAYER_HEIGHT   0.2  // (mm) Default layer height for G26.
  #define MESH_TEST_HOTEND_TEMP  205    // (°C) Default nozzle temperature for G26.
  #define MESH_TEST_BED_TEMP      60    // (°C) Default bed temperature for G26.
  #define G26_XY_FEEDRATE         20    // (mm/s) Feedrate for G26 XY moves.
  #define G26_XY_FEEDRATE_TRAVEL 100    // (mm/s) Feedrate for G26 XY travel moves.
  #define G26_RETRACT_MULTIPLIER   1.0  // G26 Q (retraction) used by default between mesh test elements.
#endif

// Bypass Linear Advance Low Jerk Warning
#define ALLOW_LOW_EJERK

/**
 * Temp Settings
 */

#define PREVENT_COLD_EXTRUSION
#if ENABLED(LDO_FILAMENT_ENABLE)
  #define EXTRUDE_MINTEMP 190
#else
  #define EXTRUDE_MINTEMP 170
#endif

#define DUMMY_THERMISTOR_998_VALUE 25
#define DUMMY_THERMISTOR_999_VALUE 100
#define TEMP_SENSOR_REDUNDANT_MAX_DIFF 10

#if TEMP_SENSOR_0 == 66
  #define HEATER_0_MINTEMP 21
#else
  #define HEATER_0_MINTEMP 0
#endif
#define HEATER_1_MINTEMP   HEATER_0_MINTEMP
#define HEATER_2_MINTEMP   HEATER_0_MINTEMP
#define HEATER_3_MINTEMP   HEATER_0_MINTEMP
#define HEATER_4_MINTEMP   HEATER_0_MINTEMP
#define HEATER_5_MINTEMP   HEATER_0_MINTEMP
#define HEATER_6_MINTEMP   HEATER_0_MINTEMP
#define HEATER_7_MINTEMP   HEATER_0_MINTEMP
#define BED_MINTEMP        HEATER_0_MINTEMP

#if ANY(HIGH_TEMP_THERMISTOR, HIGH_TEMP_THERMISTOR_E1)
  #if ENABLED(HIGH_TEMP_THERMISTOR)
    #define HEATER_0_MAXTEMP HIGH_TEMP_THERMISTOR_TEMP
  #else
    #define HEATER_0_MAXTEMP 285
  #endif
  #if ENABLED(HIGH_TEMP_THERMISTOR_E1)
    #define HEATER_1_MAXTEMP HIGH_TEMP_THERMISTOR_TEMP_E1
  #else
    #define HEATER_1_MAXTEMP 285
  #endif
  #define HEATER_2_MAXTEMP 285
  #define HEATER_3_MAXTEMP 285
  #define HEATER_4_MAXTEMP 285
  #define HEATER_5_MAXTEMP 285
  #define HEATER_6_MAXTEMP 285
  #define HEATER_7_MAXTEMP 285
#else
  #define HEATER_0_MAXTEMP 285
  #define HEATER_1_MAXTEMP HEATER_0_MAXTEMP
  #define HEATER_2_MAXTEMP HEATER_0_MAXTEMP
  #define HEATER_3_MAXTEMP HEATER_0_MAXTEMP
  #define HEATER_4_MAXTEMP HEATER_0_MAXTEMP
  #define HEATER_5_MAXTEMP HEATER_0_MAXTEMP
  #define HEATER_6_MAXTEMP HEATER_0_MAXTEMP
  #define HEATER_7_MAXTEMP HEATER_0_MAXTEMP
#endif

#if ENABLED(BED_HIGHTEMP)
  #define BED_MAXTEMP 150
#else
  #define BED_MAXTEMP 120
#endif

/**
 * Thermal Overshoot
 * During heatup (and printing) the temperature can often "overshoot" the target by many degrees
 * (especially before PID tuning). Setting the target temperature too close to MAXTEMP guarantees
 * a MAXTEMP shutdown! Use these values to forbid temperatures being set too close to MAXTEMP.
 */
#define HOTEND_OVERSHOOT 15   // (°C) Forbid temperatures over MAXTEMP - OVERSHOOT
#define BED_OVERSHOOT    10   // (°C) Forbid temperatures over MAXTEMP - OVERSHOOT
#define COOLER_OVERSHOOT  2   // (°C) Forbid temperatures closer than OVERSHOOT

#define TEMP_RESIDENCY_TIME      3
#define TEMP_WINDOW              1
#define TEMP_HYSTERESIS          3

#define TEMP_BED_RESIDENCY_TIME  3
#define TEMP_BED_WINDOW          1
#define TEMP_BED_HYSTERESIS      3

// PID Settings
#define PIDTEMP
#define BANG_MAX 255
#define PID_MAX BANG_MAX
#define PID_K1 0.95

#if NONE(DWIN_CREALITY_LCD, DWIN_CREALITY_LCD_ENHANCED)
  #define PID_AUTOTUNE_MENU
#endif

#if NONE(DWIN_CREALITY_LCD, DWIN_CREALITY_LCD_ENHANCED)
  #define PID_EDIT_MENU
#endif

#ifndef DEFAULT_Kp
  #define DEFAULT_Kp 22.2 // Define Marlin default PID if no machine specific PID is defined.
  #define DEFAULT_Ki 1.08
  #define DEFAULT_Kd 114
#endif

#if ENABLED(ENABLE_PIDBED) // PID Bed is not needed. Bang Bang loop is set to 500ms
  #define PIDTEMPBED
  #define MAX_BED_POWER 255
  #if ENABLED(PIDTEMPBED)
    #ifndef DEFAULT_bedKp
      #define  DEFAULT_bedKp 113.36
      #define  DEFAULT_bedKi 21.62
      #define  DEFAULT_bedKd 148.59
    #endif
  #endif
#endif

#if EITHER(PIDTEMP, PIDTEMPBED)
  #define PID_FUNCTIONAL_RANGE 10
#endif
// End PID Settings

// Enable Thermal Protection for Bed and Hotends
#define THERMAL_PROTECTION_HOTENDS
#define THERMAL_PROTECTION_BED

/**
 * General Firmware Settings
 */

#define STRING_CONFIG_H_AUTHOR "TH3D Studio"
#define CUSTOM_VERSION_FILE Version.h

#if ENABLED(CUSTOM_PRINTER_NAME)
  #define CUSTOM_MACHINE_NAME USER_PRINTER_NAME
#else
  #if ENABLED(EZBOARD_DIY)
    #define CUSTOM_MACHINE_NAME "EZBoard DIY"
  #elif ALL(BLTOUCH, CRTOUCH_PROBE_NAMING)
    #define CUSTOM_MACHINE_NAME "TH3D CRTouch"
  #elif ENABLED(BLTOUCH)
    #define CUSTOM_MACHINE_NAME "TH3D BLTouch"
  #elif ENABLED(ABL_ENABLE) && DISABLED(BLTOUCH)
    #define CUSTOM_MACHINE_NAME "TH3D EZABL"
  #elif ENABLED(EZOUT_ENABLE)
    #define CUSTOM_MACHINE_NAME "TH3D EZOut"
  #elif ENABLED(CR10S_PRO_STOCK_ABL) && ENABLED(CR10S_PRO)
    #define CUSTOM_MACHINE_NAME "CR-10S Pro"
  #else
    #define CUSTOM_MACHINE_NAME SHORT_BUILD_VERSION
  #endif
#endif

#define DEFAULT_NOMINAL_FILAMENT_DIA 1.75

// Homing Speed Settings XYZ
#if ENABLED(SLOWER_HOMING)
  #define HOMING_FEEDRATE_MM_M { (20*60), (20*60), (4*60) }
  #define Z_PROBE_FEEDRATE_FAST (4*60)
#else
  #if ALL(EZABL_SUPERFASTPROBE, ABL_ENABLE) && NONE(BLTOUCH)
    #define HOMING_FEEDRATE_MM_M { (50*60), (50*60), (15*60) }
    #define Z_PROBE_FEEDRATE_FAST (15*60)
  #elif ALL(EZABL_FASTPROBE, ABL_ENABLE)
    #define HOMING_FEEDRATE_MM_M { (50*60), (50*60), (8*60) }
    #define Z_PROBE_FEEDRATE_FAST (8*60)
  #else
    #define HOMING_FEEDRATE_MM_M { (50*60), (50*60), (5*60) }
    #define Z_PROBE_FEEDRATE_FAST (5*60)
  #endif
#endif

#define Z_MIN_POS 0
#define X_MAX_POS X_BED_SIZE
#define Y_MAX_POS Y_BED_SIZE
#define VALIDATE_HOMING_ENDSTOPS
#define PRINTJOB_TIMER_AUTOSTART

#if DISABLED(NO_SDCARD)
  #define SDSUPPORT
#endif

#if DISABLED(SPEAKER_KILL)
  #define SPEAKER
#endif

#if ENABLED(FAN_FIX)
  #define FAN_SOFT_PWM
  #define SOFT_PWM_SCALE 1
  #define SOFT_PWM_DITHER
#else
  #define SOFT_PWM_SCALE 0
#endif

#if ENABLED(BLTOUCH)
  #define Z_CLEARANCE_DEPLOY_PROBE   5
  #define Z_CLEARANCE_BETWEEN_PROBES 5
  #define Z_CLEARANCE_MULTI_PROBE    5
  #define Z_PROBE_FEEDRATE_SLOW (Z_PROBE_FEEDRATE_FAST / 2)
  #define ENDSTOPPULLUP_ZMIN
  #define ENDSTOPPULLUP_ZMIN_PROBE
  #define BLTOUCH_SET5V_DELAY   150
  #define BLTOUCH_SETOD_DELAY   150
  #define BLTOUCH_MODE_STORE_DELAY 150
  #define BLTOUCH_DEPLOY_DELAY   250
  #define BLTOUCH_STOW_DELAY     250
  #define BLTOUCH_RESET_DELAY    250
#elif ENABLED(EZABL_SUPERFASTPROBE) && ENABLED(ABL_ENABLE)
  #define Z_CLEARANCE_DEPLOY_PROBE   3
  #define Z_CLEARANCE_BETWEEN_PROBES 3
  #define Z_CLEARANCE_MULTI_PROBE    3
  #define Z_PROBE_FEEDRATE_SLOW (Z_PROBE_FEEDRATE_FAST / 1.5)
#else
  #define Z_CLEARANCE_DEPLOY_PROBE   5
  #define Z_CLEARANCE_BETWEEN_PROBES 4
  #define Z_CLEARANCE_MULTI_PROBE    4
  #define Z_PROBE_FEEDRATE_SLOW (Z_PROBE_FEEDRATE_FAST / 2)
#endif

#define HOST_KEEPALIVE_FEATURE
#define DEFAULT_KEEPALIVE_INTERVAL 2
#define BUSY_WHILE_HEATING

#define EEPROM_SETTINGS
#define EEPROM_CHITCHAT
#define EEPROM_BOOT_SILENT
#define EEPROM_AUTO_INIT
#define EEPROM_INIT_NOW

#define MIN_SOFTWARE_ENDSTOPS
#if ENABLED(MIN_SOFTWARE_ENDSTOPS)
  #define MIN_SOFTWARE_ENDSTOP_X
  #define MIN_SOFTWARE_ENDSTOP_Y
  #if DISABLED(ABL_ENABLE)
    #define MIN_SOFTWARE_ENDSTOP_Z
  #endif
#endif

#define MAX_SOFTWARE_ENDSTOPS
#if ENABLED(MAX_SOFTWARE_ENDSTOPS)
  #define MAX_SOFTWARE_ENDSTOP_X
  #define MAX_SOFTWARE_ENDSTOP_Y
  #define MAX_SOFTWARE_ENDSTOP_Z
#endif

#define PREHEAT_1_LABEL       "PLA"
#define PREHEAT_1_TEMP_HOTEND 210
#define PREHEAT_1_TEMP_BED     60
#define PREHEAT_1_FAN_SPEED     0

#define PREHEAT_2_LABEL       "PETG" //Added in V2.90
#define PREHEAT_2_TEMP_HOTEND 235 //Added in V2.90
#define PREHEAT_2_TEMP_BED     80 //Added in V2.90
#define PREHEAT_2_FAN_SPEED     0 //Added in V2.90

#define PREHEAT_3_LABEL       "ABS/ASA" //Added in V2.90
#define PREHEAT_3_TEMP_HOTEND 245 //Added in V2.90
#define PREHEAT_3_TEMP_BED    100 //Added in V2.90
#define PREHEAT_3_FAN_SPEED     0 //Added in V2.90

#define NOZZLE_PARK_FEATURE
#if ENABLED(NOZZLE_PARK_FEATURE)
  #define NOZZLE_PARK_POINT { 10, 10, 10 }
  #define NOZZLE_PARK_XY_FEEDRATE 100  
  #define NOZZLE_PARK_Z_FEEDRATE 8
#endif

#define DISABLE_X false
#define DISABLE_Y false
#define DISABLE_Z false
#define DISABLE_E false
#define DISABLE_INACTIVE_EXTRUDER

#if DISABLED(DISABLE_ENDSTOP_NOISE_FILTERING)
  #define ENDSTOP_NOISE_THRESHOLD 2
#endif

#define SERVO_DELAY { 300 }

#define FILAMENT_RUNOUT_THRESHOLD 100 //Prevent false sensor triggers

#define DETECT_BROKEN_ENDSTOP  //Added in V2.90

#define NO_CONFIGURATION_EMBEDDING_WARNING  //Added in V2.90

/**
 * LCD General Settings
 */

#define LCD_LANGUAGE en
#define DISPLAY_CHARSET_HD44780 JAPANESE
#define LCD_INFO_SCREEN_STYLE 0
#define DISABLE_REDUCED_ACCURACY_WARNING
#if NONE(DWIN_CREALITY_LCD, DWIN_CREALITY_LCD_ENHANCED, LCD2004, TFT_COLOR_UI, DWIN_CREALITY_LCD_ENHANCED, DWIN_CREALITY_LCD_JYERSUI, DWIN_MARLINUI_PORTRAIT, DWIN_MARLINUI_LANDSCAPE)
  #define SHOW_BOOTSCREEN
  #define SHOW_CUSTOM_BOOTSCREEN
  
  #if DISABLED(DISABLE_ENCODER_NOISE_FILTER)
    #define ENCODER_NOISE_FILTER //Added in V2.90
  #endif
  
  #if ENABLED(ENCODER_NOISE_FILTER) //Added in V2.90
    #define ENCODER_SAMPLES 10
  #endif

#endif

#define LCD_FEEDBACK_FREQUENCY_DURATION_MS 40  //Added in V2.90
#define LCD_FEEDBACK_FREQUENCY_HZ 2000         //Added in V2.90

#define USE_BIG_EDIT_FONT

#if DISABLED(DWIN_CREALITY_LCD)
  #define INDIVIDUAL_AXIS_HOMING_MENU
#endif

#if NONE(DWIN_CREALITY_LCD, DWIN_CREALITY_LCD_ENHANCED)
  #define LCD_BED_TRAMMING
#endif

#if ENABLED(LCD_BED_TRAMMING)
  #define BED_TRAMMING_INSET_LFRB { 30, 30, 30, 30 } // (mm) Left, Front, Right, Back insets
  #define BED_TRAMMING_HEIGHT      0.0        // (mm) Z height of nozzle at leveling points
  #define BED_TRAMMING_Z_HOP       5.0        // (mm) Z height of nozzle between leveling points
  #define BED_TRAMMING_INCLUDE_CENTER       // Move to the center after the last corner
  //#define BED_TRAMMING_USE_PROBE
  #if ENABLED(BED_TRAMMING_USE_PROBE)
    #define BED_TRAMMING_PROBE_TOLERANCE 0.1  // (mm)
    #define BED_TRAMMING_VERIFY_RAISED        // After adjustment triggers the probe, re-probe to verify
    //#define BED_TRAMMING_AUDIO_FEEDBACK
  #endif

  /**
   * Corner Leveling Order
   *
   * Set 2 or 4 points. When 2 points are given, the 3rd is the center of the opposite edge.
   *
   *  LF  Left-Front    RF  Right-Front
   *  LB  Left-Back     RB  Right-Back
   *
   * Examples:
   *
   *      Default        {LF,RB,LB,RF}         {LF,RF}           {LB,LF}
   *  LB --------- RB   LB --------- RB    LB --------- RB   LB --------- RB
   *  |  4       3  |   | 3         2 |    |     <3>     |   | 1           |
   *  |             |   |             |    |             |   |          <3>|
   *  |  1       2  |   | 1         4 |    | 1         2 |   | 2           |
   *  LF --------- RF   LF --------- RF    LF --------- RF   LF --------- RF
   */
  #define BED_TRAMMING_LEVELING_ORDER { LF, RF, RB, LB }
#endif

#if ENABLED(MANUAL_MESH_LEVELING) && DISABLED(ABL_ENABLE)
  #define LCD_BED_LEVELING
  #define MESH_BED_LEVELING
  #define RESTORE_LEVELING_AFTER_G28
  #define MESH_EDIT_Z_STEP  0.025
  #define LCD_PROBE_Z_RANGE 4
  #define MESH_INSET EZABL_PROBE_EDGE
  
  #define SEGMENT_LEVELED_MOVES
  #define LEVELED_SEGMENT_LENGTH 5.0

  #ifndef EZABL_POINTS
    #define EZABL_POINTS 3
  #endif
  
  #define GRID_MAX_POINTS_X EZABL_POINTS
  #define GRID_MAX_POINTS_Y GRID_MAX_POINTS_X
  #define XY_PROBE_FEEDRATE (50*60)
  #define MESH_EDIT_MENU
#endif
