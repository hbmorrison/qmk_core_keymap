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

#define LT_RMOD LT(LAYER_RMOD,   KC_R)
#define LT_RSYM LT(LAYER_RSYM,   KC_S)
#define LT_REXT LT(LAYER_RBASEX, KC_T)
#define LT_RNUM LT(LAYER_RNUM,   KC_SPC)
#define LT_LNUM LT(LAYER_LNUM,   KC_ENT)
#define LT_LEXT LT(LAYER_LBASEX, KC_N)
#define LT_LSYM LT(LAYER_LSYM,   KC_E)
#define LT_LMOD LT(LAYER_LMOD,   KC_I)

// Base layer.

#define KM_BASE_TL KC_W,    KC_F,    KC_P
#define KM_BASE_ML LT_RMOD, LT_RSYM, LT_REXT
#define KM_BASE_BL KC_X,    KC_C,    KC_D

#define KM_BASE_TR KC_L,    KC_U,    KC_BSPC
#define KM_BASE_MR LT_LEXT, LT_LSYM, LT_LMOD
#define KM_BASE_BR KC_H,    KC_COMM, KC_DOT

// Base layer and extended base layer thumb keys.

#define KM_BASE_OTHL KC_TAB
#define KM_BASE_ITHL LT_RNUM
#define KM_BASE_ITHR LT_LNUM
#define KM_BASE_OTHR KC_ESC

#define KM_BASEX_OTHL S(KC_TAB)
#define KM_BASEX_ITHL CW_TOGG
#define KM_BASEX_ITHR KC_TRNS
#define KM_BASEX_OTHR CK_VCMD

// Extended base layer.

#define KM_BASE_OTL KC_Q
#define KM_BASE_OML KC_A
#define KM_BASE_OBL KC_Z

#define KM_BASE_CTL CK_OPQA
#define KM_BASE_CML KC_TAB
#define KM_BASE_CBL S(KC_TAB)

#define KM_BASE_ITL KC_B
#define KM_BASE_IML KC_G
#define KM_BASE_IBL KC_V

#define KM_BASE_ITR KC_J
#define KM_BASE_IMR KC_M
#define KM_BASE_IBR KC_K

#define KM_BASE_CTR CK_OPAT
#define KM_BASE_CMR KC_ESC
#define KM_BASE_CBR CK_VCMD

#define KM_BASE_OTR KC_Y
#define KM_BASE_OMR KC_O
#define KM_BASE_OBR KC_SLSH

// Symbol layers.

#define KM_SYM_TL KC_EXLM, CK_AT,   KC_DLR
#define KM_SYM_ML CK_TILD, KC_LPRN, KC_LCBR
#define KM_SYM_BL CK_GRV,  KC_RPRN, KC_RCBR

#define KM_SYM_TR KC_AMPR, KC_ASTR, KC_DEL
#define KM_SYM_MR KC_COLN, CK_DQUO, CK_PIPE
#define KM_SYM_BR KC_SCLN, KC_QUOT, CK_BSLS

// Symbol layer thumb keys.

#define KM_SYM_OTHL S(KC_TAB)
#define KM_SYM_ITHL CW_TOGG
#define KM_SYM_ITHR CW_TOGG
#define KM_SYM_OTHR CK_VCMD

// Extended symbol layers.

#define KM_SYM_OTL KC_GRV
#define KM_SYM_OML KC_NO
#define KM_SYM_OBL KC_NO

#define KM_SYM_CTL KC_HASH
#define KM_SYM_CML KC_NO
#define KM_SYM_CBL KC_NO

#define KM_SYM_ITL KC_PERC
#define KM_SYM_IML KC_LBRC
#define KM_SYM_IBL KC_RBRC

#define KM_SYM_ITR KC_CIRC
#define KM_SYM_IMR KC_UNDS
#define KM_SYM_IBR KC_MINS

#define KM_SYM_CTR KC_NO
#define KM_SYM_CMR KC_NO
#define KM_SYM_CBR KC_NO

#define KM_SYM_OTR KC_NO
#define KM_SYM_OMR KC_PLUS
#define KM_SYM_OBR KC_EQL

// Number and navigation layers.

#define KM_NUM_TL KC_1, KC_2, KC_3
#define KM_NUM_ML KC_4, KC_5, KC_6
#define KM_NUM_BL KC_7, KC_8, KC_9

