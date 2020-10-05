/**
 * For directions on how to use this firmware visit http://uf2.th3dstudio.com
 * THIS VERSION IS NOT FOR PRODUCTION USE AT THIS TIME AND ONLY AVAILABLE FOR TESTING PURPOSES
 * NO IMPLIED SUPPORT OR WARRANTY IS PROVIDED WITH THIS FIRMWARE RELEASE
 */
#pragma once
#define CONFIGURATION_H_VERSION 020007

//===========================================================================
//============================ TH3D Configuration ===========================
//===========================================================================

// ONLY UNCOMMENT THINGS IN ONE PRINTER SECTION!!! IF YOU HAVE MULTIPLE MACHINES FLASH THEM ONE AT A TIME.

//===========================================================================
// ************************   CREALITY PRINTERS    **************************
//===========================================================================

//===========================================================================
// Creality CR-10 Options - Melzi (1284p Based) Board
//===========================================================================
//#define CR10
//#define CR10_MINI
//#define CR10_S4
//#define CR10_S5

// If you are using our EZOut V1/V2 (connects to LCD header) filament sensor kit please follow the install guide
// and then uncomment the #define EZOUT_ENABLE line below.
// Do NOT ever connect our filament sensor without the supplied adapter board.
//#define EZOUT_ENABLE

// EZABL Probe Mounts
//#define CR10_OEM
//#define CR10_VOLCANO
//#define CR10_V6HEAVYDUTY
//#define CR10_FANG
//#define TM3DAERO
//#define TM3DAERO_EXTENDED
//#define PETSFANG //This is the RIGHT mounted version - if using the left mount please use the CUSTOM_PROBE option.
//#define CUSTOM_PROBE

//===========================================================================
// Creality Ender 2 Options - Select 'Sanguino 1284p' from Tools > Board
//===========================================================================
//#define ENDER2

// If you are using our EZOut V2 (connects to the LCD header & connect the 2 pin connector to the "Check" header to the right of the LCD connection) filament sensor kit please follow the install guide
// and then uncomment the #define EZOUTV2_ENABLE line below. Do NOT ever connect our filament sensor without the supplied adapter board.
//#define EZOUTV2_ENABLE

// EZABL Probe Mounts (Ender 2 can use the same mounts as CR-10, Ender 2 Specific mounts minimize distance from probe to nozzle for max probing area)
// If you have issues with the non-Ender 2 mounts then please print them off and switch to one of them before contacting support. 
// This is because the probeable area on the non-Ender 2 mounts is too small typically to get a good result.
//#define ENDER2_OEM
//#define ENDER2_V6
//#define CR10_OEM
//#define CR10_VOLCANO
//#define CR10_V6HEAVYDUTY
//#define TM3DAERO
//#define TM3DAERO_EXTENDED
//#define PETSFANG  //This is the RIGHT mounted version - if using the left mount please use the CUSTOM_PROBE option.
//#define CUSTOM_PROBE

//===========================================================================
// Creality Ender 3/3 Pro Options - Select 'Sanguino 1284p' from Tools > Board
//===========================================================================
#define ENDER3

// If you are using our EZOut V1/V2 (connected to LCD header) filament sensor kit please follow the install guide
// and then uncomment the #define EZOUT_ENABLE line below.
// Do NOT ever connect our filament sensor without the supplied adapter board.
//#define EZOUT_ENABLE

// EZABL Probe Mounts (Ender 3 uses the same mounts as CR-10)
#define ENDER3_OEM
//#define CR10_VOLCANO
//#define CR10_V6HEAVYDUTY
//#define TM3DAERO
//#define TM3DAERO_EXTENDED
//#define PETSFANG  //This is the RIGHT mounted version - if using the left mount please use the CUSTOM_PROBE option.
//#define CUSTOM_PROBE

// Ender Xtender Kit Options
//#define ENDER_XTENDER_400
//#define ENDER_XTENDER_400XL
//#define ENDER_XTENDER_XL

//===========================================================================
// Creality Ender 5 Options - Select 'Sanguino 1284p' from Tools > Board
//===========================================================================
//#define ENDER5

// If you are using our EZOut V1/V2 (connected to LCD header) filament sensor kit please follow the install guide
// and then uncomment the #define EZOUT_ENABLE line below.
// Do NOT ever connect our filament sensor without the supplied adapter board.
//#define EZOUT_ENABLE

