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

#define LT_RSYM LT(LAYER_RSYM,   KC_R)
#define LT_REXT LT(LAYER_RBASEX, KC_S)
#define LT_RNUM LT(LAYER_RNUM,   KC_T)
#define LT_LNUM LT(LAYER_LNUM,   KC_N)
#define LT_LEXT LT(LAYER_LBASEX, KC_E)
#define LT_LSYM LT(LAYER_LSYM,   KC_I)

#define LT_LMOD LT(LAYER_LMOD, KC_SPC)
#define LT_RMOD LT(LAYER_RMOD, KC_ENT)

// Base layer.

#define LY_BASE_TL KC_W,    KC_F,    KC_P
#define LY_BASE_ML LT_RSYM, LT_REXT, LT_RNUM
#define LY_BASE_BL KC_X,    KC_C,    KC_D

#define LY_BASE_TR KC_L,    KC_U,    KC_BSPC
#define LY_BASE_MR LT_LNUM, LT_LEXT, LT_LSYM
#define LY_BASE_BR KC_H,    KC_COMM, KC_DOT

// Base layer and extended base layer thumb keys.

#define LY_BASE_OTHL KC_TAB
#define LY_BASE_ITHL LT_LMOD
#define LY_BASE_ITHR LT_RMOD
#define LY_BASE_OTHR KC_ESC

#define LY_BASEX_OTHL KC_TRNS
#define LY_BASEX_ITHL KC_TRNS
#define LY_BASEX_ITHR KC_TRNS
#define LY_BASEX_OTHR KC_TRNS

// Extended base layer.

#define LY_BASE_OTL KC_Q
#define LY_BASE_OML KC_A
#define LY_BASE_OBL KC_Z

#define LY_BASE_CTL CK_OPQA
#define LY_BASE_CML KC_TAB
#define LY_BASE_CBL S(KC_TAB)

#define LY_BASE_ITL KC_B
#define LY_BASE_IML KC_G
#define LY_BASE_IBL KC_V

#define LY_BASE_ITR KC_J
#define LY_BASE_IMR KC_M
#define LY_BASE_IBR KC_K

#define LY_BASE_CTR CK_OPAT
#define LY_BASE_CMR KC_ESC
#define LY_BASE_CBR CK_VCMD

#define LY_BASE_OTR KC_Y
#define LY_BASE_OMR KC_O
#define LY_BASE_OBR KC_SLSH

// Symbol layers.

#define LY_SYM_TL KC_EXLM, CK_AT,   KC_DLR
#define LY_SYM_ML CK_TILD, KC_LPRN, KC_LCBR
#define LY_SYM_BL CK_GRV,  KC_RPRN, KC_RCBR

#define LY_SYM_TR KC_AMPR, KC_ASTR, KC_DEL
#define LY_SYM_MR KC_COLN, CK_DQUO, CK_PIPE
#define LY_SYM_BR KC_SCLN, KC_QUOT, CK_BSLS

// Symbol layer thumb keys.

#define LY_SYM_OTHL KC_TRNS
#define LY_SYM_ITHL KC_TRNS
#define LY_SYM_ITHR KC_TRNS
#define LY_SYM_OTHR KC_TRNS

// Extended symbol layers.

#define LY_SYM_OTL KC_GRV
#define LY_SYM_OML KC_NO
#define LY_SYM_OBL KC_NO

#define LY_SYM_CTL KC_HASH
#define LY_SYM_CML KC_NO
#define LY_SYM_CBL KC_NO

#define LY_SYM_ITL KC_PERC
#define LY_SYM_IML KC_LBRC
#define LY_SYM_IBL KC_RBRC

#define LY_SYM_ITR KC_CIRC
#define LY_SYM_IMR KC_NO
#define LY_SYM_IBR KC_NO

#define LY_SYM_CTR KC_UNDS
#define LY_SYM_CMR KC_MINS
#define LY_SYM_CBR KC_NO

#define LY_SYM_OTR KC_PLUS
#define LY_SYM_OMR KC_EQL
#define LY_SYM_OBR KC_NO

// Number and navigation layers.

#define LY_NUM_TL KC_1, KC_2, KC_3
#define LY_NUM_ML KC_4, KC_5, KC_6
#define LY_NUM_BL KC_7, KC_8, KC_9

#define LY_NUM_TR WS_PWIN, KC_UP,   WS_NWIN
#define LY_NUM_MR KC_LEFT, KC_DOWN, KC_RIGHT
#define LY_NUM_BR WS_PTAB, CK_SSHS, WS_NTAB

