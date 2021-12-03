/*
Copyright 2020 kushima8

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "config_common.h"
#define OLED_FONT_H "./lib/glcdfont.c"

/* USB Device descriptor parameter */
#define VENDOR_ID    0x3938
#define PRODUCT_ID   0x3634
#define DEVICE_VER   0x0002
#define MANUFACTURER kushima8
#define PRODUCT      Re64
#define DESCRIPTION  60% split keyboard

/* key matrix size */
#define MATRIX_ROWS 10
#define MATRIX_COLS 7
#define NO_MUSIC_MODE
/*
 * Keyboard Matrix Assignments
 *
 * Change this to how you wired your keyboard
 * COLS: AVR pins used for columns, left to right
 * ROWS: AVR pins used for rows, top to bottom
 * DIODE_DIRECTION: COL2ROW = COL = Anode (+), ROW = Cathode (-, marked on diode)
 *                  ROW2COL = ROW = Anode (+), COL = Cathode (-, marked on diode)
 *
 */
#define MATRIX_ROW_PINS { E6, B4, B3, B2, B5 }
#define MATRIX_COL_PINS { D4, F4, F5, F6, F7, B1, D7 }
#define UNUSED_PINS

/* COL2ROW, ROW2COL */
#define DIODE_DIRECTION COL2ROW
#define MASTER_LEFT
//#define EE_HANDS
/* Split hand configration */
//#define SPLIT_USB_DETECT
//#define SPLIT_HAND_MATRIX_GRID B5, B1
//#define SPLIT_HAND_MATRIX_GRID_LOW_IS_RIGHT
/* Rotary encoder define*/
#define ENCODERS_PAD_A { C6 }
#define ENCODERS_PAD_B { B6 }
#define ENCODERS_PAD_A_RIGHT { B6 }
#define ENCODERS_PAD_B_RIGHT { C6 }
//#define ENCODER_RESOLUTION 2
//#define MASTER_LEFT
/*
 * Split Keyboard specific options, make sure you have 'SPLIT_KEYBOARD = yes' in your rules.mk, and define SOFT_SERIAL_PIN.
 */
#define SOFT_SERIAL_PIN D2  // or D1, D2, D3, E6
#define SPLIT_OLED_ENABLE
#define RGB_DI_PIN D3
#ifdef RGB_DI_PIN
    #define RGBLED_NUM 80
    #define RGBLED_SPLIT { 40, 40 }
//#    define RGBLIGHT_HUE_STEP 8
//#    define RGBLIGHT_SAT_STEP 8
//#    define RGBLIGHT_VAL_STEP 8
    #define RGBLIGHT_LIMIT_VAL 112 /* The maximum brightness level */
#    define RGBLIGHT_SLEEP  /* If defined, the RGB lighting will be switched off when the host goes to sleep */
/*== all animations enable ==*/
//#    define RGBLIGHT_ANIMATIONS
/*== or choose animations ==*/
 //   #define RGBLIGHT_EFFECT_BREATHING
 //   #define RGBLIGHT_EFFECT_RAINBOW_MOOD
//#    define RGBLIGHT_EFFECT_RAINBOW_SWIRL
//#    define RGBLIGHT_EFFECT_SNAKE
//#    define RGBLIGHT_EFFECT_KNIGHT
//#    define RGBLIGHT_EFFECT_CHRISTMAS
    #define RGBLIGHT_EFFECT_STATIC_GRADIENT
//#    define RGBLIGHT_EFFECT_RGB_TEST
//#    define RGBLIGHT_EFFECT_ALTERNATING
//#     #define RGBLIGHT_EFFECT_TWINKLE
/*== customize breathing effect ==*/
/*==== (DEFAULT) use fixed table instead of exp() and sin() ====*/
//#    define RGBLIGHT_BREATHE_TABLE_SIZE 256      // 256(default) or 128 or 64
/*==== use exp() and sin() ====*/
//#    define RGBLIGHT_EFFECT_BREATHE_CENTER 1.85  // 1 to 2.7
//#    define RGBLIGHT_EFFECT_BREATHE_MAX    255   // 0 to 255
#endif

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* If defined, GRAVE_ESC will always act as ESC when CTRL is held.
 * This is useful for the Windows task manager shortcut (ctrl+shift+esc).
 */
//#define GRAVE_ESC_CTRL_OVERRIDE

/*
 * Force NKRO
 */
//#define FORCE_NKRO

/* disable action features */
#define NO_ACTION_ONESHOT
//#define MASTER_RIGHT
/* disable these deprecated features by default */
#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION
#define NO_LEADER

