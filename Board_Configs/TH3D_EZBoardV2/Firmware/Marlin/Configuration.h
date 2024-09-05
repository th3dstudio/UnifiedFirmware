/**
 * For directions on how to use this firmware visit http://uf2.th3dstudio.com and click on your printer/board link
 * NO IMPLIED SUPPORT OR WARRANTY IS PROVIDED WITH THIS FIRMWARE AND IS PROVIDED AS-IS
 */
#pragma once
#define CONFIGURATION_H_VERSION 02010204

#define UNIFIED_VERSION "TH3D UFW 2.90"
#define STRING_DISTRIBUTION_DATE "2024-09-04"

//#@CONFIGURATION_START_FLAG

//===========================================================================
//============================ TH3D Configuration ===========================
//===========================================================================

// ONLY UNCOMMENT ONE PRINTER AT A TIME!!! IF YOU HAVE MULTIPLE MACHINES FLASH THEM ONE AT A TIME.
// UNCOMMENT MEANS REMOVING THE // IN FRONT OF A #define XXXXXX LINE.

//===========================================================================
// *****************    EZBOARD V2 BOARD POWERED PRINTERS   *****************
//===========================================================================

// CR-10 Series -------------------------------------------------------------
//#define CR10
//#define CR10_MINI
//#define CR10_S4
//#define CR10_S5

// CR-10S Series ------------------------------------------------------------
//#define CR10S
//#define CR10S_MINI
//#define CR10S_S4
//#define CR10S_S5

// Ender Series -------------------------------------------------------------
//#define ENDER2
//#define ENDER2_PRO     //Requires Motor Adapter Cable from TH3D due to stock connections using 5 pins
//#define ENDER3
//#define ENDER3_PRO
//#define ENDER3_MAX
//#define ENDER5
//#define ENDER5_PRO
//#define ENDER5_PLUS    //Requires the TH3D LCD Kit
//#define ENDER6         //Requires the TH3D LCD Kit

// Other Machines -----------------------------------------------------------
//#define CR20

// Sovol Machines -----------------------------------------------------------
//#define SOVOL_SV01
//#define SOVOL_SV01_PRO     // See here for stock CRTouch sensor wiring: https://support.th3dstudio.com/helpcenter/ezboard-v2-sovol-sv01-pro-stock-abl-sensor-wiring/
//#define SOVOL_SV03
//#define SOVOL_SV05         // See here for stock CRTouch sensor wiring: https://support.th3dstudio.com/helpcenter/sv05-ezboard-v2-crtouch-wiring/
//#define SOVOL_SV06         // See here for stock ABL sensor wiring: https://support.th3dstudio.com/helpcenter/ezboard-v2-sovol-sv06-stock-abl-sensor-wiring/
//#define SOVOL_SV06_PLUS    // See here for stock ABL sensor wiring: https://support.th3dstudio.com/helpcenter/ezboard-v2-sovol-sv06-stock-abl-sensor-wiring/

// Filament Sensor Options --------------------------------------------------
// If your machine came stock with a filament sensor it will be enabled automatically. If you replaced your stock sensor with our EZOut or you added an EZOut enabling the EZOUT_ENABLE will override the Creality sensor if your machine had one

// If you are using our EZOut Sensor connect to the FIL SENSOR header with the RED wire lined up with the "5V" marking by the header and uncomment the below line.
//#define EZOUT_ENABLE

// If you are using the Creality CR-10S Sensor connect to the FIL SENSOR header with the RED wire lined up with the "5V" marking by the header and uncomment the below line.
//#define CR10S_STOCKFILAMENTSENSOR

// EZABL Probe Mounts -------------------------------------------------------
// Uncomment the mount you are using for your EZABL to enable EZABL support in the firmware.
//#define CR10_OEM                         //OEM Mount for Creality Machines (Ender3/Ender5/Ender5Plus/CR-10/CR-10S/CR-20)
//#define ENDER2_OEM                       //Ender 2 Specific OEM Mount
//#define ENDER2_V6                        //Ender 2 Specific V6 Mount
//#define ENDER2_PRO_OEM                   //Ender 2 PRO Specific OEM Mount
//#define ENDER2_PRO_OEM_MICRO             //Ender 2 PRO Specific OEM Mount FOR MICRO SIZE
//#define ENDER3_MAX_OEM                   //Ender 3 MAX Specific OEM Mount
//#define ENDER6_OEM                       //Ender 6 Specific OEM Mount
//#define ENDER6_PETSFANG                  //Ender 6 PETSFANG Mount
//#define SV01_OEM_MOUNT                   //Sovol SV01 OEM Mount
//#define SV01_PRO_EZABL_OEM_MOUNT         //For our 18mm Sensors
//#define SV01_PRO_EZABL_8MM_OEM_MOUNT     //For our 8mm Sensors
//#define SV05_EZABL_OEM_MOUNT             //For our 18mm Sensors
//#define SV05_EZABL_8MM_OEM_MOUNT         //For our 8mm Sensors
//#define SV03_OEM_MOUNT                   //Sovol SV03 OEM Mount
//#define SV06_EZABL_OEM_MOUNT             //Sovol SV06/SV06 Plus EZABL OEM Mount - same offsets, different file
//#define CR10_VOLCANO                     //TH3D CR-10 Volcano Mount 
//#define CR10_V6HEAVYDUTY                 //V6 Heavy Duty Mount
//#define TM3DAERO                         //TM3D Aero Mount for V6
//#define TM3DAERO_EXTENDED                //TM3D Arto Mount for Volcano
//#define PETSFANG                         //This is the RIGHT mounted version
//#define SPRITE_EXTRUDER_18MM_MOUNT       // Mounts to the stock CRTouch bracket
//#define CUSTOM_PROBE                     //For any other probe mount (also used for BL Touch), Enter offsets below

