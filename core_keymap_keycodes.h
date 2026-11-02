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

#pragma once

// Layer-tap keycodes.

#define LT_A LT(LAYER_RSYM, KC_A)
#define LT_O LT(LAYER_LSYM, KC_O)

#define LT_SPC LT(LAYER_NAV, KC_SPC)
#define LT_ENT LT(LAYER_NUM, KC_ENT)

// Mod-tap keycodes.

#define MT_R MT(MOD_LGUI, KC_R)
#define MT_S MT(MOD_LALT, KC_S)
#define MT_T MT(MOD_LCTL, KC_T)

#define MT_N MT(MOD_LCTL, KC_N)
#define MT_I MT(MOD_LALT, KC_E)
#define MT_E MT(MOD_LGUI, KC_I)

#define MT_TAB MT(MOD_LSFT, KC_TAB)
#define MT_ESC MT(MOD_LSFT, KC_ESC)

// Base layer rows.

#define KM_BASE_TL KC_W, KC_F, KC_P
#define KM_BASE_ML MT_R, MT_S, MT_T
#define KM_BASE_BL KC_X, KC_C, KC_D

#define KM_BASE_TR KC_L, KC_U,    KC_BSPC
#define KM_BASE_MR MT_N, MT_E,    MT_I
#define KM_BASE_BR KC_H, KC_COMM, KC_DOT

// Base layer thumb keys.

#define KM_BASE_OTHL MT_TAB
#define KM_BASE_ITHL LT_SPC
#define KM_BASE_ITHR LT_ENT
#define KM_BASE_OTHR MT_ESC

// Base layer extended keys.

#define KM_BASE_OTL KC_Q
#define KM_BASE_OML KC_A
#define KM_BASE_OBL KC_Z

#define KM_BASE_ITL KC_B
#define KM_BASE_IML KC_G
#define KM_BASE_IBL KC_V

#define KM_BASE_ITR KC_J
#define KM_BASE_IMR KC_M
#define KM_BASE_IBR KC_K

#define KM_BASE_OTR KC_Y
#define KM_BASE_OMR KC_O
#define KM_BASE_OBR KC_SLSH

// Symbol layer rows.

#define KM_SYM_TL CK_AT,   CK_HASH, KC_DLR
#define KM_SYM_ML CK_TILD, KC_LBRC, KC_LCBR
#define KM_SYM_BL CK_GRV,  KC_RBRC, KC_RCBR

#define KM_SYM_TR KC_AMPR, KC_ASTR, KC_EQL
#define KM_SYM_MR CK_DQUO, CK_PIPE, KC_MINS
#define KM_SYM_BR KC_QUOT, CK_BSLS, KC_UNDS

// Symbol layer thumb keys.

#define KM_SYM_OTHL KC_TRNS
#define KM_SYM_ITHL KC_TRNS
#define KM_SYM_ITHR KC_TRNS
#define KM_SYM_OTHR KC_TRNS

// Symbol layer extended keys.

#define KM_SYM_OTL KC_EXCL
#define KM_SYM_OML KC_GRV
#define KM_SYM_OBL KC_NO

#define KM_SYM_ITL KC_PERC
#define KM_SYM_IML KC_LPRN
#define KM_SYM_IBL KC_RPRN

#define KM_SYM_ITR KC_CIRC
#define KM_SYM_IMR KC_COLN
#define KM_SYM_IBR KC_SCLN

#define KM_SYM_OTR KC_NO
#define KM_SYM_OMR KC_PLUS
#define KM_SYM_OBR KC_NO

// Number layer rows.

#define KM_NUM_TL KC_1, KC_2, KC_3
#define KM_NUM_ML KC_4, KC_5, KC_6
#define KM_NUM_BL KC_7, KC_8, KC_9

// Number layer thumb keys.

#define KM_NUM_OTHL S(KC_TAB)
#define KM_NUM_ITHL CW_TOGG

// Number layer extended keys.

#define KM_NUM_OTL KC_NO
#define KM_NUM_OML KC_NO
#define KM_NUM_OBL KC_NO

#define KM_NUM_ITL KC_NO
#define KM_NUM_IML KC_0
#define KM_NUM_IBL KC_DOT

// Nav layer rows.

#define KM_NAV_TR WS_NWIN, WS_PDSK, WS_NDSK
#define KM_NAV_MR KC_LEFT, KC_DOWN, KC_UP
#define KM_NAV_BR WS_NTAB, KC_PGDN, KC_PGUP

// Nav layer thumb keys.

#define KM_NAV_ITHR CW_TOGG
#define KM_NAV_OTHR CK_VCMD

// Nav layer extended keys.

#define KM_NAV_ITR WS_NO
#define KM_NAV_IMR KC_NO
#define KM_NAV_IBR KC_NO

#define KM_NAV_OTR WS_NO
#define KM_NAV_OMR KC_RIGHT
#define KM_NAV_OBR KC_NO