// EZABL Probe Mounts (Ender 5 can use most of the same mounts as CR-10)
//#define ENDER5_OEM
//#define CR10_OEM
//#define CR10_VOLCANO
//#define CR10_V6HEAVYDUTY
//#define TM3DAERO
//#define TM3DAERO_EXTENDED
//#define PETSFANG  //This is the RIGHT mounted version - if using the left mount please use the CUSTOM_PROBE option.
//#define CUSTOM_PROBE

// If you have the new Ender 5 or Ender 5 Pro Model that has the new 800steps/mm Z leadscrew uncomment the below option to set the correct steps/mm
//#define ENDER5_NEW_LEADSCREW

//===========================================================================
// *************************  END PRINTER SECTION   *************************
//===========================================================================

//===========================================================================
// EZABL Advanced Settings
//===========================================================================

// If you want more or less EZABL probe points change the number below (only used if EZABL enabled)
// Default is 3 which gives you 3x3 grid for a total of 9 points. STICK WITH ODD NUMBERS
#define EZABL_POINTS 3

// If you want to change how far in or out the probe senses change EZABL_PROBE_EDGE value below
// Most Machines - 35
// Binder Clips? - 50
#define EZABL_PROBE_EDGE 35

// If you have issues with your machine running the faster probe setting disable the #define EZABL_FASTPROBE below.
// NOTE: Most machines will work with the fast probe enabled. Use M48 to verify accuracy.
#define EZABL_FASTPROBE

// Superfast probing - Only works with the EZABL Pro Sensors
//#define EZABL_SUPERFASTPROBE

// Heaters will stay on during probing - only use if directed to by support. Do not use on AC beds.
//#define HEATERS_ON_DURING_PROBING

// Does your machine make weird noises/vibrations when it is probing the mesh? Enable this to slow down the speed between probe points.
//#define SLOWER_PROBE_MOVES

//================================================================================
// IF YOU HAVE A CUSTOM PROBE MOUNT OR ONE THAT IS NOT PRE-SUPPORTED UNCOMMENT THE
// CUSTOM_PROBE OPTION IN YOUR PRINTER SECTION AND ENTER YOUR PROBE LOCATION BELOW
//================================================================================
#if ENABLED(CUSTOM_PROBE)
  /**
  * Z Probe to nozzle (X,Y) offset, relative to (0, 0).
  *
  * In the following example the X and Y offsets are both positive:
  *
  *   #define NOZZLE_TO_PROBE_OFFSET { 10, 10, 0 }
  *
  *     +-- BACK ---+
  *     |           |
  *   L |    (+) P  | R <-- probe (20,20)
  *   E |           | I
  *   F | (-) N (+) | G <-- nozzle (10,10)
  *   T |           | H
  *     |    (-)    | T
  *     |           |
  *     O-- FRONT --+
  *   (0,0)
  *
  * Specify a Probe position as { X, Y, Z }
  * Do NOT enter an number for the Z position in here. Store your offset in EEPROM.
  */
  #define NOZZLE_TO_PROBE_OFFSET { 10, 10, 0 }
#endif


//===========================================================================
//******************** EXTRA FEATURES AND TWEAKS ****************************
//===========================================================================

// EXTRUDER SETTINGS -------------------------------
// Use to set custom esteps and/or reverse your E Motor direction if you are installing an extruder that needs the direction reversed.
// If you reversed the wiring on your E motor already (like the Bondtech Guide says to do) then you do not need to reverse it in the firmware here.

// If you want to change the Esteps for your printer you can uncomment the below line and set CUSTOM_ESTEPS_VALUE to what you want - USE WHOLE NUMBERS ONLY
// This option sets the esteps from the CUSTOM_ESTEPS_VALUE line below.
// If you need to reverse the e motor direction also enabled the REVERSE_E_MOTOR_DIRECTION option.
// Example EStep Values: TH3D Aluminum Extruder - 95 ESteps, TH3D Tough Extruder - 463 ESteps, BMG Extruder - 415 ESteps
// When installing a Tough Extruder or E3D Titan or Bondtech that is Geared you likely need to enable the REVERSE_E_MOTOR_DIRECTION option
//#define CUSTOM_ESTEPS
#define CUSTOM_ESTEPS_VALUE 463
//#define REVERSE_E_MOTOR_DIRECTION

