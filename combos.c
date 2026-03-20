// Copyright 2026 Hannah Blythe Morrison
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "core_keymap.h"

// Combo for caps word - the two inside thumb keys, which will be mapped onto
// different actual keycodes depending on the layout.

const uint16_t PROGMEM caps_word_combo[] = {KM_BASE_ITHL, KM_BASE_ITHR, COMBO_END};

// Combos for corner keys.

const uint16_t PROGMEM q_combo[]    = {KC_W,    KC_F,    COMBO_END};
const uint16_t PROGMEM b_combo[]    = {KC_F,    KC_P,    COMBO_END};
const uint16_t PROGMEM j_combo[]    = {KC_L,    KC_U,    COMBO_END};
const uint16_t PROGMEM y_combo[]    = {KC_U,    KC_BSPC, COMBO_END};
const uint16_t PROGMEM z_combo[]    = {KC_X,    KC_C,    COMBO_END};
const uint16_t PROGMEM slsh_combo[] = {KC_COMM, KC_DOT,  COMBO_END};

// Combos for corner keys in the symbol layers.

const uint16_t PROGMEM sym_exlm_combo[] = {CK_AT,   KC_HASH, COMBO_END};
const uint16_t PROGMEM sym_perc_combo[] = {KC_HASH, KC_DLR,  COMBO_END};
const uint16_t PROGMEM sym_circ_combo[] = {KC_AMPR, KC_ASTR, COMBO_END};
const uint16_t PROGMEM sym_plus_combo[] = {KC_ASTR, KC_DEL,  COMBO_END};

// Combo definitions.

combo_t key_combos[] = {
  COMBO(caps_word_combo,  CW_TOGG),
  COMBO(q_combo,          KC_Q),
  COMBO(b_combo,          KC_B),
  COMBO(j_combo,          KC_J),
  COMBO(y_combo,          KC_Y),
  COMBO(z_combo,          KC_Z),
  COMBO(slsh_combo,       KC_SLSH),
  COMBO(sym_exlm_combo,   KC_EXLM),
  COMBO(sym_perc_combo,   KC_PERC),
  COMBO(sym_circ_combo,   KC_CIRC),
  COMBO(sym_plus_combo,   KC_PLUS)
};
