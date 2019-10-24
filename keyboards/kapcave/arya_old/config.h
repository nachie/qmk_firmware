/*
Copyright 2015 Jun Wako <wakojun@gmail.com>

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

/* USB Device descriptor parameter */
#define VENDOR_ID       0x71C0
#define PRODUCT_ID      0x2008
#define DEVICE_VER      0x0001
#define MANUFACTURER    KapCave
#define PRODUCT         Arya
#define DESCRIPTION     KapCave Arya MacroPad

/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 3

#define MATRIX_COL_PINS { A5, A0, A10 }
#define MATRIX_ROW_PINS { B2, A9, A3, A4 }
#define DIODE_DIRECTION COL2ROW

#define ENCODERS_PAD_A { B10, A15 }
#define ENCODERS_PAD_B { B11, B3 }

//LEDS A6, RGB B15
#define BACKLIGHT_LEVELS 24
#define BACKLIGHT_BREATHING
#define BREATHING_PERIOD 6

/* define if matrix has ghost */
//#define MATRIX_HAS_GHOST


/* Set 0 if debouncing isn't needed */
#define DEBOUNCE    5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

#ifdef QWIIC_MICRO_OLED_ENABLE

#undef I2C_ADDRESS_SA0_1
#define I2C_ADDRESS_SA0_1 0b0111100
#define LCDWIDTH      128
#define LCDHEIGHT     32

#endif

#define WS2812_LED_N 5
#define RGBLED_NUM WS2812_LED_N
#define PORT_WS2812     GPIOB
#define PIN_WS2812      15
#define WS2812_SPI SPID2

#define DYNAMIC_KEYMAP_LAYER_COUNT 4

// EEPROM usage

// TODO: refactor with new user EEPROM code (coming soon)
#define EEPROM_MAGIC 0x451F
#define EEPROM_MAGIC_ADDR 32
// Bump this every time we change what we store
// This will automatically reset the EEPROM with defaults
// and avoid loading invalid data from the EEPROM
#define EEPROM_VERSION 0x01
#define EEPROM_VERSION_ADDR 34

// Dynamic keymap starts after EEPROM version
#define DYNAMIC_KEYMAP_EEPROM_ADDR 35

// Dynamic macro starts after dynamic keymaps (35+(4*6*16*2)) = (35+768) = 803

// I'm also putting my custom stuff after that
// 1 for enabled encoder modes
// 1 for custom backlighting controls
// 1 for OLED default mode
// 6 for 3x custom encoder settings, left, right, and press (18 total)

#define DYNAMIC_KEYMAP_ENABLED_ENCODER_MODES 803
#define DYNAMIC_KEYMAP_CUSTOM_BACKLIGHT 804
#define DYNAMIC_KEYMAP_DEFAULT_OLED 805
#define DYNAMIC_KEYMAP_CUSTOM_ENCODER 806

#define DYNAMIC_KEYMAP_MACRO_EEPROM_ADDR 824
#define DYNAMIC_KEYMAP_MACRO_EEPROM_SIZE 200
#define DYNAMIC_KEYMAP_MACRO_COUNT 16



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
//#define NO_ACTION_MACRO
//#define NO_ACTION_FUNCTION