// Function layer rows.

#define KM_CTL_TL KC_F1, KC_F2, KC_F3
#define KM_CTL_ML KC_F4, KC_F5, KC_F6
#define KM_CTL_BL KC_F7, KC_F8, KC_F9

// Function layer thumb keys.

#define KM_CTL_OTHL KC_TRNS
#define KM_CTL_ITHL KC_TRNS

// Function layer extended keys.

#define KM_CTL_OTL KC_NO
#define KM_CTL_OML KC_NO
#define KM_CTL_OBL KC_NO

#define KM_CTL_ITL KC_NO
#define KM_CTL_IML KC_F10
#define KM_CTL_IBL KC_F11

// Control layer rows.

#define KM_CTL_TR KC_MUTE, KC_MPLY, KC_PSCR
#define KM_CTL_MR KC_VOLU, KC_MNXT, KC_BRIU
#define KM_CTL_BR KC_VOLD, KC_MPRV, KC_BRID

// Control layer thumb keys.

#define KM_CTL_ITHR KC_TRNS
#define KM_CTL_OTHR KC_TRNS

// Control layer extended keys.

#define KM_CTL_ITR KC_NO
#define KM_CTL_IMR KC_NO
#define KM_CTL_IBR KC_NO

#define KM_CTL_OTR KC_NO
#define KM_CTL_OMR KC_NO
#define KM_CTL_OBR KC_NO

// Filler rows.

#define KM_FILL_TL KC_NO,   KC_NO,   KC_NO
#define KM_FILL_ML KC_TRNS, KC_TRNS, KC_TRNS
#define KM_FILL_BL KC_NO,   KC_NO,   KC_NO

#define KM_FILL_TR  KC_NO,   KC_NO,   KC_NO
#define KM_FILL_MR  KC_TRNS, KC_TRNS, KC_TRNS
#define KM_FILL_BR  KC_NO,   KC_NO,   KC_NO

// Filler thumb keys.

#define KM_FILL_OTHL KC_TRNS
#define KM_FILL_ITHL KC_TRNS
#define KM_FILL_ITHR KC_TRNS
#define KM_FILL_OTHR KC_TRNS

// Filler extended keys.

#define KM_FILL_OTL KC_NO
#define KM_FILL_OML KC_NO
#define KM_FILL_OBL KC_NO

#define KM_FILL_CTL KC_NO
#define KM_FILL_CML KC_NO
#define KM_FILL_CBL KC_NO

#define KM_FILL_ITL KC_NO
#define KM_FILL_IML KC_NO
#define KM_FILL_IBL KC_NO

#define KM_FILL_ITR KC_NO
#define KM_FILL_IMR KC_NO
#define KM_FILL_IBR KC_NO

#define KM_FILL_CTR KC_NO
#define KM_FILL_CMR KC_NO
#define KM_FILL_CBR KC_NO

#define KM_FILL_OTR KC_NO
#define KM_FILL_OMR KC_NO
#define KM_FILL_OBR KC_NO

// Transparent filler rows.

#define KM_TRNS_TL KC_TRNS, KC_TRNS, KC_TRNS
#define KM_TRNS_ML KC_TRNS, KC_TRNS, KC_TRNS
#define KM_TRNS_BL KC_TRNS, KC_TRNS, KC_TRNS

#define KM_TRNS_TR KC_TRNS, KC_TRNS, KC_TRNS
#define KM_TRNS_MR KC_TRNS, KC_TRNS, KC_TRNS
#define KM_TRNS_BR KC_TRNS, KC_TRNS, KC_TRNS

// Transparent filler thumb keys.

#define KM_TRNS_OTHL KC_TRNS
#define KM_TRNS_ITHL KC_TRNS
#define KM_TRNS_ITHR KC_TRNS
#define KM_TRNS_OTHR KC_TRNS

// Transparent filler extended keys.

#define KM_TRNS_OTL KC_TRNS
#define KM_TRNS_OML KC_TRNS
#define KM_TRNS_OBL KC_TRNS

#define KM_TRNS_CTL KC_TRNS
#define KM_TRNS_CML KC_TRNS
#define KM_TRNS_CBL KC_TRNS

#define KM_TRNS_ITL KC_TRNS
#define KM_TRNS_IML KC_TRNS
#define KM_TRNS_IBL KC_TRNS

#define KM_TRNS_ITR KC_TRNS
#define KM_TRNS_IMR KC_TRNS
#define KM_TRNS_IBR KC_TRNS

#define KM_TRNS_CTR KC_TRNS
#define KM_TRNS_CMR KC_TRNS
#define KM_TRNS_CBR KC_TRNS

#define KM_TRNS_OTR KC_TRNS
#define KM_TRNS_OMR KC_TRNS
#define KM_TRNS_OBR KC_TRNS
