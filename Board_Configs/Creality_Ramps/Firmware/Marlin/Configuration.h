/**
 * For directions on how to use this firmware visit http://uf2.th3dstudio.com and click on your printer/board link
 * NO IMPLIED SUPPORT OR WARRANTY IS PROVIDED WITH THIS FIRMWARE AND IS PROVIDED AS-IS
 *
 * MAKE SURE ALL SLICERS AND OTHER PROGRAMS THAT CONNECT TO YOUR PRINTER COM PORT ARE CLOSED BEFORE FLASHING.
 */
#pragma once
#define CONFIGURATION_H_VERSION 02010200

//===========================================================================
//============================ TH3D Configuration ===========================
//===========================================================================

// ONLY UNCOMMENT ONE PRINTER AT A TIME!!! IF YOU HAVE MULTIPLE MACHINES FLASH THEM ONE AT A TIME.
// UNCOMMENT MEANS REMOVING THE // IN FRONT OF A #define XXXXXX LINE.

//===========================================================================
// *****************   CREALITY PRINTERS 2560 CPU BOARD   *******************
//===========================================================================
//#define CR10S
//#define CR10S_MINI
//#define CR10S_S4
//#define CR10S_S5
//#define CR10_V2
//#define CR10_V3
//#define CR10S_PRO         //V1 Model came with an 18mm probe pre-installed
//#define CR10S_PRO_V2      //V2 Model came with a BLTouch pre-installed
//#define CR20
//#define CRX
//#define ENDER4
//#define ENDER5_PLUS

// NOTE: Ender 5 Plus, CR-10S Pro, and CRX ONLY work once you have installed our LCD kit. Stock LCD is not supported due to closed source firmware limitations.
// Ender 5 Plus LCD Kit: https://www.th3dstudio.com/product/ender-5-plus-12864-lcd-upgrade-kit/
// CRX LCD Kit: https://www.th3dstudio.com/product/cr-x-12864-lcd-upgrade-kit/
// CR-10S Pro LCD Kit: https://www.th3dstudio.com/product/cr-10s-pro-lcd-ezabl-upgrade-kit/

/**
 * THE BELOW PRINTER MODEL SETTINGS ARE ONLY FOR USING THE TH3D CREALITY DUAL BOARD WITH THE ENDER3/5
 * To use the Ender 3/5 LCD with the CR-10S dual board board connect the LCD cable to EXP1 on the 
 * board but rotate it 180 degrees. The LCD end of the cable goes to EXP3 on the Ender 3/5 LCD.
 * You will have to force it into the EXP1 but it will fit and work.
 */
//#define ENDER3_DUAL_EXTRUDER_BOARD
//#define ENDER5_DUAL_EXTRUDER_BOARD

// EZABL Probe Mounts - Uncomment the mount you are using for your EZABL to enable EZABL support in the firmware.
//#define CR10S_OEM
//#define CR10S_PRO_OEM
//#define CR10V2_OEM
//#define CR20_OEM
//#define CRX_OEM
//#define ENDER4_OEM
//#define ENDER5_PLUS_OEM
//#define CR10_VOLCANO
//#define CR10_V6HEAVYDUTY
//#define TM3DAERO
//#define TM3DAERO_EXTENDED
//#define PETSFANG  //This is the RIGHT mounted version - if using the left mount please use the CUSTOM_PROBE option.
//#define SPRITE_EXTRUDER_18MM_MOUNT // Mounts to the stock CRTouch bracket
//#define CUSTOM_PROBE

// Filament Sensor - EZOut Kits
// If you are using our EZOut filament sensor kit on your machine uncomment the below line.
// This board only works with this version of our sensor kit: https://www.th3dstudio.com/product/ezout-filament-sensor-kit-standard/
// If you bought just the sensor from us and not the kit with the adapter PCB shown at the above link, you will need to swap the red an white wires at one end of the plug to use it with these boards.
// Failure to use our sensor with the EZOut adapter PCB OR without swapping the red and white wires will result in a short to ground.
// Connect the EZOut sensor kit (or sensor only with wiring changed as per above) to the "X+" port and uncomment the below line to enable the filament sensor.
//#define EZOUT_ENABLE
//
// DUAL EXTRUSION: The firmware assumes you have an EZOut sensor for each extruder (connect E1 sensor to X+ and E2 sensor to Y+). Mixing sensor brands is not supported.
// If you need the EZOut Filament sensor kit for dual extrusion you can get it here as a package: https://www.th3dstudio.com/product/ezout-std-x2/

