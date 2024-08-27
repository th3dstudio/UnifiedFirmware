/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2023 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
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
#pragma once

#ifndef FAN_SOFT_PWM
  #define FAN_SOFT_PWM
#endif
#ifndef SOFT_PWM_SCALE
  #define SOFT_PWM_SCALE 0
#endif

#include "env_validate.h"

#define BOARD_INFO_NAME      "STM32F401RET6"
#define DEFAULT_MACHINE_NAME "Ender-5 S1"

#define BOARD_NO_NATIVE_USB

#define DISABLE_DEBUG false // DISABLE_(DEBUG|JTAG) is not supported for STM32F4.

#define IIC_BL24CXX_EEPROM                      // EEPROM on I2C-0 used only for display settings
#if ENABLED(IIC_BL24CXX_EEPROM)
  #define IIC_EEPROM_SDA                    PA11
  #define IIC_EEPROM_SCL                    PA12
  #define MARLIN_EEPROM_SIZE                0x800  // 2Kb (24C16)
#else
  #define SDCARD_EEPROM_EMULATION                  // SD EEPROM until all EEPROM is BL24CXX
  #define MARLIN_EEPROM_SIZE                0x800  // 2Kb
#endif

//
// Servos
//
#define SERVO0_PIN                          PC13  // BLTouch OUT

//
// Limit Switches
//
#define X_STOP_PIN                          PA5
#define Y_STOP_PIN                          PA6

#if ENABLED(BLTOUCH)
  #define Z_MAX_PIN                         PA15
  #define Z_MIN_PIN                         PC14
#else
  #define Z_MIN_PIN                         PA15
#endif

//
// Filament runout
//
#if ENABLED(FILAMENT_RUNOUT_SENSOR)
  #define FIL_RUNOUT_PIN                    PC15
#endif

//
// Steppers Motor drive chip power control
//
#define X_ENABLE_PIN                        PC3
#define X_STEP_PIN                          PC2
#define X_DIR_PIN                           PB9

#define Y_ENABLE_PIN                        PC3
#define Y_STEP_PIN                          PB8
#define Y_DIR_PIN                           PB7

#define Z_ENABLE_PIN                        PC3
#define Z_STEP_PIN                          PB6
#define Z_DIR_PIN                           PB5

#define E0_ENABLE_PIN                       PC3
#define E0_STEP_PIN                         PB4
#define E0_DIR_PIN                          PB3

//
// Temperature Sensors
//
#ifndef TEMP_0_PIN
  #define TEMP_0_PIN                       PC5   // E1_THERMISTOR PA0 -> PT100
#endif
#define TEMP_BED_PIN                       PC4   // BED_THERMISTOR_1

//
// Heaters / Fans
//
#define HEATER_0_PIN                       PA1   // E1_HEAT_PWM
#define HEATER_BED_PIN                     PA7   // BED_HEAT_1 FET

#define FAN_PIN0                            PA0   // Part cooling fan FET

//
// SD Card
//
#define SD_DETECT_PIN                     PC7
#define SDCARD_CONNECTION                 ONBOARD
#define ONBOARD_SPI_DEVICE                1
#define ONBOARD_SD_CS_PIN                 PC12  // SDSS
#define ONBOARD_SDIO
#define NO_SD_HOST_DRIVE                  // This board's SD is only seen by the printer

/**
 *    RET6 12864 LCD
 *        ------
 *  PC6  | 1  2 | PB2
 *  PA2  | 3  4 | PA3
 *  PB14   5  6 | PB13
 *  PB12 | 7  8 | PB15
 *   GND | 9 10 | 5V
 *        ------
 */

#define EXP3_01_PIN                       PC6
#define EXP3_02_PIN                       PB2
#define EXP3_03_PIN                       PA2
#define EXP3_04_PIN                       PA3
#define EXP3_05_PIN                       PB14
#define EXP3_06_PIN                       PB13
#define EXP3_07_PIN                       PB12
#define EXP3_08_PIN                       PB15

#define LCD_PINS_RS                EXP3_07_PIN
#define LCD_PINS_EN                EXP3_08_PIN
#define LCD_PINS_D4                EXP3_06_PIN

#define BTN_ENC                    EXP3_02_PIN
#define BTN_EN1                    EXP3_03_PIN
#define BTN_EN2                    EXP3_05_PIN

#define BEEPER_PIN                 EXP3_01_PIN