// Ender 5 Plus ONLY ABL Settings -------------------------------------------
// By default the Ender 5 Plus comes with a BL Touch. Enabling the ENDER5_PLUS_EZABL or ENDER5_PLUS_NOABL will override the BL Touch setting
// If you are using the stock BL Touch with a non-stock mount enable the CUSTOM_PROBE line above and enter the offsets below for the new mount.
//#define ENDER5_PLUS_EZABL
//#define ENDER5_PLUS_NOABL

// Ender 6 - Filament Sensor Override
// If you have issues with your filament sensor on the Ender 6 uncomment the below option to disable it.
//#define ENDER6_NOFILAMENT_SENSOR

// Ender 6 - LDO 0.9 Motor Kit Settings
// If you have upgraded to the 0.9 degree LDO motor kit for your Ender 6, uncomment the below line to set the XY steps needed.
//#define ENDER6_LDO_XY

// SV01 Pro EZABL Settings - If you are using the EZABL on this instead of the stock probe also uncomment the below line to set the EZABL settings
//#define SV01_PRO_EZABL_INSTALLED

// Sovol SV03 - ABL Settings ------------------------------------------------
// By default the Sovol SV03 comes with a BL Touch. Enabling the SV03_EZABL or SV03_NOABL will override the BL Touch setting
// If you are using the stock BL Touch with a non-stock mount enable the CUSTOM_PROBE line above and enter the offsets below for the new mount.
//#define SV03_EZABL
//#define SV03_NOABL

// SV05 EZABL Settings - If you are using the EZABL on this instead of the stock probe also uncomment the below line to set the EZABL settings
//#define SV05_EZABL_INSTALLED

// SV06/SV06 Plus EZABL Settings - If you are using the EZABL on this instead of the stock probe also uncomment the below line to set the EZABL settings
//#define SV06_EZABL_INSTALLED

// SV06 Plus - Filament Sensor Override
// If you have issues with your filament sensor on the SV06 Plus uncomment the below option to disable it.
//#define SV06_PLUS_NOFILAMENT_SENSOR

// EZNeo Settings -----------------------------------------------------------
// If you are using an EZNeo strip on your printer, uncomment the line for what strip you are using.
//#define EZNEO_220

// EZNeo Manual IO Pin Setting ----------------------------------------------
// If you have the EZNeo wired to a different IO pin and/or you are using your own 5V power provided, specify the pin used below.
// PA8 is the default and located on the NeoPixel header.
//#define NEOPIXEL_PIN PA8

// Advanced Settings --------------------------------------------------------
// These settings do not typically need to be adjusted except for machines that do not follow stock configs

// If you are using a modded machine with a higher Z height use the below option to change the height. This value is in mm.
//#define CUSTOM_ZHEIGHT 400

// If you have the new Ender 5 or Ender 5 Pro Model that has the new leadscrew uncomment the below option to set the correct stepping mode for the Z driver
//#define ENDER5_NEW_LEADSCREW

// Dual Z Motor Settings
// When running dual Z motors uncomment the below line. This will increase the Z motor driver current for 2x motors.
//#define DUAL_Z_MOTORS

// Axis Direction Settings
// If you need to reverse the direction of a motor uncomment the below option for that axis.
// E motor settings are below in the Extruder Settings Section
//#define REVERSE_X_MOTOR
//#define REVERSE_Y_MOTOR
//#define REVERSE_Z_MOTOR

// E Motor Torque Settings
// By default we have StealthChop2 Disabled for the E axis. This is due to the possibility of losing steps
// due to the low torque nature of StealthChop2. If you want to quiet down the E motor you can uncomment the
// below line. However, if you get lost steps and inconsistent extrusion then disable this option.
//#define STEALTHCHOP_E

// Fix for EZABL Kits
// If you are having issues with the EZABL not triggering when connected to the Z-Stop header you can use the servo header pins.
//#define V3_EZABL_ON_SERVO

// E3D PT100 Thermocouple Support
// Refer to the EZBoard installation documentation for connecting the PT100 to the EZBoard V2
// You will use the SWD Header for 3.3V power to the amplifier board and use the SIG pin from the SERVO header for the signal.
//#define EZBOARD_PT100
// NOTE - Due this uses the SIGNAL pin from the SERVO header so you cannot use the PT100 and a BLTouch at the same time on this board.

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

// Superfast Probing - Only works with the EZABL Pro Sensors (15mm/s)
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
 * If you want to use the BLTouch/CRTouch uncomment the BLTOUCH line below. You also need then enter in your sensor offsets below in the CUSTOM PROBE section.
 * If you need to change your SERVO pin you can change that with the SERVO0_PIN Line below. Most people do NOT need to change/set this.
 */
//#define BLTOUCH
//#define SERVO0_PIN PA2