// Filament Sensor - Disable
// If you are having issues with the stock Creality filament sensor (or do not have one) you can disable it with the below feature
//#define DISABLE_FILAMENT_SENSOR

// LCD - Use this to use the CR-10 LCD with the CR-10S Board. Rotate the LCD plug 180
// and plug into EXP1. You will have to force it in but it will fit and work.
//#define CR10LCD_CR10S

// Creality 2560 Silent Board
// If you are using the 2560 based "Silent" board with TMC drivers enable the below setting
//#define CREALITY_SILENT_BOARD

// EZNeo Settings -----------------------------------------------------------
// If you are using an EZNeo strip on your printer, uncomment the line for what strip you are using.
// Specify your IO pin below as well as this board does not have a dedicated NEOPIXEL header on it.
//#define EZNEO_220

// EZNeo Manual IO Pin Setting ----------------------------------------------
// If you have the EZNeo wired with your own 5V power provided, specify the pin used below.
//#define NEOPIXEL_PIN 12

//===========================================================================
// Ender 5 Plus - ABL Settings
// By default the Ender 5 Plus comes with a BL Touch. Enabling the ENDER5_PLUS_EZABL or ENDER5_PLUS_NOABL will override the BL Touch setting
// If you are using the stock BL Touch with a non-stock mount enable the CUSTOM_PROBE line above and enter the offsets below for the new mount.
//#define ENDER5_PLUS_EZABL
//#define ENDER5_PLUS_NOABL

//===========================================================================
// Ender 5 - Leadscrew Setting
// If you have the new Ender 5/5 Pro Model that has the new 800steps/mm Z leadscrew uncomment the below option to set the correct steps/mm
//#define ENDER5_NEW_LEADSCREW

//===========================================================================
/**
 * Dual Extruder Board Options - The below options are for use with the TH3D CR-10S Board with dual extruder support and the CRX.
 * Make sure to uncomment your printer model and other options above first.
 * Supports the following models: CR-10(all sizes), CR-10S(all sizes), CR-20, CRX, Ender 3, Ender 5, Ender 5 Plus
 * CRX also needs to have the LCD conversion kit from TH3D installed: https://www.th3dstudio.com/product/cr-x-12864-lcd-upgrade-kit/
 * Ender 5 Plus also needs to have the LCD conversion kit from TH3D installed: https://www.th3dstudio.com/product/ender-5-plus-12864-lcd-upgrade-kit/
 */

// If you are using a single hotend with the 2 into 1 adapter OR mixing nozzle uncomment the below line
//#define DUAL_EXTRUDER_SINGLE_NOZZLE

// If you are using a dual hotend with dual nozzles uncomment the below line
//#define DUAL_EXTRUDER_DUAL_NOZZLES

// This is the distance between each nozzle tip when using a dual hotend like the TH3D Tough Dual Hotend or the E3D Chimera or Dual hotends.
#define DUAL_HOTEND_X_DISTANCE 18.0

// If you are using different extruders on your E motors that require different steps/mm then set those below and uncomment DISTINCT_E_FACTORS
// If you have matching extruders and they do not use the stock steps/mm use the CUSTOM_ESTEPS option instead below the printer configs
// E0 is for your 1st hotend/extruder, E1 is for your 2nd hotend/extruder
//#define DISTINCT_E_FACTORS
#define DUAL_EXTRUDER_E0_STEPS 95
#define DUAL_EXTRUDER_E1_STEPS 95

