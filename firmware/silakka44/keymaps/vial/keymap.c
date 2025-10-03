// Copyright 2024 Squalius-cephalus (@Squalius-cephalus)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * Edit this
     */
    [0] = LAYOUT_ortho_4x12(
        KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BACKSPACE,
        KC_LCTL,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,    KC_QUOT,
        KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM,    KC_DOT,    KC_SLSH,    KC_ENT,
        KC_RALT,       KC_LALT,    KC_LGUI,    KC_SPACE,    KC_NO,    KC_NO,    KC_A,    KC_B,    KC_C,    KC_D,    KC_NO,    KC_NO
    ),
        [1] = LAYOUT_ortho_4x12(
        KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BACKSPACE,
        KC_LCTL,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,    KC_QUOT,
        KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM,    KC_DOT,    KC_SLSH,    KC_ENT,
        KC_RALT,       KC_LALT,    KC_LGUI,    KC_SPACE,    KC_NO,    KC_NO,    KC_A,    KC_B,    KC_C,    KC_D,    KC_NO,    KC_NO
    ),
        [2] = LAYOUT_ortho_4x12(
        KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BACKSPACE,
        KC_LCTL,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,    KC_QUOT,
        KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM,    KC_DOT,    KC_SLSH,    KC_ENT,
        KC_RALT,       KC_LALT,    KC_LGUI,    KC_SPACE,    KC_NO,    KC_NO,    KC_A,    KC_B,    KC_C,    KC_D,    KC_NO,    KC_NO
        ),
            [3] = LAYOUT_ortho_4x12(
        KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BACKSPACE,
        KC_LCTL,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,    KC_QUOT,
        KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM,    KC_DOT,    KC_SLSH,    KC_ENT,
        KC_RALT,       KC_LALT,    KC_LGUI,    KC_SPACE,    KC_NO,    KC_NO,    KC_A,    KC_B,    KC_C,    KC_D,    KC_NO,    KC_NO
    )




};



#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] =   { ENCODER_CCW_CW(KC_MS_WH_UP, KC_MS_WH_DOWN), ENCODER_CCW_CW(KC_VOLD, KC_VOLU)  },
    [1] =   { ENCODER_CCW_CW(KC_MS_WH_UP, KC_MS_WH_DOWN),           ENCODER_CCW_CW(KC_VOLD, KC_VOLU)  },
    [2] =   { ENCODER_CCW_CW(KC_MS_WH_UP, KC_MS_WH_DOWN),           ENCODER_CCW_CW(KC_VOLD, KC_VOLU)  },
    [3] =   { ENCODER_CCW_CW(KC_MS_WH_UP, KC_MS_WH_DOWN),          ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    //                  Encoder 1                                     Encoder 2
};
#endif
