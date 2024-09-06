/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

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

#include QMK_KEYBOARD_H

enum custom_keycodes {
    M0 = SAFE_RANGE,
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,  KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                         KC_H,    KC_J,    KC_K,    KC_L,  KC_SCLN, KC_LBRC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL, LGUI_T(KC_Z),LALT_T(KC_X),KC_C,KC_V,KC_B,                            KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,  KC_ESC,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          LT(4, KC_CAPS),   MO(1),  KC_SPC,     KC_ENT,   MO(2), KC_RALT
                                      //`--------------------------'  `--------------------------'

  ),

    [1] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_TAB,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                         KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_DEL,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT, KC_NUBS, XXXXXXX, LSFT(KC_NUBS), XXXXXXX, XXXXXXX,                      XXXXXXX, KC_UP, XXXXXXX,  XXXXXXX, XXXXXXX, KC_PGUP,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL, KC_LGUI, KC_LALT, XXXXXXX, LSFT(KC_LGUI), XXXXXXX,                KC_LEFT, KC_DOWN, KC_RIGHT, XXXXXXX, XXXXXXX, KC_PGDN,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LALT, _______,  KC_LGUI,     KC_ENT,   MO(3), KC_RALT
                                      //`--------------------------'  `--------------------------'
  ),

    [2] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_TAB, KC_F1,   KC_F2, KC_F3,  KC_F4, KC_F5,                            KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_GRV,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT, KC_F11, KC_F12, XXXXXXX, XXXXXXX, XXXXXXX,                      KC_MINS,  KC_EQL, KC_QUOT, KC_RBRC, KC_BSLS,  KC_HOME,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      KC_UNDS, KC_PLUS, KC_DQUO, KC_RCBR, KC_PIPE, KC_END,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LALT,   MO(3),  KC_SPC,     KC_ENT, _______, MO(4)
                                      //`--------------------------'  `--------------------------'
  ),

    [3] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
        RGB_TOG, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      KC_SLEP, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      RGB_RMOD, RGB_HUI, RGB_SAI, RGB_VAI, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_NUM, KC_SCRL,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LALT, _______,  KC_SPC,     KC_ENT, _______, KC_RALT
                                      //`--------------------------'  `--------------------------'
  ),
    [4] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_TAB, LSFT (KC_8), LSFT (KC_7), LSFT (KC_9), KC_DEL, KC_BSPC,          XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_PSCR,
  //|--------+--------+--------+--------+--------+--------|                    |------  --+--------+--------+--------+--------+--------|
      KC_LSFT, KC_QUOT, LSFT(KC_3), KC_NUHS, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  KC_INSERT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL, LSFT(KC_QUOT), XXXXXXX, LSFT(KC_NUHS), M0, RGUI(KC_6),          KC_MPRV, KC_MPLY, KC_MNXT, LSG(KC_LEFT), LSG(KC_RIGHT), KC_DELETE,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI,   MO(2),  KC_SPC,    _______, MO(1), KC_RALT
                                      //`--------------------------'  `--------------------------'
  )
};

// Macros //

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case M0:
        if (record->event.pressed) {
        // Right Click autohotkey
            register_code(KC_LCTL);
            register_code(KC_RALT);
            tap_code(KC_KP_1);
            unregister_code(KC_LCTL);
            unregister_code(KC_RALT);
            _delay_ms(200);
            tap_code(KC_I);
            _delay_ms(200);
            register_code(KC_LCTL);
            tap_code(KC_W);
            _delay_ms(200);
            tap_code(KC_PGDN);
            unregister_code(KC_LCTL);
            return false;
        }
        break;
  }
  return true;
}
// Macros //

// Combos //
const uint16_t PROGMEM F1_COMBO[] = {KC_TAB, KC_Q, COMBO_END};
const uint16_t PROGMEM F2_COMBO[] = {KC_TAB, KC_W, COMBO_END};
const uint16_t PROGMEM F3_COMBO[] = {KC_TAB, KC_E, COMBO_END};
const uint16_t PROGMEM F4_COMBO[] = {KC_TAB, KC_R, COMBO_END};
const uint16_t PROGMEM F5_COMBO[] = {KC_TAB, KC_T, COMBO_END};
const uint16_t PROGMEM F6_COMBO[] = {KC_BSPC, KC_Y, COMBO_END};
const uint16_t PROGMEM F7_COMBO[] = {KC_BSPC, KC_U, COMBO_END};
const uint16_t PROGMEM F8_COMBO[] = {KC_BSPC, KC_I, COMBO_END};
const uint16_t PROGMEM F9_COMBO[] = {KC_BSPC, KC_O, COMBO_END};
const uint16_t PROGMEM F10_COMBO[] = {KC_BSPC, KC_P, COMBO_END};
const uint16_t PROGMEM F11_COMBO[] = {KC_H, KC_J, COMBO_END};
const uint16_t PROGMEM F12_COMBO[] = {KC_K, KC_L, COMBO_END};
const uint16_t PROGMEM ESC[] = {KC_LSFT, KC_TAB, COMBO_END};
const uint16_t PROGMEM DEL[] = {KC_BSPC, KC_LBRC, COMBO_END};