// If you need to reverse one or both motors use the below REVERSE_E#_MOTOR_DIRECTION options.
// E0 is for your 1st hotend/extruder, E1 is for your 2nd hotend/extruder
//#define REVERSE_E0_MOTOR_DIRECTION
//#define REVERSE_E1_MOTOR_DIRECTION

//===========================================================================
// *************************  END PRINTER SECTION   *************************
//===========================================================================

//===========================================================================
// EZABL Advanced Settings - EZABL_POINTS & EZABL_PROBE_EDGE are also used for other probes
//===========================================================================

// Probing Grid Points - If you want more or less EZABL probe points change the number below, use odd numbers. Total points is # times #.
#define EZABL_POINTS 3

// Probe Edge - How far from the edge of the bed to probe from. Use 50 if using binder clips. This also sets the edge inset value for MANUAL_MESH_LEVELING.
#define EZABL_PROBE_EDGE 35

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

//================================================================================
// CUSTOM PROBE SETTINGS - FOR EZABL OR BL TOUCH
// If you have a probe mount that is not pre-setup in the firmware then uncomment
// the CUSTOM_PROBE line above and enter your probe offsets below
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
//******************** EXTRA FEATURES AND TWEAKS ****************************
//===========================================================================

// EXTRUDER SETTINGS -------------------------------
// Use to set custom esteps and/or reverse your E Motor direction if you are installing an extruder that needs the direction reversed.
// If you reversed the wiring on your E motor already (like the Bondtech Guide says to do) then you do not need to reverse it in the firmware here.

// If you want to change the Esteps for your printer you can uncomment the below line and set CUSTOM_ESTEPS_VALUE to what you want - USE WHOLE NUMBERS ONLY
// This option sets the esteps from the CUSTOM_ESTEPS_VALUE line below.
// If you need to reverse the e motor direction also enabled the REVERSE_E_MOTOR_DIRECTION option.
// Example EStep Values: TH3D Aluminum Extruder - 95 ESteps, TH3D Tough Extruder - 410 ESteps, BMG Extruder - 415 ESteps
// When installing a Tough Extruder or E3D Titan or Bondtech that is Geared you likely need to enable the REVERSE_E_MOTOR_DIRECTION option
//#define CUSTOM_ESTEPS
#define CUSTOM_ESTEPS_VALUE 410
//#define REVERSE_E_MOTOR_DIRECTION

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

// Bed and Z Height Adjustments
// If you need to make changes to your X, Y, and/or Z size on your printer for whatever reason you can uncomment the custom size/height line
// for whatever axis you need to make changes to and then replace the XXX with the new size in millimeters.
//#define CUSTOM_X_BED_SIZE XXX
//#define CUSTOM_Y_BED_SIZE XXX
//#define CUSTOM_Z_HEIGHT XXX

//===========================================================================
//****************** COMMUNITY REQUESTED FEATURES ***************************
//*** COMMUNITY REQUESTED FEATURES ARE ALL NOT SUPPORTED BY TH3D SUPPORT ****
//===========================================================================

// INPUT SHAPING -----------------------------------
// See here on how to use Input Shaping: https://www.th3dstudio.com/marlin-input-shaping-calculator/
//
// CPU LIMITATION WARNING: While this will compile and fit in memory, these 8-bit CPUs are outdated and may run poorly with input shaping.
// If you want to reliably and smoothly run input shaping you should upgrade to a 32-bit board. If you have issues, disable input shaping.
//
//#define INPUT_SHAPING
// Below are the frequency and damping settings for each axis.
// Damping must have f at the end of the number and the range is 0.00-1.00.
// X Axis Settings
#define INPUT_SHAPING_FREQ_X 40
#define INPUT_SHAPING_DAMPING_X 0.15f
// Y Axis Settings
#define INPUT_SHAPING_FREQ_Y 40
#define INPUT_SHAPING_DAMPING_Y 0.15f

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

