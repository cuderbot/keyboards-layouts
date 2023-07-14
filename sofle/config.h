/* Copyright 2022 Khoa Truong <foureight84@gmail.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
 
#pragma once

#define EE_HANDS

/* clear default encoder def */
#undef TAP_CODE_DELAY

/* encoder support */
#define TAP_CODE_DELAY 100

/* split features */
#define SPLIT_WPM_ENABLE
#define SPLIT_OLED_ENABLE

/* trackball support */
#define POINTING_DEVICE_ROTATION_90
#define SPLIT_POINTING_ENABLE
#define POINTING_DEVICE_RIGHT
#define POINTING_DEVICE_TASK_THROTTLE_MS 8

/* RGB setup */
#define RGBLIGHT_SLEEP // permite apagar los leds si el dispositivo se va suspender.
#define RGBLIGHT_LAYERS // permite configurar un color para cada capa.

/* ws2812 RGB LED */
#define RGB_DI_PIN D3 // el pin conectado a los datos del led.

/* RGB lights effects */
#ifdef RGB_MATRIX_ENABLE
	#define RGBLED_NUM 35    // Number of LEDs
	#define RGBLED_NUM 35    // Number of LEDs
	#define RGB_MATRIX_LED_COUNT RGBLED_NUM
#endif

#ifdef RGBLIGHT_ENABLE
    #undef RGBLED_NUM

	//#define RGBLIGHT_EFFECT_BREATHING
	#define RGBLIGHT_EFFECT_RAINBOW_MOOD
	//#define RGBLIGHT_EFFECT_RAINBOW_SWIRL
	//#define RGBLIGHT_EFFECT_SNAKE
	//#define RGBLIGHT_EFFECT_KNIGHT
	//#define RGBLIGHT_EFFECT_CHRISTMAS
	//#define RGBLIGHT_EFFECT_STATIC_GRADIENT
	//#define RGBLIGHT_EFFECT_RGB_TEST
	//#define RGBLIGHT_EFFECT_ALTERNATING
	//#define RGBLIGHT_EFFECT_TWINKLE

    #define RGBLED_NUM 70
	//#define RGBLED_SPLIT
	#define RGBLED_SPLIT { 35, 35 } // haven't figured out how to use this yet

	//#define RGBLED_NUM 30
    #define RGBLIGHT_LIMIT_VAL 120
    #define RGBLIGHT_HUE_STEP 10
    #define RGBLIGHT_SAT_STEP 17
    #define RGBLIGHT_VAL_STEP 17
#endif

#ifdef RGB_MATRIX_ENABLE
	#define RGB_MATRIX_KEYPRESSES // se supone que reacciona cuando escribo, pero, se ve raro.
	//#define RGB_MATRIX_KEYRELEASES // se supone que reacciona cuando escribo (pero contrario al de arriba, es cuando suelto la tecla), pero, se ve raro.
	#define RGB_DISABLE_WHEN_USB_SUSPENDED // apaga los efectos cuando esta suspendido.
	#define RGB_MATRIX_FRAMEBUFFER_EFFECTS
	//#define RGB_MATRIX_LED_PROCESS_LIMIT (RGB_MATRIX_LED_COUNT + 4) / 5 // limits the number of LEDs to process in an animation per task run (increases keyboard responsiveness)
	//#define RGB_MATRIX_LED_FLUSH_LIMIT 16 // limits in milliseconds how frequently an animation will update the LEDs. 16 (16ms) is equivalent to limiting to 60fps (increases keyboard responsiveness)
	#define RGB_MATRIX_MAXIMUM_BRIGHTNESS 150 // limita el brillo maximo de los led a 150 por debajo de 255. Valores mas alla provoca que el controlador crashee.

	#define RGB_MATRIX_DEFAULT_MODE RGBLIGHT_MODE_STATIC_LIGHT // efecto rgb por defecto.

	#define RGB_MATRIX_HUE_STEP 8 // el numero de etapas para reiniciar el ciclo de colores.
	#define RGB_MATRIX_SAT_STEP 8 // el numero de etapas para incrementar la saturacion. 
	#define RGB_MATRIX_VAL_STEP 8 // el numero de etapas para reiniciar el brillo. 
	#define RGB_MATRIX_SPD_STEP 10 // el numero de velocidad para limpiar la EEPROM.

/* Disable the animations you don't want/need.  You will need to disable a good number of these    *
 * because they take up a lot of space.  Disable until you can successfully compile your firmware. */
 //#undef ENABLE_RGB_MATRIX_ALPHAS_MODS
 //#undef ENABLE_RGB_MATRIX_GRADIENT_UP_DOWN
 //#undef ENABLE_RGB_MATRIX_BREATHING
 //#undef ENABLE_RGB_MATRIX_CYCLE_ALL
 //#undef ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT
 //#undef ENABLE_RGB_MATRIX_CYCLE_UP_DOWN
 //#undef ENABLE_RGB_MATRIX_CYCLE_OUT_IN
 //#undef ENABLE_RGB_MATRIX_CYCLE_OUT_IN_DUAL
 //#undef ENABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON
 //#undef ENABLE_RGB_MATRIX_DUAL_BEACON
 //#undef ENABLE_RGB_MATRIX_RAINBOW_BEACON
 //#undef ENABLE_RGB_MATRIX_RAINBOW_PINWHEELS
 //#undef ENABLE_RGB_MATRIX_RAINDROPS
 //#undef ENABLE_RGB_MATRIX_JELLYBEAN_RAINDROPS	
 //#undef ENABLE_RGB_MATRIX_TYPING_HEATMAP
 //#undef ENABLE_RGB_MATRIX_DIGITAL_RAIN
 //#undef ENABLE_RGB_MATRIX_SOLID_REACTIVE
 //#undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE
 //#undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE
 //#undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE
 //#undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_CROSS
 //#undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTICROSS
 //#undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS
 //#undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS
 //#undef ENABLE_RGB_MATRIX_SPLASH
 //#undef ENABLE_RGB_MATRIX_MULTISPLASH
 //#undef ENABLE_RGB_MATRIX_SOLID_SPLASH
 //#undef ENABLE_RGB_MATRIX_SOLID_MULTISPLASH
#endif