/**
 * Custom Probe Offset - EZABL/BLTouch/CRTouch
 * 
 * If you have a probe mount that is not pre-setup in the firmware then uncomment the CUSTOM_PROBE option (or BLTOUCH if using one) above and enter your probe offsets below
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

// EXTRUDER SETTINGS -------------------------------
// Use to set custom esteps and/or reverse your E Motor direction if you are installing an extruder that needs the direction reversed.
// If you reversed the wiring on your E motor already (like the Bondtech Guide says to do) then you do not need to reverse it in the firmware here.
//
// Example EStep Values For Common Extuders: 
// TH3D Aluminum Extruder ------  95 ESteps
// Micro Swiss DD Extruder ----- 130 ESteps
// LGX/LGX Lite/MS NG Extruder - 400 ESteps
// TH3D Tough Extruder V2 ------ 407 ESteps
// TH3D Tough Extruder V1 ------ 410 ESteps
// Bondtech BMG Extruder ------- 415 ESteps
// Creality Sprite Extruder ---- 425 ESteps
// LDO Orbiter/Sherpa Mini ----- 690 ESteps
//
// If you want to change the Esteps for your printer you can uncomment the below line and set CUSTOM_ESTEPS_VALUE to what you want - USE WHOLE NUMBERS ONLY
// This option sets the esteps from the CUSTOM_ESTEPS_VALUE line below.
// If you need to reverse the e motor direction also enabled the REVERSE_E_MOTOR_DIRECTION option.
//#define CUSTOM_ESTEPS
#define CUSTOM_ESTEPS_VALUE 410
//#define REVERSE_E_MOTOR_DIRECTION

// If you are using a pancake stepper enable the PANCAKE_STEPPER option to reduce the motor current to lower the stepper temperature
//#define PANCAKE_STEPPER

// FILAMENT SENSOR UNLOAD SETTINGS -----------------
// If you have a filament sensor that is physically mounted to the machine you can enable MOUNTED_FILAMENT_SENSOR to set the unload length to 5mm to prevent filament from backing up in the sensor by uncommenting MOUNTED_FILAMENT_SENSOR 
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

// ENDER XTENDER KIT SETTINGS ----------------------

// Ender Xtender Kits for Ender 3/3 Pro
//#define XTENDER_E3_300    //300x300x250 Size
//#define XTENDER_E3_300XL  //300x300x400 Size
//#define XTENDER_E3_400    //400x400x250 Size
//#define XTENDER_E3_400Z   //235x235x400 Size
//#define XTENDER_E3_400XL  //400x400x500 Size
//#define XTENDER_E3_500Z   //235x235x500 Size

// Ender Xtender Kits for Ender 5/5 Pro
//#define XTENDER_E5_5XL    //235x235x500 Size

// Ender Xtender Kits for Ender 5 Plus
//#define XTENDER_E5P_400   //510x510x400 Size
//#define XTENDER_E5P_500   //510x510x500 Size

// BTT TOUCH SCREEN --------------------------------
// If you are using the BTT Touch Screen uncomment the below line to enable additional options per the BTT docs they recommend for use with their LCD
//#define BTT_TOUCH_SCREEN

// SENSORLESS HOMING SETTINGS ----------------------
// If you want to use sensorless homing on your X or Y Axis, uncomment the X_AXIS_SENSORLESS_HOMING or Y_AXIS_SENSORLESS_HOMING to enable it.
// You will have to change the calibration setting to get it to home correctly. See here for details: https://marlinfw.org/docs/gcode/M914.html
// Once you find the ideal calue for X and/or Y you can enter the number to the X_SH_CALIBRATION/Y_SH_CALIBRATION below to keep these as defaults.
//#define X_AXIS_SENSORLESS_HOMING
#define X_SH_CALIBRATION 8

//#define Y_AXIS_SENSORLESS_HOMING
#define Y_SH_CALIBRATION 8

//===========================================================================
//*************************** Advanced Features *****************************
//===========================================================================

/**
 * EEPROM on SD Card
 * 
 * If your board has issues saving the EEPROM that could be due to a defective EEPROM chip. This will make an EEPROM.DAT file. You can use a SD card in the printer slot to save the EEPROM to that instead. Just uncomment the below line and then leave an SD card in the printer at all times. If you have to take it out, power off the printer before removing then put your GCode files on the SD card, insert the card again, and then power the printer up.
 */
//#define SDCARD_EEPROM_EMULATION

/**
 * Input Shaping
 * 
 * See here on how to use Input Shaping: https://www.th3dstudio.com/marlin-input-shaping-calculator/
 * 
 * Below are the frequency and damping settings for each axis. Damping must have f at the end of the number and the range is 0.00-1.00.
 */
//#define INPUT_SHAPING

// X Axis Settings
#define INPUT_SHAPING_FREQ_X 40
#define INPUT_SHAPING_DAMPING_X 0.15f
// Y Axis Settings
#define INPUT_SHAPING_FREQ_Y 40
#define INPUT_SHAPING_DAMPING_Y 0.15f

/**
 * Bed and Z Height Adjustments
 * 
 * If you need to make changes to your X, Y, and/or Z size on your printer for whatever reason you can uncomment the custom size/height line
 * for whatever axis you need to make changes to and then replace the XXX with the new size in millimeters.
 */
//#define CUSTOM_X_BED_SIZE XXX
//#define CUSTOM_Y_BED_SIZE XXX
//#define CUSTOM_Z_HEIGHT XXX

/**
 * Home Offset Adjustment
 * 
 * If you need to adjust your XY home offsets from defaults then you can uncomment the HOME_ADJUST line below and enter your
 * custom XY offsets. This is provided for convenience and is unsupported with included product support.
 * 
 * How to use - measure (home XY then jog using the LCD 1mm at a time) the X and Y distance the nozzle is off the build plate and then put those as NEGATIVE values below on the X_HOME_LOCATION and Y_HOME_LOCATION values
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
 * If you want to use manual mesh leveling you can enable the below option. This is for generating a MANUAL mesh WITHOUT a probe. To change the mesh inset value change the EZABL_PROBE_EDGE setting above.
 * 
 * Mesh Bed Leveling Documentation: http://marlinfw.org/docs/gcode/G029-mbl.html NOTE: If you want to automate the leveling process our EZABL kits do this for you. Check them out here: http://EZABL.TH3DStudio.com
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

  //#define SKEW_CORRECTION_FOR_Z
  #if ENABLED(SKEW_CORRECTION_FOR_Z)
    #define XZ_DIAG_AC 282.8427124746
    #define XZ_DIAG_BD 282.8427124746
    #define YZ_DIAG_AC 282.8427124746
    #define YZ_DIAG_BD 282.8427124746
    #define YZ_SIDE_AD 200
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

//Set Ender 3 Pro Machine Setting
#if ENABLED(ENDER3_PRO)
  #define ENDER3
#endif

//Set Ender 5 Pro Machine Setting
#if ENABLED(ENDER5_PRO)
  #define ENDER5
#endif

//Set ZSteps for ENDER5_NEW_LEADSCREW
#if ANY(ENDER5_NEW_LEADSCREW, ENDER5_PLUS)
  #define CREALITY_Z_STEPS 800
#else
  #define CREALITY_Z_STEPS 400
#endif

//Auto enable EZABL when EZABL spec mounts are enabled for sv01 pro
#if ANY(SV01_PRO_EZABL_OEM_MOUNT, SV01_PRO_EZABL_8MM_OEM_MOUNT) && DISABLED(SV01_PRO_EZABL_INSTALLED)
  #define SV01_PRO_EZABL_INSTALLED
#endif

//Auto enable EZABL when EZABL spec mounts are enabled for sv05
#if ANY(SV05_EZABL_OEM_MOUNT, SV05_EZABL_8MM_OEM_MOUNT) && DISABLED(SV05_EZABL_INSTALLED)
  #define SV05_EZABL_INSTALLED
#endif

/**
 * TH3D EZBoard V2 Config Sanity Checks
 */

