/**
 * For directions on how to use this firmware visit http://uf2.th3dstudio.com and click on your printer/board link
 * NO IMPLIED SUPPORT OR WARRANTY IS PROVIDED WITH THIS FIRMWARE AND IS PROVIDED AS-IS
 * 
 * THIS FIRMWARE VERSION IS FOR DIY USE ONLY BY ADVANCED USERS AND IS NOT COVERED UNDER INCLUDED TECHNICAL SUPPORT
 */
#pragma once
#define CONFIGURATION_H_VERSION 02010204

#define UNIFIED_VERSION "TH3D UFW 2.92"
#define STRING_DISTRIBUTION_DATE "2024-10-03"

//#@CONFIGURATION_START_FLAG

//===========================================================================
//============================ TH3D Configuration ===========================
//===========================================================================

// UNCOMMENT MEANS REMOVING THE // IN FRONT OF A #define XXXXXX LINE.

//===========================================================================
// ********************   EZBOARD V2 BOARD DIY CONFIG   *********************
//===========================================================================

/**
 * !!!Important Information!!!
 * This firmware is being put out as a courtesy for people who want to use the EZBoard in their custom printer.
 * Using the EZBoard in a custom printer is an advanced setup for users who know what they are doing.
 * 
 * EZFirmware Site - This firmware can be used with our EZFirmware compile site. Just edit and upload this Configuration.h file
 * to the config file upload page here: https://ezfirmware.th3dstudio.com/upload/. Editing this file on the site is
 * not and will not be added to the EZFirmware site as it is an advanced, non-supported configuration.
 * 
 * Compatible LCDs - This firmware is setup to use the Single Cable (EXP3) Creality LCD 
 * OR the TH3D 12864 LCD with the Dual Cable LCD adapter board 
 * OR the BTT TFT35-E3 with serial+EXP3 plugs
 * 
 * SD Card Slot - Regardless if your LCD has an SD slot or not the onboard SD slot will always be the one used
 * 
 * Z Homing Direction - This firmware only supports homing Z to the MIN position (not MAX) at this time.
 */

/**
 * Build Volume Settings
 * Set your printer build area sizes below
 * 
 * X_BED_SIZE - The size in MM of your X Axis printable area
 * Y_BED_SIZE - The size in MM of your Y Axis printable area
 * Z_MAX_POS - The tallest your machine can print without hitting the frame
 */

#define X_BED_SIZE 300
#define Y_BED_SIZE 300
#define Z_MAX_POS 400

/**
 * Motor Direction Settings
 * Set the motor direction below. Changing a false to a true will change the motor direction
 * Flash the firmware, put your print head and Z to the middle and tell each to move +10mm
 * If an axis moves the wrong direction then change the false to a true below and flash the board
 * 
 * INVERT_X_DIR - Changing from false to true changes the direction of the X axis
 * INVERT_Y_DIR - Changing from false to true changes the direction of the Y axis
 * INVERT_Z_DIR - Changing from false to true changes the direction of the Z axis
 * INVERT_E0_DIR - Changing from false to true changes the direction of the Extruder motor <- Hotend must be over 170C for the motor to move
 */

#define INVERT_X_DIR false
#define INVERT_Y_DIR false
#define INVERT_Z_DIR false
#define INVERT_E0_DIR false

/**
 * Endstop Logic Settings
 * Test your endstops with the M119 command by sending it to the printer over USB
 * When a switch is pressed it should show "TRIGGERED" and when not pressed it will show "open".
 * If a switch is showing the opposite of what it should then change the false to a true below for that switch
 * 
 * ALL SETTINGS - Changing from false to true changes when a switch shows "TRIGGERED" based on its signal (NC vs NO)
 */

#define X_ENDSTOP_LOGIC false
#define Y_ENDSTOP_LOGIC false
#define Z_ENDSTOP_LOGIC false

