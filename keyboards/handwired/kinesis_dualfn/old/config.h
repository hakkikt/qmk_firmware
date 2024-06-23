#ifndef KINESIS_DUALFN_CONFIG_H
#define KINESIS_DUALFN_CONFIG_H

/*
From "../../kinesis/config.h"
Copyright 2012 Jun Wako <wakojun@gmail.com>

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

// Mouse
#define MOUSEKEY_DELAY          60
#define MOUSEKEY_INTERVAL       20
#define MOUSEKEY_MAX_SPEED      4
#define MOUSEKEY_TIME_TO_MAX    10
#define MOUSEKEY_WHEEL_MAX_SPEED 1
#define MOUSEKEY_WHEEL_DELTA 1
#define MOUSEKEY_WHEEL_TIME_TO_MAX 1

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

/* USB Device descriptor parameter */
#define PRODUCT_ID      0x6060
#define DEVICE_VER      0x0001

/* key matrix size */
#define MATRIX_ROWS 11
#define MATRIX_COLS 10 

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
#define TEENSY_PIN0  B16
#define TEENSY_PIN1  B17
#define TEENSY_PIN2  D0
#define TEENSY_PIN3  A12
#define TEENSY_PIN4  A13
#define TEENSY_PIN5  D7
#define TEENSY_PIN6  D4
#define TEENSY_PIN7  D2
#define TEENSY_PIN8  D3
#define TEENSY_PIN9  C3
#define TEENSY_PIN10 C4
#define TEENSY_PIN11 C6
#define TEENSY_PIN12 C7
#define TEENSY_PIN13 C5
#define TEENSY_PIN14 D1
#define TEENSY_PIN15 C0
#define TEENSY_PIN16 B0
#define TEENSY_PIN17 B1
#define TEENSY_PIN18 B3
#define TEENSY_PIN19 B2
#define TEENSY_PIN20 D5
#define TEENSY_PIN21 D6
#define TEENSY_PIN22 C1
#define TEENSY_PIN23 C2
#define TEENSY_PIN24 A5
#define TEENSY_PIN25 B19
#define TEENSY_PIN26 E1
#define TEENSY_PIN27 C9
#define TEENSY_PIN28 C8
#define MATRIX_ROW_PINS { B16, B17, D0, A12, A13, D7, D4, D2, D3, C3, C4 }

// May be upside down. 
#define MATRIX_COL_PINS { D1, C0, B0, B1, B3, B2, D5, D6, C1, C2 }

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW
 
#define USB_POLLING_INTERVAL_MS 4

#endif