#if ENABLED(BLTOUCH) && ENABLED(EZBOARD_PT100)
  #error "The BLTouch and PT100 cannot be used at the same time. Please choose one or the other. You can use an EZABL and PT100 at the same time as the EZABL does not use the SERVO header."
#endif

#if ENABLED(X_AXIS_SENSORLESS_HOMING)
  #define DISABLE_ENDSTOP_NOISE_FILTERING
  #define ENDSTOPPULLUP_XMIN
  #define ENDSTOPPULLUP_XMAX
#endif

#if ENABLED(Y_AXIS_SENSORLESS_HOMING)
  #if DISABLED(DISABLE_ENDSTOP_NOISE_FILTERING)
  	#define DISABLE_ENDSTOP_NOISE_FILTERING
  #endif
  #define ENDSTOPPULLUP_YMIN
  #define ENDSTOPPULLUP_YMAX
#endif

#if ENABLED(SOVOL_SV01_PRO)
  #if DISABLED(SV01_PRO_EZABL_INSTALLED)
    #define BLTOUCH
    #define SERVO0_PIN PA2

    #ifndef CUSTOM_PROBE
      #define CUSTOM_PROBE
      #define NOZZLE_TO_PROBE_OFFSET { 38, 15, 0 }
    #endif

    #ifndef CUSTOM_PRINTER_NAME
      #define CUSTOM_PRINTER_NAME
      #define USER_PRINTER_NAME "SOVOL SV01 Pro"
    #endif
  #endif
#endif

#if ENABLED(SOVOL_SV05)
  #if DISABLED(SV05_EZABL_INSTALLED)
    #define BLTOUCH
    #define SERVO0_PIN PA2

    #ifndef CUSTOM_PROBE
      #define CUSTOM_PROBE
      #define NOZZLE_TO_PROBE_OFFSET { 38, 15, 0 }
    #endif

    #ifndef CUSTOM_PRINTER_NAME
      #define CUSTOM_PRINTER_NAME
      #define USER_PRINTER_NAME "SOVOL SV05"
    #endif
  #endif
#endif

/**
 * Machine Configuration Settings
 */
 
