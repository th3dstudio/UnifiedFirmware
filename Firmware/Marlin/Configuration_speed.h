#pragma once

#define CONFIGURATION_SPEED_H_VERSION 02000903

/**
 * Feedrate Settings
 */

#define DEFAULT_MAX_FEEDRATE          { 400, 400, 15, 200 }

/**
 * Accel Settings
 */

#if MAX_X_ACCEL > 1
  #ifndef MAX_Y_ACCEL
    #define MAX_Y_ACCEL MAX_X_ACCEL
  #endif
  #define DEFAULT_MAX_ACCELERATION      { MAX_X_ACCEL, MAX_Y_ACCEL, 500, 5000 }
#else
  #if X_BED_SIZE < 200
    #define DEFAULT_MAX_ACCELERATION      { 3500, 3500, 500, 10000 }
  #elif X_BED_SIZE < 300
    #define DEFAULT_MAX_ACCELERATION      { 2500, 2500, 500, 10000 }
  #elif X_BED_SIZE < 400
    #define DEFAULT_MAX_ACCELERATION      { 2000, 2000, 500, 10000 }
  #else
    #define DEFAULT_MAX_ACCELERATION      { 1000, 1000, 500, 10000 }
  #endif
#endif


#ifndef DEFAULT_ACCELERATION
  #if X_BED_SIZE < 200
    #define DEFAULT_ACCELERATION          2000
  #elif X_BED_SIZE < 300
    #define DEFAULT_ACCELERATION          1500
  #elif X_BED_SIZE < 400
    #define DEFAULT_ACCELERATION          1000
  #else
    #define DEFAULT_ACCELERATION          500
  #endif
#endif

#ifndef DEFAULT_RETRACT_ACCELERATION
  #define DEFAULT_RETRACT_ACCELERATION  500
#endif

#ifndef DEFAULT_TRAVEL_ACCELERATION
  #define DEFAULT_TRAVEL_ACCELERATION   DEFAULT_ACCELERATION
#endif

/**
 * Jerk  Settings
 */

#define CLASSIC_JERK


#ifndef DEFAULT_XJERK
  #if X_BED_SIZE < 200
    #define DEFAULT_XJERK 10.0
  #elif X_BED_SIZE < 300
    #define DEFAULT_XJERK 8.0
  #elif X_BED_SIZE < 400
    #define DEFAULT_XJERK 6.0
  #else
    #define DEFAULT_XJERK 4.0
  #endif
#endif

#ifndef DEFAULT_YJERK
  #define DEFAULT_YJERK DEFAULT_XJERK
#endif

#ifndef DEFAULT_ZJERK
  #define DEFAULT_ZJERK  0.3
#endif

#ifndef DEFAULT_EJERK
  #define DEFAULT_EJERK  5.0
#endif