/**
 * XY Homing Direction Settings
 * Most printers home to the "MIN" position on the XY. 
 * If your machine homes to "MAX" then change the -1 to a 1 for the axis that needs to home to the "MAX" position
 * 
 * A value of -1 homes to "MIN"
 * A value of 1 homes to "MAX"
 */

#define X_HOME_DIR -1
#define Y_HOME_DIR -1

/**
 * Motion Settings
 * Below are settings for steps per mm, acceleration, and jerk.
 * 
 * Our latest firmware has smart logic to automatically set the best default acceleration and jerk values based on your printer bed size.
 * If you want to set your own, just uncomment the line you want to manually set yourself.
 * Make sure when setting the acceleration values that the DEFAULT_ACCELERATION is not higher than the MAX_X/Y_ACCEL
 */

// Steps per MM -------------------------------------------------------------
#define X_STEPS_MM 80
#define Y_STEPS_MM 80
#define Z_STEPS_MM 400
#define E_STEPS_MM 95

// Acceleration Settings ----------------------------------------------------
//#define DEFAULT_ACCELERATION          500
//#define DEFAULT_RETRACT_ACCELERATION  500
//#define DEFAULT_TRAVEL_ACCELERATION   1000
//#define MAX_X_ACCEL 1000
//#define MAX_Y_ACCEL 1000

// Jerk Settings ------------------------------------------------------------
//#define DEFAULT_XJERK 5.0
//#define DEFAULT_YJERK 5.0
//#define DEFAULT_ZJERK 0.3
//#define DEFAULT_EJERK 5.0

/**
 * Thermistor Settings
 * 
 * This firmware defaults to Marlin thermistor #1 if no other option is set below for the hotend and bed.
 * Most printers use Marlin thermistor #1 for their stock thermistor setting
 */

// Hotend Thermistor Settings -----------------------------------------------

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

// E3D PT100 Thermocouple Support
// Refer to the EZBoard installation documentation for connecting the PT100 to the EZBoard V2
// You will use the SWD Header for 3.3V power to the amplifier board and use the SIG pin from the SERVO header for the signal.
//#define EZBOARD_PT100
// NOTE - Due this uses the SIGNAL pin from the SERVO header so you cannot use the PT100 and a BLTouch at the same time on this board.

// Bed Thermistor Settings --------------------------------------------------

// If you are using a thermistor TH3D sells for your bed uncomment the below line.
//#define TH3D_BED_THERMISTOR

// If you are using a Keenovo with SSR and the Keenovo temperature sensor uncomment the below line.
//#define KEENOVO_TEMPSENSOR

// If you are using a known bed thermistor value uncomment the below 2 lines and enter the thermistor number replacing the X after the #define KNOWN_BED_THERMISTOR_VALUE
//#define KNOWN_BED_THERMISTOR
//#define KNOWN_BED_THERMISTOR_VALUE X

// If you are using an AC bed with a standalone controller (Keenovo) uncomment the below line to disable the heated bed in the firmware
//#define AC_BED

/**
 * Other Settings
 */

// Baud Rate - Valid settings are 115200 and 250000 -------------------------
#define BAUDRATE 115200

// Printer Voltage - Uncomment your machine voltage -------------------------
//#define PRINTER_VOLTAGE_12
#define PRINTER_VOLTAGE_24

// Motor Currents - Raise current if steps are being lost -------------------
#define X_MOTOR_CURRENT 600
#define Y_MOTOR_CURRENT 600
#define Z_MOTOR_CURRENT 800
#define E0_MOTOR_CURRENT 800

// Filament Sensor Options --------------------------------------------------
// If you are using our EZOut Sensor connect to the FIL SENSOR header with the RED wire lined up with the "5V" marking by the header and uncomment the below line.
//#define EZOUT_ENABLE

// If you are using the Creality CR-10S Sensor connect to the FIL SENSOR header with the RED wire lined up with the "5V" marking by the header and uncomment the below line.
//#define CR10S_STOCKFILAMENTSENSOR