//EZBoard V2 based Machine Settings
#if ANY(CR10, CR10_MINI, CR10_S4, CR10_S5, CR10S, CR10S_MINI, CR10S_S4, CR10S_S5, ENDER2, ENDER2_PRO, ENDER3, ENDER5, ENDER5_PLUS, ENDER6, SOVOL_SV01, SOVOL_SV01_PRO, SOVOL_SV03, SOVOL_SV05, CR20, ENDER3_MAX)

  #define SERIAL_PORT -1
  #define BAUDRATE 115200
  #define SERIAL_PORT_2 1
  #define BAUDRATE_2 BAUDRATE
  
  #if ENABLED(CR20) || ENABLED(ENDER2)
    #define MKS_MINI_12864
  #else
    #define CR10_STOCKDISPLAY
  #endif
  
  #if ENABLED(REVERSE_KNOB_DIRECTION) && DISABLED(ENDER5_PLUS)
    #define REVERSE_ENCODER_DIRECTION
  #endif
  
  #if ANY(CR10S, CR10S_S4, CR10S_S5, SOVOL_SV01, SOVOL_SV01_PRO, SOVOL_SV03, ENDER3_MAX)
    //S models + SV01 assume that you have 2x motors, filament sensor, and are using the dual adapter.
    //So lets up the VREF on Z and reverse the Z axis when using the dual motor adapter and enable the filament sensor
	
    #if ANY(CR10S, CR10S_S4, CR10S_S5, SOVOL_SV01, SOVOL_SV01_PRO, SOVOL_SV03)
      #define DUAL_Z_MOTORS
    #endif

    #if DISABLED(SOVOL_SV03)
      #if ENABLED(REVERSE_Z_MOTOR)
        #undef REVERSE_Z_MOTOR
      #else
        #define REVERSE_Z_MOTOR
      #endif
    #endif
  
    #if ANY(SOVOL_SV01, SOVOL_SV03, ENDER3_MAX, ENDER5_PLUS) //Have sensors that use same logic as EZOUT Sensors
      #define EZOUT_ENABLE
    #endif
  
    #if DISABLED(EZOUT_ENABLE) 
      #define CR10S_STOCKFILAMENTSENSOR
    #endif

    #if ENABLED(CR10S)
      #define CR10
    #elif ENABLED(CR10S_S4)
      #define CR10_S4
    #elif ENABLED(CR10S_S5)
      #define CR10_S5
    #endif
    
  #endif
  
  #ifndef MOTHERBOARD
    #define MOTHERBOARD BOARD_TH3D_EZBOARD_V2
  #endif
  
  #if ENABLED(CUSTOM_ESTEPS)
    #if ALL(ENDER6_LDO_XY, ENDER6)
      #define DEFAULT_AXIS_STEPS_PER_UNIT   { 160, 160, CREALITY_Z_STEPS, CUSTOM_ESTEPS_VALUE }
    #else
      #define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 80, CREALITY_Z_STEPS, CUSTOM_ESTEPS_VALUE }
    #endif
  #elif ANY(SOVOL_SV01, SOVOL_SV03)
    #define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 80, CREALITY_Z_STEPS, 402 }
  #elif ENABLED(ENDER6)
    #if ENABLED(ENDER6_LDO_XY)
      #define DEFAULT_AXIS_STEPS_PER_UNIT   { 160, 160, CREALITY_Z_STEPS, 140 }
    #else
      #define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 80, CREALITY_Z_STEPS, 140 }
    #endif
  #elif ANY(SOVOL_SV01_PRO, SOVOL_SV05)
    #define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 80, 400, 415 }
  #else
    #define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 80, 400, 95 }
  #endif
  
  #define SHOW_BOOTSCREEN
  
  #define EXTRUDERS 1
  
  #if ENABLED(CR10)
    #define X_BED_SIZE 300
    #define Y_BED_SIZE 300
    #define Z_MAX_POS 400
    #define PRINTER_VOLTAGE_12
  #endif

  #if ENABLED(CR10_MINI) || ENABLED(CR10S_MINI)
    #define X_BED_SIZE 300
    #define Y_BED_SIZE 220
    #define Z_MAX_POS 300
    #define PRINTER_VOLTAGE_12
  #endif

  #if ENABLED(CR10_S4)
    #define X_BED_SIZE 400
    #define Y_BED_SIZE 400
    #define Z_MAX_POS 400
    #define PRINTER_VOLTAGE_12
    #define SLOWER_PROBE_MOVES
  #endif

  #if ENABLED(CR10_S5)
    #define X_BED_SIZE 500
    #define Y_BED_SIZE 500
    #define Z_MAX_POS 500
    #define PRINTER_VOLTAGE_12
    #define SLOWER_PROBE_MOVES
  #endif

  #if ENABLED(ENDER2)
    #define X_BED_SIZE 160
    #define Y_BED_SIZE 150
    #define Z_MAX_POS 220
    #define PRINTER_VOLTAGE_12
  #endif

  #if ENABLED(ENDER2_PRO)
    #define X_BED_SIZE 165
    #define Y_BED_SIZE 168
    #define Z_MAX_POS 180
    #define PRINTER_VOLTAGE_24
  #endif

  #if ENABLED(ENDER3)
    #if ENABLED(XTENDER_E3_300)
      #define X_BED_SIZE 300
      #define Y_BED_SIZE 300
      #define Z_MAX_POS 250
    #elif ENABLED(XTENDER_E3_300XL)
      #define X_BED_SIZE 300
      #define Y_BED_SIZE 300
      #define Z_MAX_POS 400
    #elif ENABLED(XTENDER_E3_400)
      #define X_BED_SIZE 400
      #define Y_BED_SIZE 400
      #define Z_MAX_POS 250
    #elif ENABLED(XTENDER_E3_400Z)
      #define X_BED_SIZE 235
      #define Y_BED_SIZE 235
      #define Z_MAX_POS 400
    #elif ENABLED(XTENDER_E3_400XL)
      #define X_BED_SIZE 400
      #define Y_BED_SIZE 400
      #define Z_MAX_POS 500
    #elif ENABLED(XTENDER_E3_500Z)
      #define X_BED_SIZE 235
      #define Y_BED_SIZE 235
      #define Z_MAX_POS 500
    #else
      #define X_BED_SIZE 235
      #define Y_BED_SIZE 235
      #define Z_MAX_POS 250
    #endif
    #define PRINTER_VOLTAGE_24
  #endif

  #if ENABLED(ENDER3_MAX)
    #define X_BED_SIZE 300
    #define Y_BED_SIZE 300
    #define Z_MAX_POS 340
    #define PRINTER_VOLTAGE_24
    #define MOUNTED_FILAMENT_SENSOR
  #endif

  #if ENABLED(ENDER5)
    #if ENABLED(XTENDER_E5_5XL)
      #define X_BED_SIZE 235
      #define Y_BED_SIZE 235
      #define Z_MAX_POS 500
    #else
      #define X_BED_SIZE 220
      #define Y_BED_SIZE 220
      #define Z_MAX_POS 300
    #endif
    #define PRINTER_VOLTAGE_24
  #endif
  
  #if ENABLED(ENDER5_PLUS)
    #if ENABLED(XTENDER_E5P_400)
      #define X_BED_SIZE 510
      #define Y_BED_SIZE 510
      #define Z_MAX_POS 400
    #elif ENABLED(XTENDER_E5P_500)
      #define X_BED_SIZE 510
      #define Y_BED_SIZE 510
      #define Z_MAX_POS 500
    #else
      #define X_BED_SIZE 350
      #define Y_BED_SIZE 350
      #define Z_MAX_POS 400
    #endif
    #define PRINTER_VOLTAGE_24
    #if DISABLED(REVERSE_KNOB_DIRECTION)
      #define REVERSE_ENCODER_DIRECTION
    #endif
    #define EZOUT_ENABLE
    #define DUAL_Z_MOTORS
    #define MOUNTED_FILAMENT_SENSOR
  #endif

  #if ENABLED(ENDER6)
    #define X_BED_SIZE 250
    #define Y_BED_SIZE 250
    #define Z_MAX_POS 400
    #define PRINTER_VOLTAGE_24
    #define MOUNTED_FILAMENT_SENSOR
    #if DISABLED(ENDER6_NOFILAMENT_SENSOR)
      #define EZOUT_ENABLE
    #endif
    #define COREYX
    #define X_MOTOR_CURRENT 800
    #define Y_MOTOR_CURRENT X_MOTOR_CURRENT
    #define Z_MOTOR_CURRENT 1000
  #endif

  #if ENABLED(SOVOL_SV01_PRO)
    #define X_BED_SIZE 290
    #define Y_BED_SIZE 240
    #define Z_MAX_POS 300
    #define PRINTER_VOLTAGE_24
  #endif

  #if ENABLED(SOVOL_SV01)
    #define X_BED_SIZE 280
    #define Y_BED_SIZE 240
    #define Z_MAX_POS 300
    #define PRINTER_VOLTAGE_24
  #endif
  
  #if ENABLED(SOVOL_SV03)
    #define X_BED_SIZE 350
    #define Y_BED_SIZE 350
    #define Z_MAX_POS 400
	  #define PRINTER_VOLTAGE_24
  #endif

  #if ENABLED(SOVOL_SV05)
    #define X_BED_SIZE 220
    #define Y_BED_SIZE 220
    #define Z_MAX_POS 300
	#define PRINTER_VOLTAGE_24
  #endif

  #if ENABLED(CR20)
    #define X_BED_SIZE 220
    #define Y_BED_SIZE 220
    #define Z_MAX_POS 250
    #define PRINTER_VOLTAGE_24
  #endif
  
  #if (CUSTOM_ZHEIGHT > Z_MAX_POS)
    #undef Z_MAX_POS
    #define Z_MAX_POS CUSTOM_ZHEIGHT
  #endif

  #if ENABLED(HOME_ADJUST)
    #define X_MIN_POS X_HOME_LOCATION
    #define Y_MIN_POS Y_HOME_LOCATION
  #elif ENABLED(ENDER2_PRO_OEM)
    #define X_MIN_POS -9
    #define Y_MIN_POS -4
  #elif ENABLED(ENDER2_PRO_OEM_MICRO)
    #define X_MIN_POS -9
    #define Y_MIN_POS -4
  #elif ENABLED(ENDER2_PRO)
    #define X_MIN_POS -20
    #define Y_MIN_POS -4
  #elif ENABLED(SOVOL_SV01_PRO)
    #define X_MIN_POS -12
    #define Y_MIN_POS 0
  #else
    #define X_MIN_POS 0
    #define Y_MIN_POS 0
  #endif
  
  #if ANY(ENDER5, ENDER5_PLUS, ENDER6, SOVOL_SV05)
    #define USE_XMAX_PLUG
    #define USE_YMAX_PLUG
    #define USE_ZMIN_PLUG
  #else
    #define USE_XMIN_PLUG
    #define USE_YMIN_PLUG
    #define USE_ZMIN_PLUG
  #endif
  
  #if ANY(ENDER5, ENDER5_PLUS, ENDER6, SOVOL_SV05)
    #define X_HOME_DIR 1
    #define Y_HOME_DIR 1
    #define Z_HOME_DIR -1
  #else
    #define X_HOME_DIR -1
    #define Y_HOME_DIR -1
    #define Z_HOME_DIR -1
  #endif
  
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

  #define X_MIN_ENDSTOP_INVERTING false
  #define Y_MIN_ENDSTOP_INVERTING false
  #define Z_MIN_ENDSTOP_INVERTING false
  #define X_MAX_ENDSTOP_INVERTING false
  #define Y_MAX_ENDSTOP_INVERTING false
  #define Z_MAX_ENDSTOP_INVERTING false
  #define Z_MIN_PROBE_ENDSTOP_INVERTING false
  #define Z_MIN_PROBE_USES_Z_MIN_ENDSTOP_PIN

  #define X_DRIVER_TYPE  TMC2209
  #define Y_DRIVER_TYPE  TMC2209
  #define Z_DRIVER_TYPE  TMC2209
  #define E0_DRIVER_TYPE TMC2209

  #define X_ENABLE_ON 0
  #define Y_ENABLE_ON 0
  #define Z_ENABLE_ON 0
  #define E_ENABLE_ON 0

  #if ENABLED(ENDER2_PRO)
    #if ENABLED(REVERSE_X_MOTOR)
      #define INVERT_X_DIR true
    #else
      #define INVERT_X_DIR false
    #endif
  #else
    #if ENABLED(REVERSE_X_MOTOR)
      #define INVERT_X_DIR false
    #else
      #define INVERT_X_DIR true
    #endif
  #endif

  #if ENABLED(ENDER2_PRO)
    #if ENABLED(REVERSE_Y_MOTOR)
      #define INVERT_Y_DIR true
    #else
      #define INVERT_Y_DIR false
    #endif
  #else
    #if ENABLED(REVERSE_Y_MOTOR)
      #define INVERT_Y_DIR false
    #else
      #define INVERT_Y_DIR true
    #endif
  #endif

  #if ANY(ENDER2_PRO, ENDER5, ENDER5_PLUS, ENDER6, SOVOL_SV01_PRO, SOVOL_SV05)
    #if ENABLED(REVERSE_Z_MOTOR)
      #define INVERT_Z_DIR false
    #else
      #define INVERT_Z_DIR true
    #endif
  #else
    #if ENABLED(REVERSE_Z_MOTOR)
      #define INVERT_Z_DIR true
    #else
      #define INVERT_Z_DIR false
    #endif
  #endif
  
  #if ANY(SOVOL_SV01, SOVOL_SV03, ENDER2_PRO)
    #if ENABLED(REVERSE_E_MOTOR_DIRECTION)
      #define INVERT_E0_DIR true
    #else
      #define INVERT_E0_DIR false
    #endif
  #else
    #if ENABLED(REVERSE_E_MOTOR_DIRECTION)
      #define INVERT_E0_DIR false
    #else
      #define INVERT_E0_DIR true
    #endif
  #endif

  #define INVERT_E1_DIR false
  #define INVERT_E2_DIR false
  #define INVERT_E3_DIR false
  #define INVERT_E4_DIR false
  #define INVERT_E5_DIR false

  #define ENCODER_PULSES_PER_STEP 4
  #define ENCODER_STEPS_PER_MENU_ITEM 1
  
  #if ENABLED(ENDER5_PLUS)
    #if DISABLED(ENDER5_PLUS_NOABL) && DISABLED(ENDER5_PLUS_EZABL)
      #define BLTOUCH
      #define SERVO0_PIN PA2
      #if ENABLED(BLTOUCH) && ENABLED(EZBOARD_PT100)
        #error "The BLTouch and PT100 cannot be used at the same time. Please choose one or the other. You can use an EZABL and PT100 at the same time as the EZABL does not use the SERVO header."
      #endif 
    #ifndef EZABL_PROBE_EDGE
      #define EZABL_PROBE_EDGE 15
    #endif
    #ifndef EZABL_POINTS
      #define EZABL_POINTS 5
    #endif
    #if DISABLED(CUSTOM_PROBE)
        #define CUSTOM_PROBE
        #define NOZZLE_TO_PROBE_OFFSET { -44, -9, 0}
      #endif
    #endif  
    #if DISABLED(ENDER5_PLUS_NOABL)
      #define ABL_ENABLE
    #endif
  #endif
  
  #if ENABLED(SOVOL_SV03)
    #if DISABLED(SV03_NOABL) && DISABLED(SV03_EZABL)
      #if DISABLED(BLTOUCH)
        #define BLTOUCH
      #endif
      
      #ifndef SERVO0_PIN
        #define SERVO0_PIN PA2
      #endif
      
      #if DISABLED(CUSTOM_PROBE)
        #define CUSTOM_PROBE
        #define NOZZLE_TO_PROBE_OFFSET { -34, -13, 0 }
      #endif
    #endif  
  #endif

  #define EZBOARD_V2

  #if ANY(EZOUT_ENABLE, CR10S_STOCKFILAMENTSENSOR)
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
    
    #define FIL_RUNOUT_PULLUP
    #define FILAMENT_RUNOUT_SCRIPT "M600"
  #endif

  #if ENABLED(EZNEO_220)
    #define RGB_LIGHTS
    #define NEOPIXEL_LED
    #if ENABLED(NEOPIXEL_LED)
      #define NEOPIXEL_TYPE   NEO_GRB // NEO_GRBW / NEO_GRB - four/three channel driver type (defined in Adafruit_NeoPixel.h)
      #ifndef NEOPIXEL_PIN
        #define NEOPIXEL_PIN    PA8    // LED driving pin
      #endif
      #define NEOPIXEL_PIXELS 15       // Number of LEDs in the strip. (Longest strip when NEOPIXEL2_SEPARATE is disabled.)
      #define NEOPIXEL_IS_SEQUENTIAL   // Sequential display for temperature change - LED by LED. Disable to change all LEDs at once.
      #define NEOPIXEL_BRIGHTNESS 255  // Initial brightness (0-255)
      #define NEOPIXEL_STARTUP_TEST  // Cycle through colors at startup
    #endif

    #if ANY(BLINKM, RGB_LED, RGBW_LED, PCA9632, PCA9533, NEOPIXEL_LED)
      #define PRINTER_EVENT_LEDS
    #endif
  #endif
  