// HOME OFFSET ADJUSTMENT --------------------------
// If you need to adjust your XY home offsets from defaults then you can uncomment the HOME_ADJUST line below and enter your
// custom XY offsets. This is provided for convenience and is unsupported with included product support.
// How to use - measure (home XY then jog using the LCD 1mm at a time) the X and Y distance the nozzle is off
// the build plate and then put those as NEGATIVE values below, positive values will NOT work (move your endstops to fix a positive offset).
//#define HOME_ADJUST
#define X_HOME_LOCATION -10
#define Y_HOME_LOCATION -10

// PID BED TEMPERATURE CONTROL ---------------------
// If you want PID Bed Temperature control enable the below line. You will need to tune it for your machine.
// See the PID Bed setup guide here: https://support.th3dstudio.com/helpcenter/p-i-d-bed-calibration-guide/
//#define ENABLE_PIDBED

// FINE BABYSTEPPING -------------------------------
// Enabling the below line will set the babystep resolution from 0.025mm to 0.010mm for finer control.
//#define FINE_BABYSTEPPING

// LINEAR ADVANCE ----------------------------------
// See here on how to use Linear Advance: http://marlinfw.org/docs/features/lin_advance.html
//#define LINEAR_ADVANCE
// Change the K Value here or use M900 KX.XX in your starting code (recommended).
#define LINEAR_ADVANCE_K 0

// BL TOUCH ----------------------------------------
// If you want to use the BL-Touch uncomment the 2 lines below and set your servo pin.
// You also need to uncomment #define CUSTOM_PROBE above and then enter in your offsets above in the CUSTOM PROBE section.
//#define BLTOUCH
// Here is where you set your servo pin.
//#define SERVO0_PIN 11

// MANUAL MESH LEVELING ----------------------------
// If you want to use manual mesh leveling you can enable the below option. This is for generating a MANUAL mesh WITHOUT a probe. To change the mesh inset value change the EZABL_PROBE_EDGE setting above.
// Mesh Bed Leveling Documentation: http://marlinfw.org/docs/gcode/G029-mbl.html 
// NOTE: If you want to automate the leveling process our EZABL kits do this for you. Check them out here: http://EZABL.TH3DStudio.com
//#define MANUAL_MESH_LEVELING

// POWER LOSS RECOVERY -----------------------------
// Continue after Power-Loss feature will store the current state to the SD Card at the start of each layer
// during SD printing. If this is found at bootup it will ask you if you want to resume the print.
//
// NOTE: This feature causes excessive wear on your SD card.
//#define POWER_LOSS_RECOVERY

// ARC Support Override ----------------------------
// Arc support is enabled by default on all builds but this takes up extra space. If you get compile errors due to the size being too large when enabling other options, then disable ARC_SUPPORT
// by uncommenting the DISABLE_ARC_SUPPORT line below.
//#define DISABLE_ARC_SUPPORT

//===========================================================================
// **********************  END CONFIGURATION SETTINGS   *********************
//===========================================================================

/**
 * ****************************DO NOT TOUCH ANYTHING BELOW THIS COMMENT**************************
 * Core machine settings are below. Do NOT modify these unless you understand what you are doing.
 */

//CR-10S Pro V2 Stock BLTouch Setup
#if ENABLED(CR10S_PRO_V2)
  #define CR10S_PRO
  
  #if ALL(CUSTOM_PROBE, BLTOUCH)
    #define Z_MAX_PIN -1
    #define Z_MIN_PROBE_PIN 19
    #define BLTOUCH
    #ifndef SERVO0_PIN
      #define SERVO0_PIN 11
    #endif
  #endif

  #if NONE(CUSTOM_PROBE, CR10S_PRO_OEM, BLTOUCH)
    #define Z_MAX_PIN -1
    #define Z_MIN_PROBE_PIN 19
    #define BLTOUCH
    #define CUSTOM_PROBE
    #ifndef SERVO0_PIN
      #define SERVO0_PIN 11
    #endif
    #define NOZZLE_TO_PROBE_OFFSET { -27, 0, 0 }
  #endif
#endif