// Sample EZABL Probe Mounts ------------------------------------------------
// Uncomment the mount you are using for your EZABL to enable it in the firmware.
//#define CR10_OEM                 //OEM Mount for Creality Machines (Ender3/Ender5/CR-10/CR-10S/CR-20)
//#define ENDER2_OEM               //Ender 2 Specific OEM Mount
//#define ENDER2_V6                //Ender 2 Specific V6 Mount
//#define SV01_OEM_MOUNT           //Sovol SV01 OEM Mount
//#define CR10_VOLCANO             //TH3D CR-10 Volcano Mount 
//#define CR10_V6HEAVYDUTY         //V6 Heavy Duty Mount
//#define TM3DAERO                 //TM3D Aero Mount for V6
//#define TM3DAERO_EXTENDED        //TM3D Arto Mount for Volcano
//#define PETSFANG                 //This is the RIGHT mounted version
//#define SPRITE_EXTRUDER_18MM_MOUNT // Mounts to the stock CRTouch bracket
//#define CUSTOM_PROBE             //For any other probe mount (also used for BL Touch), Enter offsets below

// PID Settings -------------------------------------------------------------
// If you want to put your PID settings in at the firmware level uncomment the 3 lines for each PID value setting

// Hotend PID
//#define DEFAULT_Kp 22.2
//#define DEFAULT_Ki 1.08
//#define DEFAULT_Kd 114

// Bed PID - To use PID on enable ENABLE_PIDBED below
//#define DEFAULT_bedKp 10.00
//#define DEFAULT_bedKi .023
//#define DEFAULT_bedKd 305.4

// EZNeo Settings -----------------------------------------------------------
// If you are using an EZNeo strip on your printer, uncomment the line for what strip you are using.
//#define EZNEO_220

// EZNeo Manual IO Pin Setting ----------------------------------------------
// If you have the EZNeo wired to a different IO pin and/or you are using your own 5V power provided, specify the pin used below.
// PA8 is the default and located on the NeoPixel header.
//#define NEOPIXEL_PIN PA8

// CoreXY Printer Setting ---------------------------------------------------
// If you are using the board in a CoreXY printer, uncomment the below line and make sure you have your motors connected and mounted to the correct locations
// If movement is incorrect and reversing your X and/or Y direction does not fix it use COREYX instead of COREXY
//#define COREXY
//#define COREYX

//===========================================================================
// *************************  END PRINTER SECTION   *************************
//===========================================================================

/**
 * EZABL Advanced Settings - EZABL_POINTS & EZABL_PROBE_EDGE are also used for other probes
 */

// Probing Grid Points - If you want more or less EZABL probe points change the number below, use odd numbers. Total points is # times #.
#define EZABL_POINTS 3

// Probe Edge - How far from the edge of the bed to probe from. Use 30 if using binder clips. This also sets the edge inset value for MANUAL_MESH_LEVELING.
#define EZABL_PROBE_EDGE 15

// Fast Probing - Works with most machines and all EZABL sensors (8mm/s)
#define EZABL_FASTPROBE

// Superfast Probing - Works with Pro/NG EZABL Probes (15mm/s) & BLTouch/CRTouch (10mm/s)
//#define EZABL_SUPERFASTPROBE

// Heaters on During Probing - Heaters will stay on during probing - May reduce accuracy do not use unless told to by support
//#define HEATERS_ON_DURING_PROBING

// Probing Steppers Off - This will cycle the XYE stepper motors during probing to reduce interference from them. When using this do NOT touch the X or Y during probing as they will not be locked.
//#define PROBING_STEPPERS_OFF

// Slow Down Moves - Does your machine make weird noises/vibrations when it is probing the mesh? Enable this to slow down the speed between probe points.
//#define SLOWER_PROBE_MOVES

// Grid Extrapolation - This will use the mesh data to make assumptions of the bed outside the probe area. Disable if you are getting incorrect results on the edges of the bed.
#define EXTRAPOLATE_BEYOND_GRID

