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

#define LT_REXT LT(LAYER_REXT, KC_SPC)
#define LT_RMOD LT(LAYER_RMOD, KC_R)
#define LT_RSYM LT(LAYER_RSYM, KC_S)
#define LT_RNUM LT(LAYER_RNUM, KC_T)
#define LT_LNUM LT(LAYER_LNUM, KC_N)
#define LT_LSYM LT(LAYER_LSYM, KC_E)
#define LT_LMOD LT(LAYER_LMOD, KC_I)
#define LT_LEXT LT(LAYER_LEXT, KC_ENT)

// Oneshot layer keycodes.

#define OS_REXT OSL(LAYER_REXT)
#define OS_LEXT OSL(LAYER_LEXT)

// Base layer rows.

#define KM_BASE_TL KC_W,    KC_F,    KC_P
#define KM_BASE_ML LT_RMOD, LT_RSYM, LT_RNUM
#define KM_BASE_BL KC_X,    KC_C,    KC_D

#define KM_BASE_TR KC_L,    KC_U,    KC_BSPC
#define KM_BASE_MR LT_LNUM, LT_LSYM, LT_LMOD
#define KM_BASE_BR KC_H,    KC_COMM, KC_DOT

// Base layer thumb keys.

#define KM_BASE_OTHL KC_TAB
#define KM_BASE_ITHL LT_REXT
#define KM_BASE_ITHR LT_LEXT
#define KM_BASE_OTHR KC_ESC

// Base layer extended keys.

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

// Extended base layer rows.

#define KM_BASEX_TL KM_BASE_OTL, KM_BASE_CTL, KM_BASE_ITL
#define KM_BASEX_ML KM_BASE_OML, KM_BASE_CML, KM_BASE_IML
#define KM_BASEX_BL KM_BASE_OBL, KM_BASE_CBL, KM_BASE_IBL

#define KM_BASEX_TR KM_BASE_ITR, KM_BASE_CTR, KM_BASE_OTR
#define KM_BASEX_MR KM_BASE_IMR, KM_BASE_CMR, KM_BASE_OMR
#define KM_BASEX_BR KM_BASE_IBR, KM_BASE_CBR, KM_BASE_OBR

// Extended base layer thumb keys.

#define KM_BASEX_OTHL S(KC_TAB)
#define KM_BASEX_ITHL CW_TOGG
#define KM_BASEX_ITHR CW_TOGG
#define KM_BASEX_OTHR CK_VCMD

// Symbol layer rows.

#define KM_SYM_TL KC_EXLM, CK_AT,   KC_DLR
#define KM_SYM_ML CK_TILD, KC_LPRN, KC_LCBR
#define KM_SYM_BL CK_GRV,  KC_RPRN, KC_RCBR

#define KM_SYM_TR KC_AMPR, KC_ASTR, KC_DEL
#define KM_SYM_MR KC_COLN, CK_DQUO, CK_PIPE
#define KM_SYM_BR KC_SCLN, KC_QUOT, CK_BSLS

// Symbol layer thumb keys.

#define KM_SYM_OTHL KC_TRNS
#define KM_SYM_ITHL KC_TRNS
#define KM_SYM_ITHR KC_TRNS
#define KM_SYM_OTHR KC_TRNS

// Symbol layer extended keys.

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
#define KM_SYM_IMR KC_MINS
#define KM_SYM_IBR KC_UNDS

#define KM_SYM_CTR KC_NO
#define KM_SYM_CMR KC_NO
#define KM_SYM_CBR KC_NO

#define KM_SYM_OTR KC_NO
#define KM_SYM_OMR KC_EQL
#define KM_SYM_OBR KC_PLUS

// Extended symbol layer rows.

#define KM_SYMX_TL KM_SYM_OTL, KM_SYM_CTL, KM_SYM_ITL
#define KM_SYMX_ML KM_SYM_OML, KM_SYM_CML, KM_SYM_IML
#define KM_SYMX_BL KM_SYM_OBL, KM_SYM_CBL, KM_SYM_IBL

#define KM_SYMX_TR KM_SYM_ITR, KM_SYM_CTR, KM_SYM_OTR
#define KM_SYMX_MR KM_SYM_IMR, KM_SYM_CMR, KM_SYM_OMR
#define KM_SYMX_BR KM_SYM_IBR, KM_SYM_CBR, KM_SYM_OBR

// Extended symbol layer thumb keys.

#define KM_SYMX_OTHL KC_TRNS
#define KM_SYMX_ITHL KC_TRNS
#define KM_SYMX_ITHR KC_TRNS
#define KM_SYMX_OTHR KC_TRNS

// Number layer rows.

#define KM_NUM_TL KC_1, KC_2, KC_3
#define KM_NUM_ML KC_4, KC_5, KC_6
#define KM_NUM_BL KC_7, KC_8, KC_9