//CR-10S Pro Stock ABL Setup
#if ENABLED(CR10S_PRO) && DISABLED(CR10S_PRO_V2)
  #if NONE(CUSTOM_PROBE, CR10S_PRO_OEM, BLTOUCH)
    #define CUSTOM_PROBE
    #define CR10S_PRO_STOCK_ABL
    #define NOZZLE_TO_PROBE_OFFSET { -27, 0, 0 }
  #endif
#endif

#if ALL(CR10LCD_CR10S, CR10S_PRO)
  #error "CR10LCD_CR10S is not supported on the CR-10S Pro V1/V2. Disable it in the Configuration.h file"
#endif

// Enable Software PWM to avoid Timer Conflict
#define FAN_SOFT_PWM
#if DISABLED(FAN_FIX)
  #define SOFT_PWM_SCALE 0
#endif

/**
 * Machine Configuration Settings
 */

// Creality 2560 Printer Settings
#if ANY(CR10S, CR10_V2, CR10_V3, CR10S_MINI, CR10S_S4, CR10S_S5, ENDER3_DUAL_EXTRUDER_BOARD, CR20, ENDER5_DUAL_EXTRUDER_BOARD, CRX, CR10S_PRO, CRX, ENDER5_PLUS)
  #if ENABLED(ENDER3_DUAL_EXTRUDER_BOARD)
    #define ENDER3
  #endif

  #if ENABLED(ENDER5_DUAL_EXTRUDER_BOARD)
    #define ENDER5
  #endif

  #if ENABLED(CR10_V3)
    //CR-10 V3 is same as V2 but with Direct Drive Titan installed.
    #define CR10_V2
    #ifndef CUSTOM_ESTEPS
      #define CUSTOM_ESTEPS
      #define CUSTOM_ESTEPS_VALUE 410
    #endif
  #endif
  
  #if ENABLED(DUAL_EXTRUDER_DUAL_NOZZLES)
    #define HOTEND_OFFSET_X { 0.0, DUAL_HOTEND_X_DISTANCE } // (mm) relative X-offset for each nozzle
    #define HOTEND_OFFSET_Y { 0.0, 0.00 }  // (mm) relative Y-offset for each nozzle
    #define HOTEND_OFFSET_Z { 0.0, 0.00 }  // (mm) relative Z-offset for each nozzle
    #define Z_PROBE_LOW_POINT -10
  #endif

  #if ENABLED(ENDER5_PLUS)
    #if DISABLED(ENDER5_PLUS_NOABL) && DISABLED(ENDER5_PLUS_EZABL)
      #if DISABLED(BLTOUCH)
        #define BLTOUCH
      #endif
      
      #ifndef SERVO0_PIN
        #define SERVO0_PIN 11
      #endif
      
      #if DISABLED(CUSTOM_PROBE)
        #define CUSTOM_PROBE
        #define NOZZLE_TO_PROBE_OFFSET { -44, -9, 0 }
      #endif
    #endif  
  #endif

  #if ANY(ENDER5_NEW_LEADSCREW, ENDER5_PLUS)
    #define CREALITY_Z_STEPS 800
  #else
    #define CREALITY_Z_STEPS 400
  #endif

  #define SERIAL_PORT 0
  #define SPACE_SAVER_2560

  #define BAUDRATE 115200
  
  #if ANY(CR10LCD_CR10S, ENDER3_DUAL_EXTRUDER_BOARD, ENDER5_DUAL_EXTRUDER_BOARD)
    #define CR10_STOCKDISPLAY
    #if ENABLED(REVERSE_KNOB_DIRECTION)
      #define REVERSE_ENCODER_DIRECTION
    #endif
  #elif ENABLED(CR20)
    #define MINIPANEL
    #if ENABLED(REVERSE_KNOB_DIRECTION)
      #define REVERSE_ENCODER_DIRECTION
    #endif
  #else
    #define REPRAP_DISCOUNT_FULL_GRAPHIC_SMART_CONTROLLER
    
    #define ST7920_DELAY_1 DELAY_NS(200)
    #define ST7920_DELAY_2 DELAY_NS(200)
    #define ST7920_DELAY_3 DELAY_NS(200)
    
    #if ANY(CRX, CR10S_PRO, ENDER5_PLUS)
      #if DISABLED(REVERSE_KNOB_DIRECTION)
        #define REVERSE_ENCODER_DIRECTION
      #endif
    #else
      #if ENABLED(REVERSE_KNOB_DIRECTION)
        #define REVERSE_ENCODER_DIRECTION
      #endif
    #endif
  #endif

  #ifndef MOTHERBOARD
    #define MOTHERBOARD BOARD_RAMPS_CREALITY
  #endif

  #if DISABLED(DISTINCT_E_FACTORS)
    #if ENABLED(CUSTOM_ESTEPS)
      #define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 80, CREALITY_Z_STEPS, CUSTOM_ESTEPS_VALUE }
    #else
      #if ENABLED(CR10S_PRO)
        #define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 80, CREALITY_Z_STEPS, 140 }
      #else
        #define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 80, CREALITY_Z_STEPS, 95 }
      #endif
    #endif
  #else
    #define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 80, CREALITY_Z_STEPS, DUAL_EXTRUDER_E0_STEPS, DUAL_EXTRUDER_E1_STEPS }
  #endif

  #if ANY(CRX, DUAL_EXTRUDER_SINGLE_NOZZLE, DUAL_EXTRUDER_DUAL_NOZZLES)
    #define EXTRUDERS 2
  #else
    #define EXTRUDERS 1
  #endif

  #if ANY(CR10S, CRX, CR10_V2, CR10S_PRO)
    #define X_BED_SIZE 300
    #define Y_BED_SIZE 300
    #define Z_MAX_POS 400
  #endif

  #if ENABLED(CR10S_MINI)
    #define X_BED_SIZE 300
    #define Y_BED_SIZE 220
    #define Z_MAX_POS 300
  #endif

  #if ENABLED(CR10S_S4)
    #define X_BED_SIZE 400
    #define Y_BED_SIZE 400
    #define Z_MAX_POS 400
  #endif

  #if ENABLED(CR10S_S5)
    #define X_BED_SIZE 500
    #define Y_BED_SIZE 500
    #define Z_MAX_POS 500
  #endif
  
  #if ENABLED(CR20)
    #define X_BED_SIZE 220
    #define Y_BED_SIZE 220
    #define Z_MAX_POS 250
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
  #endif

  #if ENABLED(HOME_ADJUST)
    #define X_MIN_POS X_HOME_LOCATION
    #define Y_MIN_POS Y_HOME_LOCATION
  #else
    #if ENABLED(CRX)
      #define X_MIN_POS 0
      #define Y_MIN_POS -8
    #else
      #define X_MIN_POS 0
      #define Y_MIN_POS 0
    #endif
  #endif

  #if ENABLED(ENDER5_PLUS)
    #define USE_XMAX_PLUG
    #define USE_YMAX_PLUG
    #define USE_ZMIN_PLUG
  #else
    #define USE_XMIN_PLUG
    #define USE_YMIN_PLUG
    #define USE_ZMIN_PLUG
  #endif
  
  #if ENABLED(ENDER5_PLUS)
    #define X_HOME_DIR 1
    #define Y_HOME_DIR 1
    #define Z_HOME_DIR -1
  #else
    #define X_HOME_DIR -1
    #define Y_HOME_DIR -1
    #define Z_HOME_DIR -1
  #endif

  #if ANY(CRX, DUAL_EXTRUDER_SINGLE_NOZZLE)
    #define SINGLENOZZLE
  #endif
  
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

  #if ENABLED(DUAL_EXTRUDER_DUAL_NOZZLES)
    #if NONE(V6_HOTEND, TH3D_HOTEND_THERMISTOR, KNOWN_HOTEND_THERMISTOR)
      #define TEMP_SENSOR_1 1
    #else
      #if ENABLED(EZBOARD_PT100)
        #define TEMP_SENSOR_1 20
      #elif ENABLED(V6_HOTEND)
        #define TEMP_SENSOR_1 5
      #elif ENABLED(KNOWN_HOTEND_THERMISTOR)
        #define TEMP_SENSOR_1 KNOWN_HOTEND_THERMISTOR_VALUE
      #elif ENABLED(TH3D_HOTEND_THERMISTOR)
        #define TEMP_SENSOR_1 1
      #endif
    #endif
  #else
    #define TEMP_SENSOR_1 0
  #endif

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
  #if ALL(CR10S_PRO_V2, BLTOUCH)
    #define USE_PROBE_FOR_Z_HOMING
  #else
    #define Z_MIN_PROBE_USES_Z_MIN_ENDSTOP_PIN
  #endif

  #if ANY(CR10_V2, CREALITY_SILENT_BOARD, CR10S_PRO)
    #define X_DRIVER_TYPE TMC2208_STANDALONE
    #define Y_DRIVER_TYPE TMC2208_STANDALONE
    #define Z_DRIVER_TYPE TMC2208_STANDALONE
    #define E0_DRIVER_TYPE TMC2208_STANDALONE
  #else
    #define X_DRIVER_TYPE A4988
    #define Y_DRIVER_TYPE A4988
    #define Z_DRIVER_TYPE A4988
    #define E0_DRIVER_TYPE A4988
  #endif

  #define X_ENABLE_ON 0
  #define Y_ENABLE_ON 0
  #define Z_ENABLE_ON 0
  #define E_ENABLE_ON 0

  #define INVERT_X_DIR false
  
  #if ANY(CRX, CR10S_PRO)
    #define INVERT_Y_DIR true
  #else
    #define INVERT_Y_DIR false
  #endif
  
  #if ANY(ENDER5_DUAL_EXTRUDER_BOARD, ENDER5_PLUS)
    #define INVERT_Z_DIR false
  #else
    #define INVERT_Z_DIR true
  #endif
  
  #if ENABLED(REVERSE_E0_MOTOR_DIRECTION)
    #define REVERSE_E_MOTOR_DIRECTION
  #endif

  #if ENABLED(REVERSE_E1_MOTOR_DIRECTION)
    #define INVERT_E1_DIR true
  #else
    #define INVERT_E1_DIR false
  #endif
  
  #if ENABLED(CRX)
    #if ENABLED(REVERSE_E_MOTOR_DIRECTION)
      #define INVERT_E0_DIR false
    #else
      #define INVERT_E0_DIR true
    #endif
  #else
    #if ENABLED(REVERSE_E_MOTOR_DIRECTION)
      #define INVERT_E0_DIR true
    #else
      #define INVERT_E0_DIR false
    #endif
  #endif

  #define INVERT_E2_DIR false
  #define INVERT_E3_DIR false
  #define INVERT_E4_DIR false
  #define INVERT_E5_DIR false
  #define INVERT_E6_DIR false
  #define INVERT_E7_DIR false

  #define ENCODER_PULSES_PER_STEP 4
  #define ENCODER_STEPS_PER_MENU_ITEM 1

  #if DISABLED(DISABLE_FILAMENT_SENSOR)
    #if ENABLED(CRX) && DISABLED(EZOUT_ENABLE)
      // do nothing
    #elif ENABLED(CR20) && DISABLED(EZOUT_ENABLE)
      // do nothing
    #else
      #define FILAMENT_RUNOUT_SENSOR
    #endif
  #endif
  #if ENABLED(FILAMENT_RUNOUT_SENSOR)
    #define FIL_RUNOUT_ENABLED_DEFAULT true // Enable the sensor on startup. Override with M412 followed by M500.
    
    #if ENABLED(CRX) || (ENABLED(EZOUT_ENABLE) && (ENABLED(DUAL_EXTRUDER_SINGLE_NOZZLE) || ENABLED(DUAL_EXTRUDER_DUAL_NOZZLES)))
      #define NUM_RUNOUT_SENSORS   2          // Number of sensors, up to one per extruder. Define a FIL_RUNOUT#_PIN for each.
    #else
      #define NUM_RUNOUT_SENSORS   1          // Number of sensors, up to one per extruder. Define a FIL_RUNOUT#_PIN for each.
    #endif
    
    #if (ENABLED(CR10S) || ENABLED(CR10S_MINI) || ENABLED(CR10S_S4) || ENABLED(CR10S_S5)) && DISABLED(EZOUT_ENABLE)
      #define FIL_RUNOUT_STATE     HIGH        // Pin state indicating that filament is NOT present.
    #else
      #define FIL_RUNOUT_STATE     LOW        // Pin state indicating that filament is NOT present.
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