// Number and navigation layer thumb keys.

#define LY_NUM_OTHL KC_TRNS
#define LY_NUM_ITHL KC_TRNS
#define LY_NUM_ITHR KC_TRNS
#define LY_NUM_OTHR KC_TRNS

// Extended number and navigation layers.

#define LY_NUM_OTL KC_MINS
#define LY_NUM_OML KC_DOT
#define LY_NUM_OBL KC_SLSH

#define LY_NUM_CTL KC_NO
#define LY_NUM_CML KC_EQL
#define LY_NUM_CBL KC_NO

#define LY_NUM_ITL KC_PLUS
#define LY_NUM_IML KC_0
#define LY_NUM_IBL KC_ASTR

#define LY_NUM_ITR WS_PDSK
#define LY_NUM_IMR KC_HOME
#define LY_NUM_IBR KC_NO

#define LY_NUM_CTR KC_PGUP
#define LY_NUM_CMR KC_PGDN
#define LY_NUM_CBR KC_NO

#define LY_NUM_OTR WS_NDSK
#define LY_NUM_OMR KC_END
#define LY_NUM_OBR KC_NO

// Function and control layers.

#define LY_CTL_TL KC_F1, KC_F2, KC_F3
#define LY_CTL_ML KC_F4, KC_F5, KC_F6
#define LY_CTL_BL KC_F7, KC_F8, KC_F9

#define LY_CTL_TR KC_MUTE, KC_MPLY, KC_PSCR
#define LY_CTL_MR KC_VOLU, KC_MNXT, KC_BRIU
#define LY_CTL_BR KC_VOLD, KC_MPRV, KC_BRID

// Function and control layer thumb keys.

#define LY_CTL_OTHL KC_TRNS
#define LY_CTL_ITHL KC_TRNS
#define LY_CTL_ITHR KC_TRNS
#define LY_CTL_OTHR KC_TRNS

// Extended function and control layers.

#define LY_CTL_OTL KC_F13
#define LY_CTL_OML KC_F14
#define LY_CTL_OBL KC_F15

#define LY_CTL_CTL KC_NO
#define LY_CTL_CML KC_NO
#define LY_CTL_CBL KC_NO

#define LY_CTL_ITL KC_F10
#define LY_CTL_IML KC_F11
#define LY_CTL_IBL KC_F12

#define LY_CTL_ITR KC_NO
#define LY_CTL_IMR KC_NO
#define LY_CTL_IBR KC_NO

#define LY_CTL_CTR KC_NO
#define LY_CTL_CMR KC_NO
#define LY_CTL_CBR KC_NO

#define LY_CTL_OTR KC_NO
#define LY_CTL_OMR KC_NO
#define LY_CTL_OBR KC_NO

// Mod layers.

#define LY_MOD_TL KC_NO,  KC_NO,  KC_NO
#define LY_MOD_ML HM_ALT, HM_CTL, HM_SFT
#define LY_MOD_BL KC_NO,  HM_GUI, KC_NO

#define LY_MOD_TR KC_NO,  KC_NO,  KC_NO
#define LY_MOD_MR HM_SFT, HM_CTL, HM_ALT
#define LY_MOD_BR KC_NO,  HM_GUI, KC_NO

// Mod layer thumb keys.

#define LY_MOD_OTHL S(KC_TAB)
#define LY_MOD_ITHL KC_TAB
#define LY_MOD_ITHR KC_ESC
#define LY_MOD_OTHR CK_VCMD

// Extended mod layers.

#define LY_MOD_OTL KC_NO
#define LY_MOD_OML KC_NO
#define LY_MOD_OBL KC_NO

#define LY_MOD_CTL KC_NO
#define LY_MOD_CML KC_NO
#define LY_MOD_CBL KC_NO

#define LY_MOD_ITL KC_NO
#define LY_MOD_IML KC_NO
#define LY_MOD_IBL KC_NO

#define LY_MOD_ITR KC_NO
#define LY_MOD_IMR KC_NO
#define LY_MOD_IBR KC_NO

#define LY_MOD_CTR KC_NO
#define LY_MOD_CMR KC_NO
#define LY_MOD_CBR KC_NO

#define LY_MOD_OTR KC_NO
#define LY_MOD_OMR KC_NO
#define LY_MOD_OBR KC_NO