// FILAMENT SENSOR UNLOAD SETTINGS -----------------
// If you have a filament sensor that is physically mounted to the machine you can enable MOUNTED_FILAMENT_SENSOR to set the unload length to 0 to prevent filament from backing up in the sensor by uncommenting MOUNTED_FILAMENT_SENSOR 
//#define MOUNTED_FILAMENT_SENSOR

// If you have a direct drive machine with a filament sensor uncomment DIRECT_DRIVE_PRINTER to decrease the unload length from 100mm to 20mm
//#define DIRECT_DRIVE_PRINTER

// THERMISTOR SETTINGS -----------------------------

// If you are using an E3D V6 Hotend (or Hemera) with their cartridge thermistor (not glass version) uncomment the below line.
//#define V6_HOTEND

// If you are using a Tough Hotend from TH3D or any thermistors TH3D sells for your hotend uncomment the below line.
//#define TH3D_HOTEND_THERMISTOR

// If you are using a known hotend thermistor value uncomment the below 2 lines and enter the thermistor number replacing the X after the #define KNOWN_HOTEND_THERMISTOR_VALUE
//#define KNOWN_HOTEND_THERMISTOR
//#define KNOWN_HOTEND_THERMISTOR_VALUE X

// If you have a hotend and thermistor capable of over 290C you can set the max temp value below.
// Setting this higher than 290C on a stock or traditional thermistor will damage it. Refer to your thermistor documentation to see what max temp is.
//#define HIGH_TEMP_THERMISTOR
#define HIGH_TEMP_THERMISTOR_TEMP 350

// BED THERMISTOR SETTINGS -------------------------

// If you are using a thermistor TH3D sells for your bed uncomment the below line.
//#define TH3D_BED_THERMISTOR

// If you are using a Keenovo with SSR and the Keenovo temperature sensor uncomment the below line.
//#define KEENOVO_TEMPSENSOR

// If you are using a known bed thermistor value uncomment the below 2 lines and enter the thermistor number replacing the X after the #define KNOWN_BED_THERMISTOR_VALUE
//#define KNOWN_BED_THERMISTOR
//#define KNOWN_BED_THERMISTOR_VALUE X

// If you are using an AC bed with a standalone controller (Keenovo) uncomment the below line to disable the heated bed in the firmware
//#define AC_BED

// MISC --------------------------------------------

// If you have a 5015 fan that whines when under 100% speed uncomment the below line.
//#define FAN_FIX

// Use your own printer name - Uncomment both lines
//#define CUSTOM_PRINTER_NAME
//#define USER_PRINTER_NAME "CHANGE ME"

// If your printer is homing to the endstops hard uncomment this to change the homing speed/divisor to make it less aggressive.
//#define SLOWER_HOMING

//===========================================================================
//****************** COMMUNITY REQUESTED FEATURES ***************************
//===========================================================================

// HOME OFFSET ADJUSTMENT --------------------------
// If you need to adjust your XY home offsets from defaults then you can uncomment the HOME_ADJUST line below and enter your
// custom XY offsets. This is provided for convenience and is unsupported with included product support.
// How to use - measure (home XY then jog using the LCD 1mm at a time) the X and Y distance the nozzle is off
// the build plate and then put those as NEGATIVE values below, positive values will NOT work (move your endstops to fix a positve offset).
//#define HOME_ADJUST
#define X_HOME_LOCATION -10
#define Y_HOME_LOCATION -10

// LINEAR ADVANCE ----------------------------------
// See here on how to use Linear Advance: http://marlinfw.org/docs/features/lin_advance.html
//#define LINEAR_ADVANCE
// Change the K Value here or use M900 KX.XX in your starting code (recommended).
#define LINEAR_ADVANCE_K 0

// BL TOUCH ----------------------------------------
// If you want to use the BL-Touch uncomment the 2 lines below and set your servo pin.
//#define BLTOUCH
// Here is where you set your servo pin.
//#define SERVO0_PIN 27

//===========================================================================
// **********************  END CONFIGURATION SETTINGS   *********************
//===========================================================================

/**
 * ****************************DO NOT TOUCH ANYTHING BELOW THIS COMMENT**************************
 * Core machine settings are below. Do NOT modify these unless you understand what you are doing.
 */

/**
 * Machine Configuration Settings
 */
 
 // PRINTER Settings