#endif
// End Creality 2560 Printer Settings

// Ender 4 Printer Settings
#if ENABLED(ENDER4)
  #define SERIAL_PORT 0
  #define SPACE_SAVER_2560

  #define BAUDRATE 115200
    
  #define REPRAP_DISCOUNT_SMART_CONTROLLER
  #define LCD2004
  
  #if ENABLED(REVERSE_KNOB_DIRECTION)
    #define REVERSE_ENCODER_DIRECTION
  #endif
  
  #define ENCODER_PULSES_PER_STEP 4
  #define ENCODER_STEPS_PER_MENU_ITEM 1

  #ifndef MOTHERBOARD
    #define MOTHERBOARD BOARD_RAMPS_ENDER_4
  #endif

  #if ENABLED(CUSTOM_ESTEPS)
    #define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 80, 400, CUSTOM_ESTEPS_VALUE }
  #else
    #define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 80, 400, 95 }
  #endif

  #define COREXY

  #define EXTRUDERS 1

  #define X_BED_SIZE 220
  #define Y_BED_SIZE 220
  #define Z_MAX_POS 310
  
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

  #define X_MIN_ENDSTOP_INVERTING true
  #define Y_MIN_ENDSTOP_INVERTING false
  #define Z_MIN_ENDSTOP_INVERTING false
  #define X_MAX_ENDSTOP_INVERTING false
  #define Y_MAX_ENDSTOP_INVERTING false
  #define Z_MAX_ENDSTOP_INVERTING false
  #define Z_MIN_PROBE_ENDSTOP_INVERTING false
  #define Z_MIN_PROBE_USES_Z_MIN_ENDSTOP_PIN

  #define X_DRIVER_TYPE  A4988
  #define Y_DRIVER_TYPE  A4988
  #define Z_DRIVER_TYPE  A4988
  #define E0_DRIVER_TYPE A4988
    
  #define X_ENABLE_ON 0
  #define Y_ENABLE_ON 0
  #define Z_ENABLE_ON 0
  #define E_ENABLE_ON 0

  #define INVERT_X_DIR true
  #define INVERT_Y_DIR true
  #define INVERT_Z_DIR true
  
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

  #if DISABLED(DISABLE_FILAMENT_SENSOR)
    #define FILAMENT_RUNOUT_SENSOR
  #endif

  #if ENABLED(FILAMENT_RUNOUT_SENSOR)
    #define FIL_RUNOUT_ENABLED_DEFAULT true // Enable the sensor on startup. Override with M412 followed by M500.
    #define NUM_RUNOUT_SENSORS   1          // Number of sensors, up to one per extruder. Define a FIL_RUNOUT#_PIN for each.
    #if ENABLED(EZOUT_ENABLE)
      #define FIL_RUNOUT_STATE     LOW       // Pin state indicating that filament is NOT present. EZOUT
    #else
      #define FIL_RUNOUT_STATE     HIGH       // Pin state indicating that filament is NOT present. STOCK
    #endif
    #define FIL_RUNOUT_PULLUP               // Use internal pullup for filament runout pins.
    //#define FIL_RUNOUT_PULLDOWN           // Use internal pulldown for filament runout pins.
    #define FIL_RUNOUT_PIN 2                // Stock sensor or EZOut on X+

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

#endif
// End Ender 4 Printer Settings

/*
 * All other settings are stored in the Configuration_backend.h and Configuration_speed.h files. Do not change unless you know what you are doing.
 */
 
#include "Configuration_backend.h"
#include "Configuration_speed.h"