/**
 * BLTouch/CRTouch
 * 
 * If you want to use the BLTouch/CRTouch uncomment the BLTOUCH line below.
 * You also need then enter in your sensor offsets below in the CUSTOM PROBE section.
 * 
 * If you need to change your SERVO pin you can change that with the SERVO0_PIN Line below. Most people do NOT need to change/set this.
 */
//#define BLTOUCH
//#define SERVO0_PIN PA2

/**
 * Custom Probe Offset - EZABL/BLTouch/CRTouch
 * 
 * If you have a probe mount that is not pre-setup in the firmware then uncomment
 * the CUSTOM_PROBE option (or BLTOUCH if using one) above and enter your probe offsets below
 */
#if ANY(CUSTOM_PROBE, BLTOUCH)
  /**
  * Z Probe to nozzle (X,Y) offset, relative to (0, 0).
  *
  * In the following example the X and Y offsets are both positive:
  *
  *   #define NOZZLE_TO_PROBE_OFFSET { 10, 10, 0 }
  *
  *     +-- BACK ---+
  *     |           |
  *   L |    (+) P  | R <-- probe (10,10)
  *   E |           | I
  *   F | (-) N (+) | G <-- nozzle (0,0)
  *   T |           | H
  *     |    (-)    | T
  *     |           |
  *     O-- FRONT --+
  *   (0,0)
  *
  * Specify a Probe position as { X, Y, Z }
  * Do NOT enter an number for the Z position in here. Store your offset in EEPROM.
  * 
  * When is the offset POSITIVE?
  * If the probe is right of the nozzle the offset on X is POSITIVE
  * If the probe is behind of the nozzle the offset on Y is POSITIVE
  * 
  * When is the offset NEGATIVE?
  * If the probe is left of the nozzle the offset on X is NEGATIVE
  * If the probe is in front of the nozzle the offset on Y is NEGATIVE
  */
  #define NOZZLE_TO_PROBE_OFFSET { 10, 10, 0 }
#endif


//===========================================================================
//******************** Extra Features and Tweaks ****************************
//===========================================================================

// FILAMENT SENSOR UNLOAD SETTINGS -----------------
// If you have a filament sensor that is physically mounted to the machine you can enable MOUNTED_FILAMENT_SENSOR to set the unload length to 5mm to prevent filament from backing up in the sensor by uncommenting MOUNTED_FILAMENT_SENSOR 
//#define MOUNTED_FILAMENT_SENSOR

// If you have a direct drive machine with a filament sensor uncomment DIRECT_DRIVE_PRINTER to decrease the unload length from 100mm to 20mm
//#define DIRECT_DRIVE_PRINTER

// MISC --------------------------------------------

// LCD Knob Direction
// Turning your LCD knob clockwise should move DOWN in the menus/make values increase and counter-clockwise should move UP in the menus/make values decrease
// If yours is behaving opposite then enable the REVERSE_KNOB_DIRECTION option below
//#define REVERSE_KNOB_DIRECTION

// If you have a 5015 fan that whines when under 100% speed uncomment the below line.
//#define FAN_FIX

// Use your own printer name - Uncomment both lines
//#define CUSTOM_PRINTER_NAME
//#define USER_PRINTER_NAME "CHANGE ME"

// If your printer is homing to the endstops hard uncomment this to change the homing speed/divisor to make it less aggressive.
//#define SLOWER_HOMING

// BTT TOUCH SCREEN --------------------------------
// If you are using the BTT Touch Screen uncomment the below line to enable additional options per the BTT docs they recommend for use with their LCD
//#define BTT_TOUCH_SCREEN

// SENSORLESS HOMING SETTINGS ----------------------
// If you want to use sensorless homing on your X or Y Axis, uncomment the X_AXIS_SENSORLESS_HOMING or Y_AXIS_SENSORLESS_HOMING to enable it.
// You will have to change the calibration setting to get it to home correctly. See here for details: https://marlinfw.org/docs/gcode/M914.html
// Once you find the ideal calue for X and/or Y you can enter the number to the X_SH_CALIBRATION/Y_SH_CALIBRATION below to keep these as defaults.
//#define X_AXIS_SENSORLESS_HOMING
#define X_SH_CALIBRATION 75

