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

// Define the extended base layers.

#define LY_BASEX_TL LY_BASE_OTL, LY_BASE_CTL, LY_BASE_ITL
#define LY_BASEX_ML LY_BASE_OML, LY_BASE_CML, LY_BASE_IML
#define LY_BASEX_BL LY_BASE_OBL, LY_BASE_CBL, LY_BASE_IBL

#define LY_BASEX_TR LY_BASE_ITR, LY_BASE_CTR, LY_BASE_OTR
#define LY_BASEX_MR LY_BASE_IMR, LY_BASE_CMR, LY_BASE_OMR
#define LY_BASEX_BR LY_BASE_IBR, LY_BASE_CBR, LY_BASE_OBR

// Define the extended symbol layers.

#define LY_SYMX_TL LY_SYM_OTL, LY_SYM_CTL, LY_SYM_ITL
#define LY_SYMX_ML LY_SYM_OML, LY_SYM_CML, LY_SYM_IML
#define LY_SYMX_BL LY_SYM_OBL, LY_SYM_CBL, LY_SYM_IBL

// CORE_KEYMAP_EXTENDED_ALT_RSYMX - moves the minus, underscore, equals and plus
// keys to the top of the middle and right columns, rather than their default
// placement on the bottom of the left and right columns. This makes using them
// feel more like a standard ANSI/ISO keyboard, where these pairs of keycodes
// sit on two keys at the top right of the keyboard.

#ifdef CORE_KEYMAP_EXTENDED_ALT_RSYMX
#  define LY_SYMX_TR LY_SYM_ITR, LY_SYM_IMR, LY_SYM_OMR
#  define LY_SYMX_MR KC_NO,      LY_SYM_IBR, LY_SYM_OBR
#  define LY_SYMX_BR KC_NO,      KC_NO,      KC_NO
#else
#  define LY_SYMX_TR LY_SYM_ITR, LY_SYM_CTR, LY_SYM_OTR
#  define LY_SYMX_MR LY_SYM_IMR, LY_SYM_CMR, LY_SYM_OMR
#  define LY_SYMX_BR LY_SYM_IBR, LY_SYM_CBR, LY_SYM_OBR
#endif

// Define the extended number layers.

#define LY_NUMX_TL LY_NUM_OTL, LY_NUM_CTL, LY_NUM_ITL
#define LY_NUMX_ML LY_NUM_OML, LY_NUM_CML, LY_NUM_IML
#define LY_NUMX_BL LY_NUM_OBL, LY_NUM_CBL, LY_NUM_IBL

#define LY_NUMX_TR LY_NUM_ITR, LY_NUM_CTR, LY_NUM_OTR
#define LY_NUMX_MR LY_NUM_IMR, LY_NUM_CMR, LY_NUM_OMR
#define LY_NUMX_BR LY_NUM_IBR, LY_NUM_CBR, LY_NUM_OBR

// Define the extended control layers.

#define LY_CTLX_TL LY_CTL_OTL, LY_CTL_CTL, LY_CTL_ITL
#define LY_CTLX_ML LY_CTL_OML, LY_CTL_CML, LY_CTL_IML
#define LY_CTLX_BL LY_CTL_OBL, LY_CTL_CBL, LY_CTL_IBL

#define LY_CTLX_TR LY_CTL_ITR, LY_CTL_CTR, LY_CTL_OTR
#define LY_CTLX_MR LY_CTL_IMR, LY_CTL_CMR, LY_CTL_OMR
#define LY_CTLX_BR LY_CTL_IBR, LY_CTL_CBR, LY_CTL_OBR