#define KM_NUM_TR WS_PWIN, KC_UP,   WS_NWIN
#define KM_NUM_MR KC_LEFT, KC_DOWN, KC_RIGHT
#define KM_NUM_BR WS_PTAB, KC_NO,   WS_NTAB

// Number layer thumb keys.

#define KM_NUM_OTHL KC_TRNS
#define KM_NUM_ITHL KC_TRNS
#define KM_NUM_ITHR KC_TRNS
#define KM_NUM_OTHR KC_TRNS

// Number layer extended keys.

#define KM_NUM_OTL KC_PLUS
#define KM_NUM_OML KC_DOT
#define KM_NUM_OBL KC_MINS

#define KM_NUM_CTL KC_NO
#define KM_NUM_CML KC_NO
#define KM_NUM_CBL KC_NO

#define KM_NUM_ITL KC_ASTR
#define KM_NUM_IML KC_0
#define KM_NUM_IBL KC_SLSH

#define KM_NUM_ITR WS_PDSK
#define KM_NUM_IMR KC_HOME
#define KM_NUM_IBR KC_NO

#define KM_NUM_CTR KC_PGUP
#define KM_NUM_CMR KC_PGDN
#define KM_NUM_CBR CK_SSHS

#define KM_NUM_OTR WS_NDSK
#define KM_NUM_OMR KC_END
#define KM_NUM_OBR KC_NO

// Extended number layer rows.

#define KM_NUMX_TL KM_NUM_OTL, KM_NUM_CTL, KM_NUM_ITL
#define KM_NUMX_ML KM_NUM_OML, KM_NUM_CML, KM_NUM_IML
#define KM_NUMX_BL KM_NUM_OBL, KM_NUM_CBL, KM_NUM_IBL

#define KM_NUMX_TR KM_NUM_ITR, KM_NUM_CTR, KM_NUM_OTR
#define KM_NUMX_MR KM_NUM_IMR, KM_NUM_CMR, KM_NUM_OMR
#define KM_NUMX_BR KM_NUM_IBR, KM_NUM_CBR, KM_NUM_OBR

// Extended number layer thumb keys.

#define KM_NUMX_OTHL KC_TRNS
#define KM_NUMX_ITHL KC_TRNS
#define KM_NUMX_ITHR KC_TRNS
#define KM_NUMX_OTHR KC_TRNS

// Control layer rows.

#define KM_CTL_TL KC_F1, KC_F2, KC_F3
#define KM_CTL_ML KC_F4, KC_F5, KC_F6
#define KM_CTL_BL KC_F7, KC_F8, KC_F9

#define KM_CTL_TR KC_MUTE, KC_MPLY, KC_PSCR
#define KM_CTL_MR KC_VOLU, KC_MNXT, KC_BRIU
#define KM_CTL_BR KC_VOLD, KC_MPRV, KC_BRID

// Control layer thumb keys.

#define KM_CTL_OTHL KC_TRNS
#define KM_CTL_ITHL KC_TRNS
#define KM_CTL_ITHR KC_TRNS
#define KM_CTL_OTHR KC_TRNS

// Control layer extended keys.

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

// Extended control layer rows.

#define KM_CTLX_TL KM_CTL_OTL, KM_CTL_CTL, KM_CTL_ITL
#define KM_CTLX_ML KM_CTL_OML, KM_CTL_CML, KM_CTL_IML
#define KM_CTLX_BL KM_CTL_OBL, KM_CTL_CBL, KM_CTL_IBL

#define KM_CTLX_TR KM_CTL_ITR, KM_CTL_CTR, KM_CTL_OTR
#define KM_CTLX_MR KM_CTL_IMR, KM_CTL_CMR, KM_CTL_OMR
#define KM_CTLX_BR KM_CTL_IBR, KM_CTL_CBR, KM_CTL_OBR

// Extended control layer thumb keys.

#define KM_CTLX_OTHL KC_TRNS
#define KM_CTLX_ITHL KC_TRNS
#define KM_CTLX_ITHR KC_TRNS
#define KM_CTLX_OTHR KC_TRNS

// Mod layers.

#define KM_MOD_TL KC_NO,   CW_TOGG, KC_NO
#define KM_MOD_ML KC_TRNS, HM_SFT,  HM_CTL
#define KM_MOD_BL KC_NO,   HM_ALT,  HM_GUI

#define KM_MOD_TR KC_NO,  CW_TOGG, KC_NO
#define KM_MOD_MR HM_CTL, HM_SFT,  KC_TRNS
#define KM_MOD_BR HM_GUI, HM_ALT,  KC_NO

// Filler thumb keys.

#define KM_MOD_OTHL KC_TRNS
#define KM_MOD_ITHL KC_TRNS
#define KM_MOD_ITHR KC_TRNS
#define KM_MOD_OTHR KC_TRNS

// Filler extended keys.

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