//#define Y_AXIS_SENSORLESS_HOMING
#define Y_SH_CALIBRATION 75

//===========================================================================
//*************************** Advanced Features *****************************
//===========================================================================

/**
 * EEPROM on SD Card
 * 
 * NOTE: THIS TAKES UP EXTRA SPACE ON THE CPU SO IF YOUR COMPILE FAILS DISABLE SOME OTHER OPTIONS IN THE FIRMWARE.
 * If your board has issues saving the EEPROM that could be due to a defective EEPROM chip. This will make an EEPROM.DAT file
 * You can use a SD card in the printer slot to save the EEPROM to that instead. Just uncomment the below line
 * and then leave an SD card in the printer at all times. If you have to take it out, power off the printer before removing
 * then put your GCode files on the SD card, insert the card again, and then power the printer up.
 */
//#define SDCARD_EEPROM_EMULATION

/**
 * Input Shaping
 * 
 * See here on how to use Input Shaping: https://www.th3dstudio.com/marlin-input-shaping-calculator/
 * 
 * Below are the frequency and damping settings for each axis.
 * Damping must have f at the end of the number and the range is 0.00-1.00.
 */
//#define INPUT_SHAPING

// X Axis Settings
#define INPUT_SHAPING_FREQ_X 40
#define INPUT_SHAPING_DAMPING_X 0.15f
// Y Axis Settings
#define INPUT_SHAPING_FREQ_Y 40
#define INPUT_SHAPING_DAMPING_Y 0.15f

/**
 * Home Offset Adjustment
 * 
 * If you need to adjust your XY home offsets from defaults then you can uncomment the HOME_ADJUST line below and enter your
 * custom XY offsets. This is provided for convenience and is unsupported with included product support.
 * 
 * How to use - measure (home XY then jog using the LCD 1mm at a time) the X and Y distance the nozzle is off
 * the build plate and then put those as NEGATIVE values below on the X_HOME_LOCATION and Y_HOME_LOCATION values
 * Positive values will NOT work (move your endstops to fix a positive offset or change your bed size above).
 */
//#define HOME_ADJUST
#define X_HOME_LOCATION -10
#define Y_HOME_LOCATION -10

/**
 * PID Bed Temperature Control
 * 
 * If you want PID Bed Temperature control enable the below line. You will need to tune it for your machine.
 * See the PID Bed setup guide here: https://support.th3dstudio.com/helpcenter/p-i-d-bed-calibration-guide/
 */
//#define ENABLE_PIDBED

/**
 * Fine Babystepping
 * 
 * Enabling the below line will set the babystep resolution from 0.025mm to 0.010mm for finer control.
 */
//#define FINE_BABYSTEPPING

/**
 * Linear Advance
 * 
 * See here on how to use Linear Advance: http://marlinfw.org/docs/features/lin_advance.html
 * 
 * Change the K Value with the LINEAR_ADVANCE_K line below or use M900 KX.XX in your starting code (recommended).
 */
//#define LINEAR_ADVANCE
#define LINEAR_ADVANCE_K 0

/**
 * Manual Mesh Leveling 
 *
 * If you want to use manual mesh leveling you can enable the below option. 
 * This is for generating a MANUAL mesh WITHOUT a probe. To change the mesh inset value change the EZABL_PROBE_EDGE setting above.
 * 
 * Mesh Bed Leveling Documentation: http://marlinfw.org/docs/gcode/G029-mbl.html 
 * 
 * NOTE: If you want to automate the leveling process our EZABL kits do this for you. Check them out here: http://EZABL.TH3DStudio.com
 */
//#define MANUAL_MESH_LEVELING

