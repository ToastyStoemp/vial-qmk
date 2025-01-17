/*
Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

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

/* USB Device descriptor parameter */
#define VENDOR_ID       0x6227
#define PRODUCT_ID      0x0047
#define DEVICE_VER      0x0100
#define MANUFACTURER    Grldtmk
#define PRODUCT         47xh
#define DESCRIPTION     40 percent staggered keyboard with fullsize mods

/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 8
#define MATRIX_COLS 6

// wiring of each half
#define MATRIX_ROW_PINS { B6, B2, B3, B1, F7, F6, F5, F4 }
// #define MATRIX_COL_PINS { E6, B4, B5 }
// #define MATRIX_COL_PINS_RIGHT { D7, C6, D4 }
#define MATRIX_COL_PINS { E6, B4, B5, D7, C6, D4 }

#define DIODE_DIRECTION ROW2COL

/* serial.c configuration for split keyboard */
// #define SOFT_SERIAL_PIN D0


/* define if matrix has ghost */
//#define MATRIX_HAS_GHOST

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE
