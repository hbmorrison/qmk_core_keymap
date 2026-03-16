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

#define KM_BASEX_TL KM_BASE_OTL, KM_BASE_CTL, KM_BASE_ITL
#define KM_BASEX_ML KM_BASE_OML, KM_BASE_CML, KM_BASE_IML
#define KM_BASEX_BL KM_BASE_OBL, KM_BASE_CBL, KM_BASE_IBL

#define KM_BASEX_TR KM_BASE_ITR, KM_BASE_CTR, KM_BASE_OTR
#define KM_BASEX_MR KM_BASE_IMR, KM_BASE_CMR, KM_BASE_OMR
#define KM_BASEX_BR KM_BASE_IBR, KM_BASE_CBR, KM_BASE_OBR

// Define the extended symbol layers.

#define KM_SYMX_TL KM_SYM_OTL, KM_SYM_CTL, KM_SYM_ITL
#define KM_SYMX_ML KM_SYM_OML, KM_SYM_CML, KM_SYM_IML
#define KM_SYMX_BL KM_SYM_OBL, KM_SYM_CBL, KM_SYM_IBL

// CORE_KEYMAP_EXTENDED_ALT_RSYMX - moves the minus, underscore, equals and plus
// keys to the top of the middle and right columns, rather than their default
// placement on the bottom of the left and right columns. This makes using them
// feel more like a standard ANSI/ISO keyboard, where these pairs of keycodes
// sit on two keys at the top right of the keyboard.

#ifdef CORE_KEYMAP_EXTENDED_ALT_RSYMX
#  define KM_SYMX_TR KM_SYM_ITR, KM_SYM_IMR, KM_SYM_OMR
#  define KM_SYMX_MR KC_NO,      KM_SYM_IBR, KM_SYM_OBR
#  define KM_SYMX_BR KC_NO,      KC_NO,      KC_NO
#else
#  define KM_SYMX_TR KM_SYM_ITR, KM_SYM_CTR, KM_SYM_OTR
#  define KM_SYMX_MR KM_SYM_IMR, KM_SYM_CMR, KM_SYM_OMR
#  define KM_SYMX_BR KM_SYM_IBR, KM_SYM_CBR, KM_SYM_OBR
#endif

// Define the extended number layers.

#define KM_NUMX_TL KM_NUM_OTL, KM_NUM_CTL, KM_NUM_ITL
#define KM_NUMX_ML KM_NUM_OML, KM_NUM_CML, KM_NUM_IML
#define KM_NUMX_BL KM_NUM_OBL, KM_NUM_CBL, KM_NUM_IBL

#define KM_NUMX_TR KM_NUM_ITR, KM_NUM_CTR, KM_NUM_OTR
#define KM_NUMX_MR KM_NUM_IMR, KM_NUM_CMR, KM_NUM_OMR
#define KM_NUMX_BR KM_NUM_IBR, KM_NUM_CBR, KM_NUM_OBR

// Define the extended control layers.

#define KM_CTLX_TL KM_CTL_OTL, KM_CTL_CTL, KM_CTL_ITL
#define KM_CTLX_ML KM_CTL_OML, KM_CTL_CML, KM_CTL_IML
#define KM_CTLX_BL KM_CTL_OBL, KM_CTL_CBL, KM_CTL_IBL

#define KM_CTLX_TR KM_CTL_ITR, KM_CTL_CTR, KM_CTL_OTR
#define KM_CTLX_MR KM_CTL_IMR, KM_CTL_CMR, KM_CTL_OMR
#define KM_CTLX_BR KM_CTL_IBR, KM_CTL_CBR, KM_CTL_OBR