/**
 * Bed Skew Compensation
 *
 * This feature corrects for misalignment in the XYZ axes.
 *
 * Take the following steps to get the bed skew in the XY plane:
 *  1. Print a test square (e.g., https://www.thingiverse.com/thing:2563185)
 *  2. For XY_DIAG_AC measure the diagonal A to C
 *  3. For XY_DIAG_BD measure the diagonal B to D
 *  4. For XY_SIDE_AD measure the edge A to D
 *
 * Marlin automatically computes skew factors from these measurements.
 * Skew factors may also be computed and set manually:
 *
 *  - Compute AB     : SQRT(2*AC*AC+2*BD*BD-4*AD*AD)/2
 *  - XY_SKEW_FACTOR : TAN(PI/2-ACOS((AC*AC-AB*AB-AD*AD)/(2*AB*AD)))
 *
 * If desired, follow the same procedure for XZ and YZ.
 * Use these diagrams for reference:
 *
 *    Y                     Z                     Z
 *    ^     B-------C       ^     B-------C       ^     B-------C
 *    |    /       /        |    /       /        |    /       /
 *    |   /       /         |   /       /         |   /       /
 *    |  A-------D          |  A-------D          |  A-------D
 *    +-------------->X     +-------------->X     +-------------->Y
 *     XY_SKEW_FACTOR        XZ_SKEW_FACTOR        YZ_SKEW_FACTOR
 */
//#define SKEW_CORRECTION

#if ENABLED(SKEW_CORRECTION)
  // Input all length measurements here:
  #define XY_DIAG_AC 282.8427124746
  #define XY_DIAG_BD 282.8427124746
  #define XY_SIDE_AD 200

  // Or, set the XY skew factor directly:
  //#define XY_SKEW_FACTOR 0.0

  //#define SKEW_CORRECTION_FOR_Z
  #if ENABLED(SKEW_CORRECTION_FOR_Z)
    #define XZ_DIAG_AC 282.8427124746
    #define XZ_DIAG_BD 282.8427124746
    #define YZ_DIAG_AC 282.8427124746
    #define YZ_DIAG_BD 282.8427124746
    #define YZ_SIDE_AD 200

    // Or, set the Z skew factors directly:
    //#define XZ_SKEW_FACTOR 0.0
    //#define YZ_SKEW_FACTOR 0.0
  #endif

  // Enable this option for M852 to set skew at runtime
  //#define SKEW_CORRECTION_GCODE
#endif

/**
 * Power Loss Recovery
 * 
 * Continue after Power-Loss feature will store the current state to the SD Card at the start of each layer
 * during SD printing. If this is found at bootup it will ask you if you want to resume the print.
 * NOTE: This feature causes excessive wear on your SD card. This feature is not supported by TH3D Support.
 */
//#define POWER_LOSS_RECOVERY

/**
 * ARC Support Override
 *
 * Arc support is enabled by default on all builds but this takes up extra space.
 * If you get compile errors due to the size being too large when enabling other options, then disable ARC_SUPPORT
 * by uncommenting the DISABLE_ARC_SUPPORT line below.
 */ 
//#define DISABLE_ARC_SUPPORT

/**
 * SD Support Override
 * 
 * If you need to free up flash and ram space to enable more features you can disable the SD card slot on the board.
 * Only do this if you are only printing to the printer over USB from something like Octoprint/EZPi or your PC.
 */
//#define NO_SDCARD

//===========================================================================
// **********************  END CONFIGURATION SETTINGS   *********************
//===========================================================================

//#@CONFIGURATION_END_FLAG

/**
 * ****************************DO NOT TOUCH ANYTHING BELOW THIS COMMENT**************************
 * Core machine settings are below. Do NOT modify these unless you understand what you are doing.
 */

//BLTouch/CRTouch ABL Updates
#if ENABLED(BLTOUCH) && DISABLED(CUSTOM_PROBE)
  #define CUSTOM_PROBE
#endif

/**
 * Machine Configuration Settings
 */

/**
 * TH3D EZBoard V2 DIY Config Sanity Checks
 */

#if DEFAULT_ACCELERATION > MAX_X_ACCEL
  #error "DEFAULT_ACCELERATION cannot be higher than MAX_X_ACCEL. Set to the same number or lower.+"