#define KM_NUM_TR WS_PWIN, KC_UP,   WS_NWIN
#define KM_NUM_MR KC_LEFT, KC_DOWN, KC_RIGHT
#define KM_NUM_BR WS_PTAB, CK_SSHS, WS_NTAB

// Number and navigation layer thumb keys.

#define KM_NUM_OTHL KC_TRNS
#define KM_NUM_ITHL KC_0
#define KM_NUM_ITHR KC_TRNS
#define KM_NUM_OTHR KC_TRNS

// Extended number and navigation layers.

#define KM_NUM_OTL KC_PLUS
#define KM_NUM_OML KC_EQL
#define KM_NUM_OBL KC_SLSH

#define KM_NUM_CTL KC_NO
#define KM_NUM_CML KC_0
#define KM_NUM_CBL KC_NO

#define KM_NUM_ITL KC_ASTR
#define KM_NUM_IML KC_MINS
#define KM_NUM_IBL KC_DOT

#define KM_NUM_ITR WS_PDSK
#define KM_NUM_IMR KC_HOME
#define KM_NUM_IBR KC_NO

#define KM_NUM_CTR KC_PGUP
#define KM_NUM_CMR KC_PGDN
#define KM_NUM_CBR KC_NO

#define KM_NUM_OTR WS_NDSK
#define KM_NUM_OMR KC_END
#define KM_NUM_OBR KC_NO

// Function and control layers.

#define KM_CTL_TL KC_F1, KC_F2, KC_F3
#define KM_CTL_ML KC_F4, KC_F5, KC_F6
#define KM_CTL_BL KC_F7, KC_F8, KC_F9

#define KM_CTL_TR KC_MUTE, KC_MPLY, KC_PSCR
#define KM_CTL_MR KC_VOLU, KC_MNXT, KC_BRIU
#define KM_CTL_BR KC_VOLD, KC_MPRV, KC_BRID

// Function and control layer thumb keys.

#define KM_CTL_OTHL KC_TRNS
#define KM_CTL_ITHL KC_TRNS
#define KM_CTL_ITHR KC_TRNS
#define KM_CTL_OTHR KC_TRNS

// Extended function and control layers.

#define KM_CTL_OTL KC_F13
#define KM_CTL_OML KC_F14
#define KM_CTL_OBL KC_F15

#define KM_CTL_CTL KC_NO
#define KM_CTL_CML KC_NO
#define KM_CTL_CBL KC_NO

#define KM_CTL_ITL KC_F10
#define KM_CTL_IML KC_F11
#define KM_CTL_IBL KC_F12

#define KM_CTL_ITR KC_NO
#define KM_CTL_IMR KC_NO
#define KM_CTL_IBR KC_NO

#define KM_CTL_CTR KC_NO
#define KM_CTL_CMR KC_NO
#define KM_CTL_CBR KC_NO

#define KM_CTL_OTR KC_NO
#define KM_CTL_OMR KC_NO
#define KM_CTL_OBR KC_NO

// Mod layers.

#define KM_MOD_TL KC_NO,   KC_NO,  KC_NO
#define KM_MOD_ML KC_TRNS, HM_SFT, HM_CTL
#define KM_MOD_BL KC_NO,   HM_GUI, HM_ALT

#define KM_MOD_TR KC_NO,  KC_NO,  KC_NO
#define KM_MOD_MR HM_CTL, HM_SFT, KC_TRNS
#define KM_MOD_BR HM_ALT, HM_GUI, KC_NO

// Mod layer thumb keys.

#define KM_MOD_OTHL S(KC_TAB)
#define KM_MOD_ITHL KC_SPC
#define KM_MOD_ITHR KC_ENT
#define KM_MOD_OTHR CK_VCMD

// Extended mod layers.

#define KM_MOD_OTL KC_NO
#define KM_MOD_OML KC_NO
#define KM_MOD_OBL KC_NO

#define KM_MOD_CTL KC_NO
#define KM_MOD_CML KC_NO
#define KM_MOD_CBL KC_NO

#define KM_MOD_ITL KC_NO
#define KM_MOD_IML KC_NO
#define KM_MOD_IBL KC_NO

#define KM_MOD_ITR KC_NO
#define KM_MOD_IMR KC_NO
#define KM_MOD_IBR KC_NO

#define KM_MOD_CTR KC_NO
#define KM_MOD_CMR KC_NO
#define KM_MOD_CBR KC_NO

#define KM_MOD_OTR KC_NO
#define KM_MOD_OMR KC_NO
#define KM_MOD_OBR KC_NO
