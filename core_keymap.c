#include "core_keymap.h"
#include "custom_keys.h"

// Keymap.

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [LAYER_BASE] = LAYOUT(
        KC_W, KC_F,   KC_P,    KC_B,    KC_J,    KC_L,    KC_U,    KC_Y,
  KC_A, KC_R, LT_NAV, LT_RSYM, KC_G,    KC_M,    LT_LSYM, LT_NUM,  KC_I,   KC_O,
        KC_X, KC_C,   KC_D,                      KC_H,    KC_COMM, KC_DOT,
                      KC_NO,   LT_REXT, LT_LEXT, KC_NO
  ),
  [LAYER_LEXT] = LAYOUT(
         KC_Q, CK_OPQA,   KC_B,  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  KC_NO, KC_A, KC_TAB, KC_G,  KC_NO,   KC_NO,   KC_TRNS, KC_TRNS, KC_NO, KC_NO,
         KC_Z, KC_TAB, KC_V,                    KC_NO,   KC_NO,   KC_NO,
                       KC_NO, CW_TOGG, KC_TRNS, KC_NO
  ),
  [LAYER_REXT] = LAYOUT(
         KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_J, CK_OPAT,   KC_BSPC,
  KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_NO,   KC_NO,   KC_M, KC_ESC, KC_O,    KC_NO,
         KC_NO, KC_NO,   KC_NO,                     KC_K, CK_VCMD, KC_SLSH,
                         KC_NO,   KC_TRNS, CW_TOGG, KC_NO
  ),
  [LAYER_LSYM] = LAYOUT(
         KC_EXLM, CK_AT,   KC_DLR,  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  KC_NO, CK_TILD, KC_LPRN, KC_LCBR, KC_NO,   KC_NO,   KC_TRNS, KC_TRNS, KC_NO, KC_NO,
         CK_GRV,  KC_LPRN, KC_RCBR,                   KC_NO,   KC_NO,   KC_NO,
                           KC_NO,   KC_TRNS, KC_TRNS, KC_NO
  ),
  [LAYER_LSYM_EXT] = LAYOUT(
         KC_GRV, KC_HASH, KC_PERC, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  KC_NO, KC_NO,  KC_NO,   KC_LBRC, KC_NO,   KC_NO,   KC_TRNS, KC_TRNS, KC_NO, KC_NO,
         KC_NO,  KC_NO,   KC_RBRC,                   KC_NO,   KC_NO,   KC_NO,
                          KC_NO,   KC_TRNS, KC_TRNS, KC_NO
  ),
  [LAYER_RSYM] = LAYOUT(
         KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_AMPR, KC_ASTR, KC_DEL,
  KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_NO,   KC_NO,   KC_COLN, CK_DQUO, CK_PIPE, KC_NO,
         KC_NO, KC_NO,   KC_NO,                     KC_SCLN, KC_QUOT, CK_BSLS,
                         KC_NO,   KC_TRNS, KC_TRNS, KC_NO
  ),
  [LAYER_RSYM_EXT] = LAYOUT(
         KC_NO, KC_NO,   KC_NO,   KC_NO, KC_NO,   KC_CIRC, KC_UNDS, KC_PLUS,
  KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_NO, KC_NO,   KC_NO,   KC_MINS, KC_EQL,  KC_NO,
         KC_NO, KC_NO,   KC_NO,                   KC_NO,   KC_NO,   KC_NO,
                         KC_NO, KC_TRNS, KC_TRNS, KC_NO
  ),
  [LAYER_NUM] = LAYOUT(
         KC_1, KC_2, KC_3,  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  KC_NO, KC_4, KC_5, KC_6,  KC_NO,   KC_NO,   KC_TRNS, KC_TRNS, KC_NO, KC_NO,
         KC_7, KC_8, KC_9,                    KC_NO,   KC_NO,   KC_NO,
                     KC_NO, KC_TRNS, KC_TRNS, KC_NO
  ),
  [LAYER_NUM_EXT] = LAYOUT(
         KC_NO,   KC_NO,  KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  KC_NO, KC_SLSH, KC_DOT, KC_0,  KC_NO,   KC_NO,   KC_TRNS, KC_TRNS, KC_NO, KC_NO,
         KC_NO,   KC_NO,  KC_NO,                   KC_NO,   KC_NO,   KC_NO,
                          KC_NO, KC_TRNS, KC_TRNS, KC_NO
  ),
  [LAYER_NAV] = LAYOUT(
         KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   WS_PTAB,    KC_UP,   WS_NTAB,
  KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_NO,   KC_NO,   KC_LEFT, KC_DOWN, KC_RIGHT, KC_NO,
         KC_NO, KC_NO,   KC_NO,                     WS_PWIN, CK_SSHS,   WS_NWIN,
                         KC_NO,   KC_TRNS, KC_TRNS, KC_NO
  ),
  [LAYER_NAV_EXT] = LAYOUT(
         KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   WS_PDSK,    KC_PGUP, WS_NDSK,
  KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_NO,   KC_NO,   KC_HOME, KC_PGDN, KC_END, KC_NO,
         KC_NO, KC_NO,   KC_NO,                     KC_NO,   KC_NO,   KC_NO,
                         KC_NO,   KC_TRNS, KC_TRNS, KC_NO
  ),
  [LAYER_FUNC] = LAYOUT(
         KC_F1, KC_F2, KC_F3, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  KC_NO, KC_F4, KC_F5, KC_F6, KC_NO,   KC_NO,   KC_TRNS, KC_TRNS, KC_NO, KC_NO,
         KC_F7, KC_F8, KC_F9,                   KC_NO,   KC_NO,   KC_NO,
                       KC_NO, KC_TRNS, KC_TRNS, KC_NO
  ),
  [LAYER_FUNC_EXT] = LAYOUT(
         KC_NO,  KC_NO,  KC_NO,  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  KC_NO, KC_F10, KC_F11, KC_F12, KC_NO,   KC_NO,   KC_TRNS, KC_TRNS, KC_NO, KC_NO,
         KC_NO,  KC_NO,  KC_NO,                    KC_NO,   KC_NO,   KC_NO,
                         KC_NO,  KC_TRNS, KC_TRNS, KC_NO
  ),
  [LAYER_CTLS] = LAYOUT(
         KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_MUTE, KC_MPLY, KC_PSCR,
  KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_NO,   KC_NO,   KC_VOLU, KC_MNXT, KC_BRIU, KC_NO,
         KC_NO, KC_NO,   KC_NO,                     KC_VOLD, KC_MPRV, KC_BRID,
                         KC_NO,   KC_TRNS, KC_TRNS, KC_NO
  ),
};