#endif

#if DEFAULT_ACCELERATION > MAX_Y_ACCEL
  #error "DEFAULT_ACCELERATION cannot be higher than MAX_Y_ACCEL. Set to the same number or lower.+"
#endif

#if NONE(PRINTER_VOLTAGE_12, PRINTER_VOLTAGE_24)
  #error "Uncomment the PRINTER_VOLTAGE_## line for the DC (Power supply output) voltage that your printer runs on."
#endif

#if ENABLED(BLTOUCH) && ENABLED(EZBOARD_PT100)
  #error "The BLTouch and PT100 cannot be used at the same time. Please choose one or the other. You can use an EZABL and PT100 at the same time as the EZABL does not use the SERVO header."
#endif 

#if BAUDRATE == 115200
  //Do Nothing
#elif BAUDRATE == 250000
  //Do Nothing
#else
  #error "Printer BAUDRATE is not correct. Valid settings are 115200 and 250000. Change to a valid setting (115200 is recommended)"
#endif

#if ENABLED(X_AXIS_SENSORLESS_HOMING)
  #define DISABLE_ENDSTOP_NOISE_FILTERING
  #define ENDSTOPPULLUP_XMIN
  #define ENDSTOPPULLUP_XMAX
  #undef  X_ENDSTOP_LOGIC
  #define X_ENDSTOP_LOGIC false
#endif

#if ENABLED(Y_AXIS_SENSORLESS_HOMING)
  #if DISABLED(DISABLE_ENDSTOP_NOISE_FILTERING)
  	#define DISABLE_ENDSTOP_NOISE_FILTERING
  #endif
  #define ENDSTOPPULLUP_YMIN
  #define ENDSTOPPULLUP_YMAX
  #undef  Y_ENDSTOP_LOGIC
  #define Y_ENDSTOP_LOGIC false
#endif

//EZBoard V2 DIY based Machine Settings
#define SERIAL_PORT -1
#define SERIAL_PORT_2 1
#define BAUDRATE_2 BAUDRATE

#ifndef MOTHERBOARD
  #define MOTHERBOARD BOARD_TH3D_EZBOARD_V2
#endif

#define EZBOARD_V2_DIY

#define CR10_STOCKDISPLAY
  
#define DEFAULT_AXIS_STEPS_PER_UNIT   { X_STEPS_MM, Y_STEPS_MM, Z_STEPS_MM, E_STEPS_MM }

#define SHOW_BOOTSCREEN
  
#define EXTRUDERS 1
  
#if ENABLED(HOME_ADJUST)
  #define X_MIN_POS X_HOME_LOCATION
  #define Y_MIN_POS Y_HOME_LOCATION
#else
  #define X_MIN_POS 0
  #define Y_MIN_POS 0
#endif
  
#define USE_ZMIN_PLUG
 
#if NONE(V6_HOTEND, TH3D_HOTEND_THERMISTOR, KNOWN_HOTEND_THERMISTOR, EZBOARD_PT100)
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

#if ENABLED(V3_EZABL_ON_SERVO)
  #define ENDSTOPPULLUP_ZMIN
  #define ENDSTOPPULLUP_ZMIN_PROBE
#endif

#define X_MIN_ENDSTOP_INVERTING X_ENDSTOP_LOGIC
#define Y_MIN_ENDSTOP_INVERTING Y_ENDSTOP_LOGIC
#define Z_MIN_ENDSTOP_INVERTING Z_ENDSTOP_LOGIC
#define X_MAX_ENDSTOP_INVERTING X_ENDSTOP_LOGIC
#define Y_MAX_ENDSTOP_INVERTING Y_ENDSTOP_LOGIC
#define Z_MAX_ENDSTOP_INVERTING Z_ENDSTOP_LOGIC
#define Z_MIN_PROBE_ENDSTOP_INVERTING Z_ENDSTOP_LOGIC
#define Z_MIN_PROBE_USES_Z_MIN_ENDSTOP_PIN

