#include QMK_KEYBOARD_H
#include "version.h"
#include "keymap_german.h"
#include "keymap_nordic.h"
#include "keymap_french.h"
#include "keymap_spanish.h"
#include "keymap_hungarian.h"
#include "keymap_swedish.h"
#include "keymap_br_abnt2.h"
#include "keymap_canadian_multilingual.h"
#include "keymap_german_ch.h"
#include "keymap_jp.h"
#include "keymap_korean.h"
#include "keymap_bepo.h"
#include "keymap_italian.h"
#include "keymap_slovenian.h"
#include "keymap_lithuanian_azerty.h"
#include "keymap_danish.h"
#include "keymap_norwegian.h"
#include "keymap_portuguese.h"
#include "keymap_contributions.h"
#include "keymap_czech.h"
#include "keymap_romanian.h"
#include "keymap_russian.h"
#include "keymap_uk.h"
#include "keymap_estonian.h"
#include "keymap_belgian.h"
#include "keymap_us_international.h"
#include "keymap_croatian.h"
#include "keymap_turkish_q.h"
#include "keymap_slovak.h"

#define KC_MAC_UNDO LGUI(KC_Z)
#define KC_MAC_CUT LGUI(KC_X)
#define KC_MAC_COPY LGUI(KC_C)
#define KC_MAC_PASTE LGUI(KC_V)
#define KC_PC_UNDO LCTL(KC_Z)
#define KC_PC_CUT LCTL(KC_X)
#define KC_PC_COPY LCTL(KC_C)
#define KC_PC_PASTE LCTL(KC_V)
#define ES_LESS_MAC KC_GRAVE
#define ES_GRTR_MAC LSFT(KC_GRAVE)
#define ES_BSLS_MAC ALGR(KC_6)
#define NO_PIPE_ALT KC_GRAVE
#define NO_BSLS_ALT KC_EQUAL
#define LSA_T(kc) MT(MOD_LSFT | MOD_LALT, kc)
#define BP_NDSH_MAC ALGR(KC_8)
#define SE_SECT_MAC ALGR(KC_6)