combo_t key_combos[] = {
    COMBO(F1_COMBO, KC_F1),
    COMBO(F2_COMBO, KC_F2),
    COMBO(F3_COMBO, KC_F3),
    COMBO(F4_COMBO, KC_F4),
    COMBO(F5_COMBO, KC_F5),
    COMBO(F6_COMBO, KC_F6),
    COMBO(F7_COMBO, KC_F7),
    COMBO(F8_COMBO, KC_F8),
    COMBO(F9_COMBO, KC_F9),
    COMBO(F10_COMBO, KC_F10),
    COMBO(F11_COMBO, KC_F11),
    COMBO(F12_COMBO, KC_F12),
    COMBO(ESC, KC_ESC),
    COMBO(DEL, KC_DEL)

};
// Combos //


// rgb light layers
const rgblight_segment_t PROGMEM caps_lock_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {21, 1, HSV_RED},
    {26, 2, HSV_RED},
    {0, 6, HSV_WHITE}
);

const rgblight_segment_t PROGMEM left_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 7, HSV_MAGENTA},
    {13, 2, HSV_MAGENTA}
);

const rgblight_segment_t PROGMEM right_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 7, HSV_SPRINGGREEN},
    {13, 2, HSV_SPRINGGREEN}
);

const rgblight_segment_t PROGMEM adjust_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 7, HSV_GOLDENROD},
    {13, 2, HSV_GOLDENROD}
);

const rgblight_segment_t PROGMEM extra_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 7, HSV_CORAL},
    {13, 2, HSV_CORAL},
    {15, 9, HSV_CORAL}
);

const rgblight_segment_t* const PROGMEM rgb_layers[] = RGBLIGHT_LAYERS_LIST(
    caps_lock_layer,
    left_layer,
    right_layer,
    adjust_layer,
    extra_layer
);

void keyboard_post_init_user(void) {
    rgblight_layers = rgb_layers;
}

bool led_update_user(led_t led_state) {
    rgblight_set_layer_state(0, led_state.caps_lock);
    return true;
}

layer_state_t layer_state_set_user(layer_state_t state) {
    rgblight_set_layer_state(1, layer_state_cmp(state, 1));
    rgblight_set_layer_state(2, layer_state_cmp(state, 2));
    rgblight_set_layer_state(3, layer_state_cmp(state, 3));
    rgblight_set_layer_state(4, layer_state_cmp(state, 4));
    return state;
}
// rgb light layers

// OLED ENABLE

#ifdef OLED_ENABLE
#include <stdio.h>

#define L_BASE 0
#define L_LOWER 2
#define L_RAISE 4
#define L_ADJUST 8
#define L_EXTRA_LAYER 16

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  if (!is_keyboard_master()) {
    return OLED_ROTATION_270;  // flips the display 180 degrees if offhand
  }
  return rotation;
}

void oled_render_layer_state(void) {
    switch (layer_state) {
        case L_BASE:
            oled_write_ln_P(PSTR(">_"), false);
            break;
        case L_LOWER:
            oled_write_ln_P(PSTR(">LEFT_LAYER"), false);
            break;
        case L_RAISE:
            oled_write_ln_P(PSTR(">RIGHT_LAYER"), false);
            break;
        case L_EXTRA_LAYER:
        case L_EXTRA_LAYER|L_RAISE:
            oled_write_ln_P(PSTR(">EXTRA_LAYER"), false);
            break;
        case L_ADJUST:
        case L_ADJUST|L_LOWER:
        case L_ADJUST|L_RAISE:
        case L_ADJUST|L_LOWER|L_RAISE:
            oled_write_ln_P(PSTR(">ADJUST_LAYER"), false);
            break;
        default:
            oled_write_ln_P(">UNKNOWN_LAYER", false);
    }
}


bool oled_task_user(void) {
    if (is_keyboard_master()) {
        oled_render_layer_state();
        led_t led_state = host_keyboard_led_state();
        oled_write_P(led_state.caps_lock ? PSTR("CAPS ") : PSTR("    "), false);
        oled_write_P(led_state.num_lock ? PSTR("    ") : PSTR("NOT NUM "), false);
        oled_write_P(led_state.scroll_lock ? PSTR("SCROLL ") : PSTR("    "), false);
        oled_set_cursor(0,3);
        oled_write_P(PSTR("WPM:"), false);
        char wpm_str[4];
        snprintf(wpm_str, sizeof(wpm_str), "%03d", get_current_wpm());
        oled_write(wpm_str, false);
    } else {
        oled_write_ln_P(PSTR("WRONGWRONGWRONGWRONGWRONGWRONGWRONGWRONGWRONGWRONGWRONGWRONGWRONGWRONGWRONG"), false);
    }
    return false;
}
#endif // OLED_ENABLE