#define X_DRIVER_TYPE  TMC2209
#define Y_DRIVER_TYPE  TMC2209
#define Z_DRIVER_TYPE  TMC2209
#define E0_DRIVER_TYPE TMC2209

#define X_ENABLE_ON 0
#define Y_ENABLE_ON 0
#define Z_ENABLE_ON 0
#define E_ENABLE_ON 0

#define INVERT_E1_DIR false
#define INVERT_E2_DIR false
#define INVERT_E3_DIR false
#define INVERT_E4_DIR false
#define INVERT_E5_DIR false

#if X_HOME_DIR == 1
  #define USE_XMAX_PLUG
#else
  #define USE_XMIN_PLUG
#endif

#if Y_HOME_DIR == 1
  #define USE_YMAX_PLUG
#else
  #define USE_YMIN_PLUG
#endif

#define Z_HOME_DIR -1

#if ENABLED(REVERSE_KNOB_DIRECTION)
  #define REVERSE_ENCODER_DIRECTION
#endif

#define ENCODER_PULSES_PER_STEP 4
#define ENCODER_STEPS_PER_MENU_ITEM 1

#define EZBOARD_V2

#if ENABLED(EZOUT_ENABLE) || ENABLED(CR10S_STOCKFILAMENTSENSOR)
  #define FILAMENT_RUNOUT_SENSOR
#endif

#if ENABLED(FILAMENT_RUNOUT_SENSOR)
  
  #define FIL_RUNOUT_ENABLED_DEFAULT true // Enable the sensor on startup. Override with M412 followed by M500.
  #define NUM_RUNOUT_SENSORS   1          // Number of sensors, up to one per extruder. Define a FIL_RUNOUT#_PIN for each.
  
  #if ENABLED(EZOUT_ENABLE)
    #define FIL_RUNOUT_STATE LOW  // Pin state indicating that filament is NOT present.
  #else
    #define FIL_RUNOUT_STATE HIGH // Pin state indicating that filament is NOT present.
  #endif
  
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


#if ENABLED(EZNEO_220)
  #define RGB_LIGHTS
  #define NEOPIXEL_LED
  #if ENABLED(NEOPIXEL_LED)
    #define NEOPIXEL_TYPE   NEO_GRB // NEO_GRBW / NEO_GRB - four/three channel driver type (defined in Adafruit_NeoPixel.h)
    #ifndef NEOPIXEL_PIN
      #define NEOPIXEL_PIN    PA8    // LED driving pin
    #endif
    //#define NEOPIXEL2_TYPE NEOPIXEL_TYPE
    //#define NEOPIXEL2_PIN    5
    #define NEOPIXEL_PIXELS 15       // Number of LEDs in the strip. (Longest strip when NEOPIXEL2_SEPARATE is disabled.)
    #define NEOPIXEL_IS_SEQUENTIAL   // Sequential display for temperature change - LED by LED. Disable to change all LEDs at once.
    #define NEOPIXEL_BRIGHTNESS 255  // Initial brightness (0-255)
    #define NEOPIXEL_STARTUP_TEST  // Cycle through colors at startup
  #endif

  /**
   * Printer Event LEDs
   *
   * During printing, the LEDs will reflect the printer status:
   *
   *  - Gradually change from blue to violet as the heated bed gets to target temp
   *  - Gradually change from violet to red as the hotend gets to temperature
   *  - Change to white to illuminate work surface
   *  - Change to green once print has finished
   *  - Turn off after the print has finished and the user has pushed a button
   */
  #if ANY(BLINKM, RGB_LED, RGBW_LED, PCA9632, PCA9533, NEOPIXEL_LED)
    #define PRINTER_EVENT_LEDS
  #endif
#endif
  
//End EZBoard V2 DIY Config

/*
 * All other settings are stored in the Configuration_backend.h and Configuration_speed.h files. Do not change unless you know what you are doing.
 */
 
#include "Configuration_backend.h"
#include "Configuration_speed.h"