enum custom_keycodes {
  RGB_SLD = EZ_SAFE_RANGE,
  HSV_172_255_255,
  HSV_27_255_255,
  HSV_86_255_128,
  HSV_0_255_255,
  HSV_215_255_128,
  ST_MACRO_0,
  ST_MACRO_1,
  ST_MACRO_2,
  ST_MACRO_3,
  ST_MACRO_4,
  ST_MACRO_5,
  ST_MACRO_6,
  ST_MACRO_7,
  ST_MACRO_8,
  ST_MACRO_9,
  ST_MACRO_10,
  ST_MACRO_11,
  ST_MACRO_12,
  ST_MACRO_13,
  ST_MACRO_14,
  ST_MACRO_15,
  ST_MACRO_16,
  ST_MACRO_17,
  ST_MACRO_18,
  ST_MACRO_19,
  ST_MACRO_20,
  ST_MACRO_21,
  ST_MACRO_22,
  ST_MACRO_23,
  ST_MACRO_24,
  ST_MACRO_25,
  ST_MACRO_26,
  ST_MACRO_27,
  ST_MACRO_28,
  ST_MACRO_29,
  ST_MACRO_30,
  ST_MACRO_31,
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_ergodox_pretty(
    KC_GRAVE,       KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_PSCREEN,                                     TT(4),          KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_MINUS,
    KC_EQUAL,       KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_LPRN,                                        KC_RPRN,        KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_BSLASH,
    LALT(KC_A),     KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                                                           KC_H,           KC_J,           KC_K,           KC_L,           KC_SCOLON,      KC_QUOTE,
    KC_LSHIFT,      KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,           ALL_T(KC_HOME),                                 MEH_T(KC_END),  KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_RSHIFT,
    KC_LCTRL,       KC_LALT,        KC_APPLICATION, OSL(3),         KC_LGUI,                                                                                                        MO(2),          KC_LBRACKET,    KC_RBRACKET,    KC_RALT,        KC_RCTRL,
                                                                                                    KC_BSPACE,      KC_DELETE,      TT(1),          KC_RGUI,
                                                                                                                    KC_ENTER,       OSL(3),
                                                                                    KC_SPACE,       KC_TAB,         KC_ESCAPE,      KC_DELETE,      KC_ENTER,       KC_BSPACE
  ),
  [1] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_CALCULATOR,  KC_NUMLOCK,     KC_KP_SLASH,    KC_KP_ASTERISK, KC_KP_MINUS,    KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_LEFT,        KC_KP_7,        KC_KP_8,        KC_KP_9,        KC_KP_PLUS,     KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_RIGHT,       KC_KP_4,        KC_KP_5,        KC_KP_6,        KC_KP_PLUS,     KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_EQUAL,       KC_KP_1,        KC_KP_2,        KC_KP_3,        KC_ENTER,       KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_KP_0,        KC_KP_DOT,      KC_ENTER,       KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_MS_WH_LEFT,  KC_MS_WH_DOWN,  KC_MS_WH_RIGHT, KC_MS_WH_UP,    KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_HOME,        KC_PGDOWN,      KC_PGUP,        KC_END,         KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_F6,                                          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         KC_F12,         KC_TRANSPARENT,
    KC_TRANSPARENT, ST_MACRO_0,     ST_MACRO_1,     ST_MACRO_2,     ST_MACRO_3,     ST_MACRO_4,     ST_MACRO_5,                                     ST_MACRO_16,    ST_MACRO_17,    ST_MACRO_18,    ST_MACRO_19,    ST_MACRO_20,    ST_MACRO_21,    KC_TRANSPARENT,
    KC_TRANSPARENT, ST_MACRO_6,     ST_MACRO_7,     ST_MACRO_8,     ST_MACRO_9,     ST_MACRO_10,                                                                    ST_MACRO_22,    ST_MACRO_23,    ST_MACRO_24,    ST_MACRO_25,    ST_MACRO_26,    KC_TRANSPARENT,
    KC_TRANSPARENT, ST_MACRO_11,    ST_MACRO_12,    ST_MACRO_13,    ST_MACRO_14,    ST_MACRO_15,    TO(0),                                          TO(0),          ST_MACRO_27,    ST_MACRO_28,    ST_MACRO_29,    ST_MACRO_30,    ST_MACRO_31,    KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_INSERT,      TT(5),                                          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_AUDIO_MUTE,  KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,KC_BRIGHTNESS_UP,KC_PAUSE,                                       KC_SCROLLLOCK,  HSV_172_255_255,HSV_27_255_255, HSV_86_255_128, HSV_0_255_255,  HSV_215_255_128,KC_TRANSPARENT,
    KC_CAPSLOCK,    KC_MEDIA_STOP,  KC_MEDIA_PREV_TRACK,KC_MEDIA_PLAY_PAUSE,KC_MEDIA_NEXT_TRACK,KC_BRIGHTNESS_DOWN,                                                                RGB_VAI,        RGB_VAD,        RGB_HUI,        RGB_HUD,        KC_TRANSPARENT, KC_NUMLOCK,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_APPLICATION, KC_TRANSPARENT, WEBUSB_PAIR,                                    KC_PSCREEN,     RGB_MOD,        RGB_SLD,        TOGGLE_LAYER_COLOR,RGB_TOG,        KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(0),                                          TO(0),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, RESET,          KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
};




extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][DRIVER_LED_TOTAL][3] = {
    [0] = { {84,223,138}, {84,223,138}, {84,223,138}, {84,223,138}, {84,223,138}, {84,223,138}, {84,223,138}, {84,223,138}, {84,223,138}, {84,223,138}, {84,223,138}, {84,223,138}, {84,223,138}, {84,223,138}, {84,223,138}, {84,223,138}, {84,223,138}, {84,223,138}, {84,223,138}, {84,223,138}, {84,223,138}, {84,223,138}, {84,223,138}, {84,223,138}, {84,223,138}, {84,223,138}, {84,223,138}, {84,223,138}, {84,223,138}, {84,223,138}, {84,223,138}, {84,223,138}, {84,223,138}, {84,223,138}, {84,223,138}, {84,223,138}, {84,223,138}, {84,223,138}, {84,223,138}, {84,223,138}, {84,223,138}, {84,223,138}, {84,223,138}, {84,223,138}, {84,223,138}, {84,223,138}, {84,223,138}, {84,223,138} },

    [1] = { {127,178,210}, {127,178,210}, {127,178,210}, {127,178,210}, {127,178,210}, {127,178,210}, {127,178,210}, {127,178,210}, {127,178,210}, {127,178,210}, {127,178,210}, {127,178,210}, {127,178,210}, {127,178,210}, {127,178,210}, {127,178,210}, {127,178,210}, {127,178,210}, {127,178,210}, {127,178,210}, {127,178,210}, {127,178,210}, {127,178,210}, {127,178,210}, {127,178,210}, {127,178,210}, {127,178,210}, {127,178,210}, {127,178,210}, {127,178,210}, {127,178,210}, {127,178,210}, {127,178,210}, {127,178,210}, {127,178,210}, {127,178,210}, {127,178,210}, {127,178,210}, {127,178,210}, {127,178,210}, {127,178,210}, {127,178,210}, {127,178,210}, {127,178,210}, {127,178,210}, {127,178,210}, {127,178,210}, {127,178,210} },

    [2] = { {0,239,228}, {0,239,228}, {0,239,228}, {0,239,228}, {0,239,228}, {0,239,228}, {0,239,228}, {0,239,228}, {0,239,228}, {0,239,228}, {0,239,228}, {0,239,228}, {0,239,228}, {0,239,228}, {0,239,228}, {0,239,228}, {0,239,228}, {0,239,228}, {0,239,228}, {0,239,228}, {0,239,228}, {0,239,228}, {0,239,228}, {0,239,228}, {0,239,228}, {0,239,228}, {0,239,228}, {0,239,228}, {0,239,228}, {0,239,228}, {0,239,228}, {0,239,228}, {0,239,228}, {0,239,228}, {0,239,228}, {0,239,228}, {0,239,228}, {0,239,228}, {0,239,228}, {0,239,228}, {0,239,228}, {0,239,228}, {0,239,228}, {0,239,228}, {0,239,228}, {0,239,228}, {0,239,228}, {0,239,228} },

    [3] = { {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255} },

    [4] = { {200,217,142}, {200,217,142}, {200,217,142}, {200,217,142}, {200,217,142}, {200,217,142}, {200,217,142}, {200,217,142}, {200,217,142}, {200,217,142}, {200,217,142}, {200,217,142}, {200,217,142}, {200,217,142}, {200,217,142}, {200,217,142}, {200,217,142}, {200,217,142}, {200,217,142}, {200,217,142}, {200,217,142}, {200,217,142}, {200,217,142}, {200,217,142}, {200,217,142}, {200,217,142}, {200,217,142}, {200,217,142}, {200,217,142}, {200,217,142}, {200,217,142}, {200,217,142}, {200,217,142}, {200,217,142}, {200,217,142}, {200,217,142}, {200,217,142}, {200,217,142}, {200,217,142}, {200,217,142}, {200,217,142}, {200,217,142}, {200,217,142}, {200,217,142}, {200,217,142}, {200,217,142}, {200,217,142}, {200,217,142} },

    [5] = { {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < DRIVER_LED_TOTAL; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

void rgb_matrix_indicators_user(void) {
  if (keyboard_config.disable_layer_led) { return; }
  switch (biton32(layer_state)) {
    case 0:
      set_layer_color(0);
      break;
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
    case 3:
      set_layer_color(3);
      break;
    case 4:
      set_layer_color(4);
      break;
    case 5:
      set_layer_color(5);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_QUOTE)) SS_DELAY(100) SS_LSFT(SS_TAP(X_A)) SS_DELAY(100) SS_TAP(X_Y));
    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_QUOTE)) SS_DELAY(100) SS_LSFT(SS_TAP(X_S)) SS_DELAY(100) SS_TAP(X_Y));
    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_QUOTE)) SS_DELAY(100) SS_LSFT(SS_TAP(X_D)) SS_DELAY(100) SS_TAP(X_Y));
    }
    break;
    case ST_MACRO_3:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_QUOTE)) SS_DELAY(100) SS_LSFT(SS_TAP(X_F)) SS_DELAY(100) SS_TAP(X_Y));
    }
    break;
    case ST_MACRO_4:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_QUOTE)) SS_DELAY(100) SS_LSFT(SS_TAP(X_G)) SS_DELAY(100) SS_TAP(X_Y));
    }
    break;
    case ST_MACRO_5:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_QUOTE)) SS_DELAY(100) SS_LSFT(SS_TAP(X_EQUAL)) SS_DELAY(100) SS_TAP(X_P));
    }
    break;
    case ST_MACRO_6:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_QUOTE)) SS_DELAY(100) SS_TAP(X_A) SS_DELAY(100) SS_TAP(X_P));
    }
    break;
    case ST_MACRO_7:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_QUOTE)) SS_DELAY(100) SS_TAP(X_S) SS_DELAY(100) SS_TAP(X_P));
    }
    break;
    case ST_MACRO_8:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_QUOTE)) SS_DELAY(100) SS_TAP(X_D) SS_DELAY(100) SS_TAP(X_P));
    }
    break;
    case ST_MACRO_9:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_QUOTE)) SS_DELAY(100) SS_TAP(X_F) SS_DELAY(100) SS_TAP(X_P));
    }
    break;
    case ST_MACRO_10:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_QUOTE)) SS_DELAY(100) SS_TAP(X_G) SS_DELAY(100) SS_TAP(X_P));
    }
    break;
    case ST_MACRO_11:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_QUOTE)) SS_DELAY(100) SS_TAP(X_A) SS_DELAY(100) SS_TAP(X_Y));
    }
    break;
    case ST_MACRO_12:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_QUOTE)) SS_DELAY(100) SS_TAP(X_S) SS_DELAY(100) SS_TAP(X_Y));
    }
    break;
    case ST_MACRO_13:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_QUOTE)) SS_DELAY(100) SS_TAP(X_D) SS_DELAY(100) SS_TAP(X_Y));
    }
    break;
    case ST_MACRO_14:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_QUOTE)) SS_DELAY(100) SS_TAP(X_F) SS_DELAY(100) SS_TAP(X_Y));
    }
    break;
    case ST_MACRO_15:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_QUOTE)) SS_DELAY(100) SS_TAP(X_G) SS_DELAY(100) SS_TAP(X_Y));
    }
    break;
    case ST_MACRO_16:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_QUOTE)) SS_DELAY(100) SS_LSFT(SS_TAP(X_EQUAL)) SS_DELAY(100) SS_TAP(X_Y));
    }
    break;
    case ST_MACRO_17:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_F)) SS_DELAY(100) SS_TAP(X_R) SS_DELAY(100) SS_TAP(X_E) SS_DELAY(100) SS_TAP(X_E) SS_DELAY(100) SS_TAP(X_1)  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_18:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_F)) SS_DELAY(100) SS_TAP(X_R) SS_DELAY(100) SS_TAP(X_E) SS_DELAY(100) SS_TAP(X_E) SS_DELAY(100) SS_TAP(X_2)  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_19:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_F)) SS_DELAY(100) SS_TAP(X_R) SS_DELAY(100) SS_TAP(X_E) SS_DELAY(100) SS_TAP(X_E) SS_DELAY(100) SS_TAP(X_3)  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_20:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_F)) SS_DELAY(100) SS_TAP(X_R) SS_DELAY(100) SS_TAP(X_E) SS_DELAY(100) SS_TAP(X_E) SS_DELAY(100) SS_TAP(X_4)  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_21:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_F)) SS_DELAY(100) SS_TAP(X_R) SS_DELAY(100) SS_TAP(X_E) SS_DELAY(100) SS_TAP(X_E) SS_DELAY(100) SS_TAP(X_5)  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_22: // Key: h - Zoom Phone Number -> (508) 270-7299 
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_9)) SS_DELAY(10) SS_TAP(X_5) SS_DELAY(10) SS_TAP(X_0) SS_DELAY(10) SS_TAP(X_8) SS_DELAY(10) SS_LSFT(SS_TAP(X_0)) SS_DELAY(10) SS_TAP(X_SPACE) SS_DELAY(10) SS_TAP(X_2) SS_DELAY(10) SS_TAP(X_7) SS_DELAY(10) SS_TAP(X_0) SS_DELAY(10) SS_TAP(X_MINUS) SS_DELAY(10) SS_TAP(X_7) SS_DELAY(10) SS_TAP(X_2) SS_DELAY(10) SS_TAP(X_9) SS_DELAY(10) SS_TAP(X_9));
      // SEND_STRING(SS_LSFT(SS_TAP(X_Z)) SS_DELAY(100) SS_TAP(X_O) SS_DELAY(100) SS_TAP(X_O) SS_DELAY(100) SS_TAP(X_M) SS_DELAY(100) SS_LSFT(SS_TAP(X_3))  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_23: // Key: j - Radiant Regex -> eg-a-[A-Z]{2}[0-9]{3}
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_E) SS_DELAY(10) SS_TAP(X_G) SS_DELAY(10) SS_TAP(X_MINUS) SS_DELAY(10) SS_TAP(X_A) SS_DELAY(10) SS_TAP(X_MINUS) SS_DELAY(10) SS_TAP(X_LBRACKET) SS_DELAY(10) SS_TAP(X_A) SS_DELAY(10) SS_TAP(X_MINUS) SS_DELAY(10) SS_TAP(X_Z) SS_DELAY(10) SS_TAP(X_RBRACKET) SS_DELAY(10) SS_LSFT(SS_TAP(X_LBRACKET)) SS_DELAY(10) SS_TAP(X_2) SS_DELAY(10) SS_LSFT(SS_TAP(X_RBRACKET)) SS_DELAY(10) SS_TAP(X_MINUS) SS_DELAY(10) SS_TAP(X_LBRACKET) SS_DELAY(10) SS_TAP(X_0) SS_DELAY(10) SS_TAP(X_MINUS) SS_DELAY(10) SS_TAP(X_9) SS_DELAY(10) SS_TAP(X_RBRACKET) SS_DELAY(10) SS_LSFT(SS_TAP(X_LBRACKET)) SS_DELAY(10) SS_TAP(X_3) SS_DELAY(10) SS_LSFT(SS_TAP(X_RBRACKET)));
      // SEND_STRING(SS_LSFT(SS_TAP(X_R)) SS_DELAY(100) SS_TAP(X_E) SS_DELAY(100) SS_TAP(X_G) SS_DELAY(100) SS_LSFT(SS_TAP(X_E)) SS_DELAY(100) SS_LSFT(SS_TAP(X_G))  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_24: // Key: k - CF BOS Regex -> [0-9]{4}-[0-9]{4}
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_LBRACKET) SS_DELAY(10) SS_TAP(X_0) SS_DELAY(10) SS_TAP(X_MINUS) SS_DELAY(10) SS_TAP(X_9) SS_DELAY(10) SS_TAP(X_RBRACKET) SS_DELAY(10) SS_LSFT(SS_TAP(X_LBRACKET)) SS_DELAY(10) SS_TAP(X_4) SS_DELAY(10) SS_LSFT(SS_TAP(X_RBRACKET)) SS_DELAY(10) SS_TAP(X_MINUS) SS_DELAY(10) SS_TAP(X_LBRACKET) SS_DELAY(10) SS_TAP(X_0) SS_DELAY(10) SS_TAP(X_MINUS) SS_DELAY(10) SS_TAP(X_9) SS_DELAY(10) SS_TAP(X_RBRACKET) SS_DELAY(10) SS_LSFT(SS_TAP(X_LBRACKET)) SS_DELAY(10) SS_TAP(X_4) SS_DELAY(10) SS_LSFT(SS_TAP(X_RBRACKET)));
      // SEND_STRING(SS_LSFT(SS_TAP(X_R)) SS_DELAY(100) SS_TAP(X_E) SS_DELAY(100) SS_TAP(X_G) SS_DELAY(100) SS_LSFT(SS_TAP(X_C)) SS_DELAY(100) SS_LSFT(SS_TAP(X_F))  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_25: // Key: l - CF Other Regex -> [0-9]{4}-[0-9] + 5 left arrows
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_LBRACKET) SS_DELAY(10) SS_TAP(X_0) SS_DELAY(10) SS_TAP(X_MINUS) SS_DELAY(10) SS_TAP(X_9) SS_DELAY(10) SS_TAP(X_RBRACKET) SS_DELAY(10) SS_LSFT(SS_TAP(X_LBRACKET)) SS_DELAY(10) SS_TAP(X_4) SS_DELAY(10) SS_LSFT(SS_TAP(X_RBRACKET)) SS_DELAY(10) SS_TAP(X_MINUS) SS_DELAY(10) SS_TAP(X_LBRACKET) SS_DELAY(10) SS_TAP(X_0) SS_DELAY(10) SS_TAP(X_MINUS) SS_DELAY(10) SS_TAP(X_9) SS_DELAY(10) SS_TAP(X_RBRACKET) SS_DELAY(10) SS_TAP(X_LEFT) SS_DELAY(10) SS_TAP(X_LEFT) SS_DELAY(10) SS_TAP(X_LEFT) SS_DELAY(10) SS_TAP(X_LEFT) SS_DELAY(10) SS_TAP(X_LEFT));
      // SEND_STRING(SS_LSFT(SS_TAP(X_R)) SS_DELAY(100) SS_TAP(X_E) SS_DELAY(100) SS_TAP(X_G) SS_DELAY(100) SS_LSFT(SS_TAP(X_C)) SS_DELAY(100) SS_LSFT(SS_TAP(X_O))  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_26: // Key: ; - Tanium Naming Prefix -> EG Americas US - Retail -
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_E)) SS_DELAY(10) SS_LSFT(SS_TAP(X_G)) SS_DELAY(10) SS_TAP(X_SPACE) SS_DELAY(10) SS_LSFT(SS_TAP(X_A)) SS_DELAY(10) SS_TAP(X_M) SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10) SS_TAP(X_R) SS_DELAY(10) SS_TAP(X_I) SS_DELAY(10) SS_TAP(X_C) SS_DELAY(10) SS_TAP(X_A) SS_DELAY(10) SS_TAP(X_S)
     SS_DELAY(10) SS_DELAY(10) SS_TAP(X_SPACE) SS_LSFT(SS_TAP(X_U)) SS_DELAY(10) SS_LSFT(SS_TAP(X_S)) SS_DELAY(10) SS_TAP(X_SPACE) SS_DELAY(10) SS_TAP(X_MINUS) SS_DELAY(10) SS_TAP(X_SPACE) SS_DELAY(10) SS_LSFT(SS_TAP(X_R)) SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10)SS_TAP(X_T)  SS_DELAY(10) SS_TAP(X_A) SS_DELAY(10) SS_TAP(X_I) SS_DELAY(10) SS_TAP(X_L) SS_DELAY(10) SS_TAP(X_SPACE) SS_DELAY(10)SS_TAP(X_MINUS) SS_DELAY(10) SS_TAP(X_SPACE));
      // SEND_STRING(SS_TAP(X_T) SS_DELAY(100) SS_TAP(X_A) SS_DELAY(100) SS_TAP(X_N) SS_DELAY(100) SS_TAP(X_I) SS_DELAY(100) SS_TAP(X_U));
    }
    break;
    case ST_MACRO_27: // Key: N - Work Cell Number -> (508) 439-1764
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_9)) SS_DELAY(10) SS_TAP(X_5) SS_DELAY(10) SS_TAP(X_0) SS_DELAY(10) SS_TAP(X_8) SS_DELAY(10) SS_LSFT(SS_TAP(X_0)) SS_DELAY(10) SS_TAP(X_SPACE) SS_DELAY(10) SS_TAP(X_4) SS_DELAY(10) SS_TAP(X_3) SS_DELAY(10) SS_TAP(X_9) SS_DELAY(10) SS_TAP(X_MINUS) SS_DELAY(10) SS_TAP(X_1) SS_DELAY(10) SS_TAP(X_7) SS_DELAY(10) SS_TAP(X_6) SS_DELAY(10) SS_TAP(X_4));
      // SEND_STRING(SS_LSFT(SS_TAP(X_C)) SS_DELAY(100) SS_TAP(X_E) SS_DELAY(100) SS_TAP(X_L) SS_DELAY(100) SS_TAP(X_L) SS_DELAY(100) SS_LSFT(SS_TAP(X_3))  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_28: // Key: M - My Email -> Michael.diBenedetto@EG-America.com
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_M)) SS_DELAY(10) SS_TAP(X_I) SS_DELAY(10) SS_TAP(X_C) SS_DELAY(10) SS_TAP(X_H) SS_DELAY(10) SS_TAP(X_A) SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10) SS_TAP(X_L) SS_DELAY(10) SS_TAP(X_DOT)
      SS_DELAY(10) SS_TAP(X_D) SS_DELAY(10) SS_TAP(X_I) SS_DELAY(10) SS_LSFT(SS_TAP(X_B)) SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10) SS_TAP(X_N) SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10) SS_TAP(X_D) SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10) SS_TAP(X_T) SS_DELAY(10) SS_TAP(X_T) SS_DELAY(10) SS_TAP(X_O) SS_DELAY(10)
      SS_LSFT(SS_TAP(X_2)) SS_DELAY(10) SS_LSFT(SS_TAP(X_E)) SS_DELAY(10) SS_LSFT(SS_TAP(X_G)) SS_DELAY(10) SS_TAP(X_MINUS) SS_DELAY(10) SS_LSFT(SS_TAP(X_A)) SS_DELAY(10) SS_TAP(X_M) SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10) SS_TAP(X_R) SS_DELAY(10) SS_TAP(X_I) SS_DELAY(10) SS_TAP(X_C) SS_DELAY(10) SS_TAP(X_A) SS_DELAY(10) SS_TAP(X_DOT) SS_DELAY(10) SS_TAP(X_C) SS_DELAY(10) SS_TAP(X_O) SS_DELAY(10) SS_TAP(X_M));
      //SEND_STRING(SS_TAP(X_M) SS_DELAY(100) SS_TAP(X_Y) SS_DELAY(100) SS_TAP(X_SPACE) SS_DELAY(100) SS_TAP(X_E) SS_DELAY(100) SS_TAP(X_M)  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_29: // Key: , - Escalations Email -> EGA-EscalationsSupport@EG-America.com
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_E)) SS_DELAY(10) SS_LSFT(SS_TAP(X_G)) SS_DELAY(10) SS_LSFT(SS_TAP(X_A)) SS_DELAY(10) SS_TAP(X_MINUS) SS_DELAY(10) 
      SS_LSFT(SS_TAP(X_E)) SS_DELAY(10) SS_TAP(X_S) SS_DELAY(10) SS_TAP(X_C) SS_DELAY(10) SS_TAP(X_A) SS_DELAY(10) SS_TAP(X_L) SS_DELAY(10) SS_TAP(X_A) SS_DELAY(10) SS_TAP(X_T) SS_DELAY(10) SS_TAP(X_I) SS_DELAY(10) SS_TAP(X_O) SS_DELAY(10) SS_TAP(X_N) SS_DELAY(10) SS_LSFT(SS_TAP(X_S)) SS_DELAY(10) SS_TAP(X_U) SS_DELAY(10) SS_TAP(X_P) SS_DELAY(10) SS_TAP(X_P) SS_DELAY(10) SS_TAP(X_O) SS_DELAY(10) SS_TAP(X_R) SS_DELAY(10) SS_TAP(X_T)
      SS_LSFT(SS_TAP(X_2)) SS_DELAY(10) SS_LSFT(SS_TAP(X_E)) SS_DELAY(10) SS_LSFT(SS_TAP(X_G)) SS_DELAY(10) SS_TAP(X_MINUS) SS_DELAY(10) SS_LSFT(SS_TAP(X_A)) SS_DELAY(10) SS_TAP(X_M) SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10) SS_TAP(X_R) SS_DELAY(10) SS_TAP(X_I) SS_DELAY(10) SS_TAP(X_C) SS_DELAY(10) SS_TAP(X_A) SS_DELAY(10) SS_TAP(X_DOT) SS_DELAY(10) SS_TAP(X_C) SS_DELAY(10) SS_TAP(X_O) SS_DELAY(10) SS_TAP(X_M));
      //SEND_STRING(SS_TAP(X_E) SS_DELAY(100) SS_TAP(X_S) SS_DELAY(100) SS_TAP(X_SPACE) SS_DELAY(100) SS_TAP(X_E) SS_DELAY(100) SS_TAP(X_M)  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_30: // Key: . - Coordinator Email -> EGA-ITCoordinators@EG-America.com
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_E)) SS_DELAY(10) SS_LSFT(SS_TAP(X_G)) SS_DELAY(10) SS_LSFT(SS_TAP(X_A)) SS_DELAY(10) SS_TAP(X_MINUS)
      SS_LSFT(SS_TAP(X_I)) SS_DELAY(10) SS_LSFT(SS_TAP(X_T)) SS_DELAY(10) SS_LSFT(SS_TAP(X_C)) SS_DELAY(10) SS_TAP(X_O) SS_DELAY(10) SS_TAP(X_O) SS_DELAY(10) SS_TAP(X_R) SS_DELAY(10) SS_TAP(X_D) SS_DELAY(10) SS_TAP(X_I) SS_DELAY(10) SS_TAP(X_N) SS_DELAY(10) SS_TAP(X_A) SS_DELAY(10) SS_TAP(X_T) SS_DELAY(10) SS_TAP(X_O) SS_DELAY(10) SS_TAP(X_R) SS_DELAY(10) SS_TAP(X_S)
      SS_LSFT(SS_TAP(X_2)) SS_DELAY(10) SS_LSFT(SS_TAP(X_E)) SS_DELAY(10) SS_LSFT(SS_TAP(X_G)) SS_DELAY(10) SS_TAP(X_MINUS) SS_DELAY(10) SS_LSFT(SS_TAP(X_A)) SS_DELAY(10) SS_TAP(X_M) SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10) SS_TAP(X_R) SS_DELAY(10) SS_TAP(X_I) SS_DELAY(10) SS_TAP(X_C) SS_DELAY(10) SS_TAP(X_A) SS_DELAY(10) SS_TAP(X_DOT) SS_DELAY(10) SS_TAP(X_C) SS_DELAY(10) SS_TAP(X_O) SS_DELAY(10) SS_TAP(X_M));

      // SEND_STRING(SS_TAP(X_C) SS_DELAY(100) SS_TAP(X_O) SS_DELAY(100) SS_TAP(X_SPACE) SS_DELAY(100) SS_TAP(X_E) SS_DELAY(100) SS_TAP(X_M)  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_31: // Key: / - Helpdesk Email -> EGA-Helpdesk@EG-America.com
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_E)) SS_DELAY(10) SS_LSFT(SS_TAP(X_G)) SS_DELAY(10) SS_LSFT(SS_TAP(X_A)) SS_DELAY(10) SS_TAP(X_MINUS) SS_DELAY(10)
      SS_LSFT(SS_TAP(X_H)) SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10) SS_TAP(X_L) SS_DELAY(10) SS_TAP(X_P) SS_DELAY(10) SS_TAP(X_D) SS_DELAY(10) SS_TAP(X_E)SS_DELAY(10) SS_TAP(X_S) SS_DELAY(10) SS_TAP(X_K)
      SS_LSFT(SS_TAP(X_2)) SS_DELAY(10) SS_LSFT(SS_TAP(X_E)) SS_DELAY(10) SS_LSFT(SS_TAP(X_G)) SS_DELAY(10) SS_TAP(X_MINUS) SS_DELAY(10) SS_LSFT(SS_TAP(X_A)) SS_DELAY(10) SS_TAP(X_M) SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10) SS_TAP(X_R) SS_DELAY(10) SS_TAP(X_I) SS_DELAY(10) SS_TAP(X_C) SS_DELAY(10) SS_TAP(X_A) SS_DELAY(10) SS_TAP(X_DOT) SS_DELAY(10) SS_TAP(X_C) SS_DELAY(10) SS_TAP(X_O) SS_DELAY(10) SS_TAP(X_M));

      // SEND_STRING(SS_TAP(X_H) SS_DELAY(100) SS_TAP(X_D) SS_DELAY(100) SS_TAP(X_SPACE) SS_DELAY(100) SS_TAP(X_E) SS_DELAY(100) SS_TAP(X_M)  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;

    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
    case HSV_172_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(172,255,255);
      }
      return false;
    case HSV_27_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(27,255,255);
      }
      return false;
    case HSV_86_255_128:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(86,255,128);
      }
      return false;
    case HSV_0_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(0,255,255);
      }
      return false;
    case HSV_215_255_128:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(215,255,128);
      }
      return false;
  }
  return true;
}

uint8_t layer_state_set_user(uint8_t state) {
    uint8_t layer = biton(state);
  ergodox_board_led_off();
  ergodox_right_led_1_off();
  ergodox_right_led_2_off();
  ergodox_right_led_3_off();
  switch (layer) {
    case 1:
      ergodox_right_led_1_on();
      break;
    case 2:
      ergodox_right_led_2_on();
      break;
    case 3:
      ergodox_right_led_3_on();
      break;
    case 4:
      ergodox_right_led_1_on();
      ergodox_right_led_2_on();
      break;
    case 5:
      ergodox_right_led_1_on();
      ergodox_right_led_3_on();
      break;
    case 6:
      ergodox_right_led_2_on();
      ergodox_right_led_3_on();
      break;
    case 7:
      ergodox_right_led_1_on();
      ergodox_right_led_2_on();
      ergodox_right_led_3_on();
      break;
    default:
      break;
  }
  return state;
};