#if ENABLED(CR10) || ENABLED(CR10_MINI) || ENABLED(CR10_S4) || ENABLED(CR10_S5) || ENABLED(ENDER3) || ENABLED(ENDER5)
  // Sanity Checks for V11X boards
  #if ENABLED(EZOUT_ENABLE) && ENABLED(BLTOUCH)
    #error "You cannot use the BL Touch and EZOut Filament sensor together on this board."
  #elif ENABLED(BLTOUCH) && ENABLED(LINEAR_ADVANCE)
    #error "Due to space limitations on this board the BL Touch and Linear Advance cannot be used together. Disable Linear Advance or install non-BLTouch type sensor."
    // Since BL Touch type probes require additional code to stow and deploy the pin this requires much more additional code than a proximity sensor (like the EZABL)
    // Due to the V11X board having a Atmel 1284P with only 128K of memory we are not able to run both the BL Touch type sensor and Linear Advance together
  #endif

  #if ENABLED(ENDER5_NEW_LEADSCREW)
    #define CREALITY_Z_STEPS 800
  #else
    #define CREALITY_Z_STEPS 400
  #endif
  
  #define SERIAL_PORT 0

  #define SPACE_SAVER
  #define SLIM_LCD_MENUS

  #define BAUDRATE 115200
  
  #define CR10_STOCKDISPLAY

  #ifndef MOTHERBOARD
    #define MOTHERBOARD BOARD_MELZI_CREALITY
  #endif

  #if ENABLED(EZOUT_ENABLE)
    #define SPEAKER_KILL
  #endif

  #if ENABLED(CUSTOM_ESTEPS)
    #define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 80, CREALITY_Z_STEPS, CUSTOM_ESTEPS_VALUE }
  #else
    #define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 80, CREALITY_Z_STEPS, 95 }
  #endif
  #define DEFAULT_MAX_FEEDRATE          { 500, 500, 15, 25 }
  #define DEFAULT_MAX_ACCELERATION      { 500, 500, 100, 1000 }

  #define DEFAULT_ACCELERATION          500
  #define DEFAULT_RETRACT_ACCELERATION  500
  #define DEFAULT_TRAVEL_ACCELERATION   1000

  #define CLASSIC_JERK
  #if ENABLED(CLASSIC_JERK)
    #if ENABLED(CR10_S4) || ENABLED(CR10_S5)
      #define DEFAULT_XJERK                 5.0
      #define DEFAULT_YJERK                 5.0
    #else
      #define DEFAULT_XJERK                 7.0
      #define DEFAULT_YJERK                 7.0
    #endif
    #define DEFAULT_ZJERK  0.3
  #endif

  #define DEFAULT_EJERK    5.0

  #define EXTRUDERS 1

  #define X_BED_SIZE 220
  #define Y_BED_SIZE 220
  
  #define Z_MAX_POS 250
  
  #if ENABLED(HOME_ADJUST)
    #define X_MIN_POS X_HOME_ADJUST_LOCATION
    #define Y_MIN_POS Y_HOME_ADJUST_LOCATION
  #else
    #define X_MIN_POS 0
    #define Y_MIN_POS 0
  #endif

  #define USE_XMIN_PLUG
  #define USE_YMIN_PLUG
  #define USE_ZMIN_PLUG

  #define X_HOME_DIR -1
  #define Y_HOME_DIR -1
  #define Z_HOME_DIR -1
  
  #if NONE(V6_HOTEND, TH3D_HOTEND_THERMISTOR, KNOWN_HOTEND_THERMISTOR)
    #define TEMP_SENSOR_0 1
  #else
    #if ENABLED(EZBOARD_PT100)
      #define TEMP_SENSOR_0 20
    #elif ENABLED(V6_HOTEND)
      #define TEMP_SENSOR_0 5
    #elif ENABLED(KNOWN_HOTEND_THERMISTOR)
      #define TEMP_SENSOR_0 KNOWN_HOTEND_THERMISTOR_VALUE
    #elif ENABLED(TH3D_HOTEND_THERMISTOR)
      #define TEMP_SENSOR_0 1
    #endif
  #endif
  
  #define TEMP_SENSOR_1 0 
  #define TEMP_SENSOR_2 0
  #define TEMP_SENSOR_3 0
  #define TEMP_SENSOR_4 0
  #define TEMP_SENSOR_5 0
  #define TEMP_SENSOR_6 0
  #define TEMP_SENSOR_7 0
  
  #if NONE(TH3D_BED_THERMISTOR, KEENOVO_TEMPSENSOR, KNOWN_BED_THERMISTOR, AC_BED)
    #define TEMP_SENSOR_BED 1
  #else
    #if ENABLED(AC_BED)
      #define TEMP_SENSOR_BED 0
    #elif ENABLED(KNOWN_BED_THERMISTOR)
      #define TEMP_SENSOR_BED KNOWN_BED_THERMISTOR_VALUE
    #elif ENABLED(TH3D_BED_THERMISTOR)
      #define TEMP_SENSOR_BED 1
    #elif ENABLED(KEENOVO_TEMPSENSOR)
      #define TEMP_SENSOR_BED 11
    #endif
  #endif
  
  #define TEMP_SENSOR_PROBE 0
  #define TEMP_SENSOR_CHAMBER 0

  #define ENDSTOPPULLUPS

  #define X_MIN_ENDSTOP_INVERTING false
  #define Y_MIN_ENDSTOP_INVERTING false
  #define Z_MIN_ENDSTOP_INVERTING false
  #define X_MAX_ENDSTOP_INVERTING false
  #define Y_MAX_ENDSTOP_INVERTING false
  #define Z_MAX_ENDSTOP_INVERTING false
  #define Z_MIN_PROBE_ENDSTOP_INVERTING false
  #define Z_MIN_PROBE_USES_Z_MIN_ENDSTOP_PIN

  #define X_DRIVER_TYPE A4988
  #define Y_DRIVER_TYPE A4988
  #define Z_DRIVER_TYPE A4988
  #define E0_DRIVER_TYPE A4988
  
  #define ENDSTOP_INTERRUPTS_FEATURE

  #define X_ENABLE_ON 0
  #define Y_ENABLE_ON 0
  #define Z_ENABLE_ON 0
  #define E_ENABLE_ON 0

  #define INVERT_X_DIR true
  #define INVERT_Y_DIR true
  
  #if ENABLED(ENDER5)
    #define INVERT_Z_DIR true
  #else
    #define INVERT_Z_DIR false
  #endif  
  
  #if ENABLED(REVERSE_E_MOTOR_DIRECTION)
    #define INVERT_E0_DIR false
  #else
    #define INVERT_E0_DIR true
  #endif
  
  #define INVERT_E1_DIR false
  #define INVERT_E2_DIR false
  #define INVERT_E3_DIR false
  #define INVERT_E4_DIR false
  #define INVERT_E5_DIR false
  #define INVERT_E6_DIR false
  #define INVERT_E7_DIR false

  #if ENABLED(EZOUT_ENABLE)
    #define FILAMENT_RUNOUT_SENSOR
  #endif

  #if ENABLED(FILAMENT_RUNOUT_SENSOR)
    #define FIL_RUNOUT_ENABLED_DEFAULT true // Enable the sensor on startup. Override with M412 followed by M500.
    #define NUM_RUNOUT_SENSORS   1          // Number of sensors, up to one per extruder. Define a FIL_RUNOUT#_PIN for each.
    #define FIL_RUNOUT_STATE     LOW       // Pin state indicating that filament is NOT present.
    #define FIL_RUNOUT_PULLUP               // Use internal pullup for filament runout pins.
    //#define FIL_RUNOUT_PULLDOWN           // Use internal pulldown for filament runout pins.

    // Set one or more commands to execute on filament runout.
    // (After 'M412 H' Marlin will ask the host to handle the process.)
    #define FILAMENT_RUNOUT_SCRIPT "M600"

    // After a runout is detected, continue printing this length of filament
    // before executing the runout script. Useful for a sensor at the end of
    // a feed tube. Requires 4 bytes SRAM per sensor, plus 4 bytes overhead.
    //#define FILAMENT_RUNOUT_DISTANCE_MM 25

    #ifdef FILAMENT_RUNOUT_DISTANCE_MM
      // Enable this option to use an encoder disc that toggles the runout pin
      // as the filament moves. (Be sure to set FILAMENT_RUNOUT_DISTANCE_MM
      // large enough to avoid false positives.)
      //#define FILAMENT_MOTION_SENSOR
    #endif
  #endif
#endif
// End PRINTER Board Settings

/*
 * All other settings are stored in the Configuration_backend.h file. Do not change unless you know what you are doing.
 */
 
#include "Configuration_backend.h"