#endif
//End EZBoard V2 based Machine Settings

//EZBoard V2 SV06 Settings
#if ANY(SOVOL_SV06, SOVOL_SV06_PLUS)
  #if ENABLED(SOVOL_SV06_PLUS) && DISABLED(SV06_PLUS_NOFILAMENT_SENSOR)
    #define EZOUT_ENABLE
  #endif
  
  #if ENABLED(SV06_EZABL_INSTALLED)
    #define Z_MIN_PROBE_USES_Z_MIN_ENDSTOP_PIN
  #endif
  
  #if DISABLED(SV06_EZABL_INSTALLED)
    #define USE_PROBE_FOR_Z_HOMING
    #define Z_MIN_PROBE_PIN PA2

    #ifndef CUSTOM_PROBE
      #define CUSTOM_PROBE
      #define NOZZLE_TO_PROBE_OFFSET { 25, -25, 0 }
    #endif

    #ifndef CUSTOM_PRINTER_NAME
      #define CUSTOM_PRINTER_NAME
      #if ENABLED(SOVOL_SV06_PLUS)
	    #define USER_PRINTER_NAME "EZBoard SV06 Plus"
	  #else
		#define USER_PRINTER_NAME "EZBoard SV06"
	  #endif
    #endif
  #endif

  #define DISABLE_ENDSTOP_NOISE_FILTERING
  #define SERIAL_PORT -1
  #define BAUDRATE 115200
  #define SERIAL_PORT_2 1
  #define BAUDRATE_2 BAUDRATE
  
  #define CR10_STOCKDISPLAY
  
  #if ENABLED(REVERSE_KNOB_DIRECTION) && DISABLED(ENDER5_PLUS)
    #define REVERSE_ENCODER_DIRECTION
  #endif
  
  #ifndef MOTHERBOARD
    #define MOTHERBOARD BOARD_TH3D_EZBOARD_V2
  #endif
  
  #if ENABLED(CUSTOM_ESTEPS)
    #define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 80, 800, CUSTOM_ESTEPS_VALUE }
  #else
    #define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 80, 800, 691.5 }
  #endif
  
  #define SHOW_BOOTSCREEN
  
  #define EXTRUDERS 1
  
  #if ENABLED(SOVOL_SV06_PLUS)
    #define X_BED_SIZE 300
    #define Y_BED_SIZE 300
    #define Z_MAX_POS 340
  #else
    #define X_BED_SIZE 220
    #define Y_BED_SIZE 220
    #define Z_MAX_POS 250
  #endif
  
  #define PRINTER_VOLTAGE_24
  
  #if (CUSTOM_ZHEIGHT > Z_MAX_POS)
    #undef Z_MAX_POS
    #define Z_MAX_POS CUSTOM_ZHEIGHT
  #endif

  #if ENABLED(HOME_ADJUST)
    #define X_MIN_POS X_HOME_LOCATION
    #define Y_MIN_POS Y_HOME_LOCATION
  #else
    #define X_MIN_POS 0
    #define Y_MIN_POS 0
  #endif

  #define USE_XMIN_PLUG
  #define USE_YMIN_PLUG
  #define USE_ZMIN_PLUG

  #define X_AXIS_SENSORLESS_HOMING
  #define Y_AXIS_SENSORLESS_HOMING

  #define ENDSTOPPULLUP_XMIN
  #define ENDSTOPPULLUP_YMIN

  #define X_HOME_DIR -1
  #define Y_HOME_DIR -1
  #define Z_HOME_DIR -1
  
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

  #define DEFAULT_Kp 15.95
  #define DEFAULT_Ki 1.30
  #define DEFAULT_Kd 48.96
  
  #define DEFAULT_bedKp 110.38
  #define DEFAULT_bedKi 6.12
  #define DEFAULT_bedKd 497.3

  #if ENABLED(V3_EZABL_ON_SERVO)
    #define ENDSTOPPULLUP_ZMIN
    #define ENDSTOPPULLUP_ZMIN_PROBE
  #endif

  #define X_MIN_ENDSTOP_INVERTING false
  #define Y_MIN_ENDSTOP_INVERTING false
  #define Z_MIN_ENDSTOP_INVERTING false
  #define X_MAX_ENDSTOP_INVERTING false
  #define Y_MAX_ENDSTOP_INVERTING false
  #define Z_MAX_ENDSTOP_INVERTING false
  #define Z_MIN_PROBE_ENDSTOP_INVERTING false

  #define X_DRIVER_TYPE  TMC2209
  #define Y_DRIVER_TYPE  TMC2209
  #define Z_DRIVER_TYPE  TMC2209
  #define E0_DRIVER_TYPE TMC2209

  #define X_MOTOR_CURRENT 860
  #define Y_MOTOR_CURRENT 900
  #define Z_MOTOR_CURRENT 1000
  #define E_MOTOR_CURRENT 550

  #ifndef X_SH_CALIBRATION
    #define X_SH_CALIBRATION 90
  #endif

  #if X_SH_CALIBRATION == 8
    #undef X_SH_CALIBRATION
    #define X_SH_CALIBRATION 90
  #endif

  #ifndef Y_SH_CALIBRATION
    #if ENABLED(SOVOL_SV06_PLUS)
      #define Y_SH_CALIBRATION 100
    #else
      #define Y_SH_CALIBRATION 80
    #endif
  #endif
  
  #if Y_SH_CALIBRATION == 8
    #undef Y_SH_CALIBRATION
    #if ENABLED(SOVOL_SV06_PLUS)
      #define Y_SH_CALIBRATION 100
    #else
      #define Y_SH_CALIBRATION 80
    #endif
  #endif

  #define X_ENABLE_ON 0
  #define Y_ENABLE_ON 0
  #define Z_ENABLE_ON 0
  #define E_ENABLE_ON 0

  #if ENABLED(REVERSE_X_MOTOR)
    #define INVERT_X_DIR true
  #else
    #define INVERT_X_DIR false
  #endif

  #if ENABLED(REVERSE_Y_MOTOR)
    #define INVERT_Y_DIR false
  #else
    #define INVERT_Y_DIR true
  #endif

  #if ENABLED(REVERSE_Z_MOTOR)
    #define INVERT_Z_DIR true
  #else
    #define INVERT_Z_DIR false
  #endif
  
  #if ENABLED(REVERSE_E_MOTOR_DIRECTION)
    #define INVERT_E0_DIR true
  #else
    #define INVERT_E0_DIR false
  #endif

  #define INVERT_E1_DIR false
  #define INVERT_E2_DIR false
  #define INVERT_E3_DIR false
  #define INVERT_E4_DIR false
  #define INVERT_E5_DIR false

  #define ENCODER_PULSES_PER_STEP 4
  #define ENCODER_STEPS_PER_MENU_ITEM 1
  
  #if ENABLED(SOVOL_SV03)
    #if DISABLED(SV03_NOABL) && DISABLED(SV03_EZABL)
      #if DISABLED(BLTOUCH)
        #define BLTOUCH
      #endif
      
      #ifndef SERVO0_PIN
        #define SERVO0_PIN PA2
      #endif
      
      #if DISABLED(CUSTOM_PROBE)
        #define CUSTOM_PROBE
        #define NOZZLE_TO_PROBE_OFFSET { -34, -13, 0 }
      #endif
    #endif  
  #endif

  #define EZBOARD_V2

  #if ENABLED(EZOUT_ENABLE)
    #define FILAMENT_RUNOUT_SENSOR
    #define DIRECT_DRIVE_PRINTER
  #endif
  
  #if ENABLED(FILAMENT_RUNOUT_SENSOR)
    
    #define FIL_RUNOUT_ENABLED_DEFAULT true // Enable the sensor on startup. Override with M412 followed by M500.
    #define NUM_RUNOUT_SENSORS   1          // Number of sensors, up to one per extruder. Define a FIL_RUNOUT#_PIN for each.
    
    #if ENABLED(EZOUT_ENABLE)
      #define FIL_RUNOUT_STATE LOW  // Pin state indicating that filament is NOT present.
    #else
      #define FIL_RUNOUT_STATE HIGH // Pin state indicating that filament is NOT present.
    #endif
    
    #define FIL_RUNOUT_PULLUP
    #define FILAMENT_RUNOUT_SCRIPT "M600"
  #endif

  #if ENABLED(EZNEO_220)
    #define RGB_LIGHTS
    #define NEOPIXEL_LED
    #if ENABLED(NEOPIXEL_LED)
      #define NEOPIXEL_TYPE   NEO_GRB // NEO_GRBW / NEO_GRB - four/three channel driver type (defined in Adafruit_NeoPixel.h)
      #ifndef NEOPIXEL_PIN
        #define NEOPIXEL_PIN    PA8    // LED driving pin
      #endif
      #define NEOPIXEL_PIXELS 15       // Number of LEDs in the strip. (Longest strip when NEOPIXEL2_SEPARATE is disabled.)
      #define NEOPIXEL_IS_SEQUENTIAL   // Sequential display for temperature change - LED by LED. Disable to change all LEDs at once.
      #define NEOPIXEL_BRIGHTNESS 255  // Initial brightness (0-255)
      #define NEOPIXEL_STARTUP_TEST  // Cycle through colors at startup
    #endif
    #if ANY(BLINKM, RGB_LED, RGBW_LED, PCA9632, PCA9533, NEOPIXEL_LED)
      #define PRINTER_EVENT_LEDS
    #endif
  #endif
  
#endif
//End EZBoard V2 SV06 Settings

/*
 * All other settings are stored in the Configuration_backend.h and Configuration_speed.h files. Do not change unless you know what you are doing.
 */
 
#include "Configuration_backend.h"
#include "Configuration_speed.h"