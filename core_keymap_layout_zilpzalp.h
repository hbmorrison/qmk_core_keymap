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

// Define the layout macro for the zilpzalp keyboard.

#define CORE_KEYMAP_LAYOUT(...) LAYOUT(__VA_ARGS__)

// CORE_KEYMAP_ZILPZALP_ALT_BASE - replaces the base layer inner key mappings on
// the zilpzalp keyboard with inner-middle-left / inner-middle-right at the top
// and inner-bottom-left / inner-bottom-right in the middle, instead of the
// standard inner-top-left / inner-top-right and inner-middle-left /
// inner-middle-right mappings that are used on the other layers.
//
// This means that the keys that the index fingers most naturally stretch to
// issue bottom keys rather than middle keys, which might now feel less natural.
// Why do that? Because it places the V key on the base layer, instead of being
// accessed through an extended layer, which means that  pasting (Ctrl-V) is
// just as accessibly as copying (Ctrl-C) and cutting (Ctrl-X).

#ifdef CORE_KEYMAP_ZILPZALP_ALT_BASE
#  define ALT_BASE_ITL LY_BASE_IML
#  define ALT_BASE_ITR LY_BASE_IMR
#  define ALT_BASE_IML LY_BASE_IBL
#  define ALT_BASE_IMR LY_BASE_IBR
#else
#  define ALT_BASE_ITL LY_BASE_ITL
#  define ALT_BASE_ITR LY_BASE_ITR
#  define ALT_BASE_IML LY_BASE_IML
#  define ALT_BASE_IMR LY_BASE_IMR
#endif

// Define the layers.

#define LY_BASE      /**/           /**/           /**/           /**/          /**/         \
/**/    /**/         LY_BASE_TL,    ALT_BASE_ITL,  ALT_BASE_ITR,  LY_BASE_TR,   /**/         \
/**/    LY_BASE_OML, LY_BASE_ML,    ALT_BASE_IML,  ALT_BASE_IMR,  LY_BASE_MR,   LY_BASE_OMR, \
/**/    /**/         LY_BASE_BL,    /**/           /**/           LY_BASE_BR,   /**/         \
/**/    /**/         LY_BASE_OTHL,  LY_BASE_ITHL,  LY_BASE_ITHR,  LY_BASE_OTHR
#define LY_LBASEX    /**/           /**/           /**/           /**/          /**/         \
/**/    /**/         LY_BASEX_TL,   LY_FILL_ITL,   LY_FILL_ITR,   LY_FILL_TR,   /**/         \
/**/    LY_FILL_OML, LY_BASEX_ML,   LY_FILL_IML,   LY_FILL_IMR,   LY_FILL_MR,   LY_FILL_OMR, \
/**/    /**/         LY_BASEX_BL,   /**/           /**/           LY_FILL_BR,   /**/         \
/**/    /**/         LY_BASEX_OTHL, LY_BASEX_ITHL, LY_FILL_ITHR,  LY_FILL_OTHR
#define LY_RBASEX    /**/           /**/           /**/           /**/          /**/         \
/**/    /**/         LY_FILL_TL,    LY_FILL_ITL,   LY_FILL_ITR,   LY_BASEX_TR,  /**/         \
/**/    LY_FILL_OML, LY_FILL_ML,    LY_FILL_IML,   LY_FILL_IMR,   LY_BASEX_MR,  LY_FILL_OMR, \
/**/    /**/         LY_FILL_BL,    /**/           /**/           LY_BASEX_BR,  /**/         \
/**/    /**/         LY_FILL_OTHL,  LY_FILL_ITHL,  LY_BASEX_ITHR, LY_BASEX_OTHR
#define LY_LSYM      /**/           /**/           /**/           /**/          /**/         \
/**/    /**/         LY_SYM_TL,     LY_SYM_ITL,    LY_FILL_ITR,   LY_FILL_TR,   /**/         \
/**/    LY_SYM_OML,  LY_SYM_ML,     LY_SYM_IML,    LY_FILL_IMR,   LY_FILL_MR,   LY_FILL_OMR, \
/**/    /**/         LY_SYM_BL,     /**/           /**/           LY_FILL_BR,   /**/         \
/**/    /**/         LY_SYM_OTHL,   LY_SYM_ITHL,   LY_FILL_ITHR,  LY_FILL_OTHR
#define LY_LSYMX     /**/           /**/           /**/           /**/          /**/         \
/**/    /**/         LY_SYMX_TL,    LY_FILL_ITL,   LY_FILL_ITR,   LY_FILL_TR,   /**/         \
/**/    LY_FILL_OML, LY_SYMX_ML,    LY_FILL_IML,   LY_FILL_IMR,   LY_FILL_MR,   LY_FILL_OMR, \
/**/    /**/         LY_SYMX_BL,    /**/           /**/           LY_FILL_BR,   /**/         \
/**/    /**/         LY_FILL_OTHL,  LY_FILL_ITHL,  LY_FILL_ITHR,  LY_FILL_OTHR
#define LY_RSYM      /**/           /**/           /**/           /**/          /**/         \
/**/    /**/         LY_FILL_TL,    LY_FILL_ITL,   LY_SYM_ITR,    LY_SYM_TR,    /**/         \
/**/    LY_FILL_OML, LY_FILL_ML,    LY_FILL_IML,   LY_SYM_IMR,    LY_SYM_MR,    LY_SYM_OMR,  \
/**/    /**/         LY_FILL_BL,    /**/           /**/           LY_SYM_BR,    /**/         \
/**/    /**/         LY_FILL_OTHL,  LY_FILL_ITHL,  LY_SYM_ITHR,   LY_SYM_OTHR
#define LY_RSYMX     /**/           /**/           /**/           /**/          /**/         \
/**/    /**/         LY_FILL_TL,    LY_FILL_ITL,   LY_FILL_ITR,   LY_SYMX_TR,   /**/         \
/**/    LY_FILL_OML, LY_FILL_ML,    LY_FILL_IML,   LY_FILL_IMR,   LY_SYMX_MR,   LY_FILL_OMR, \
/**/    /**/         LY_FILL_BL,    /**/           /**/           LY_SYMX_BR,   /**/         \
/**/    /**/         LY_FILL_OTHL,  LY_FILL_ITHL,  LY_FILL_ITHR,  LY_FILL_OTHR
#define LY_LNUM      /**/           /**/           /**/           /**/          /**/         \
/**/    /**/         LY_NUM_TL,     LY_NUM_ITL,    LY_FILL_ITR,   LY_FILL_TR,   /**/         \
/**/    LY_NUM_OML,  LY_NUM_ML,     LY_NUM_IML,    LY_FILL_IMR,   LY_FILL_MR,   LY_FILL_OMR, \
/**/    /**/         LY_NUM_BL,     /**/           /**/           LY_FILL_BR,   /**/         \
/**/    /**/         LY_NUM_OTHL,   LY_NUM_ITHL,   LY_FILL_ITHR,  LY_FILL_OTHR
#define LY_LNUMX     /**/           /**/           /**/           /**/          /**/         \
/**/    /**/         LY_NUMX_TL,    LY_FILL_ITL,   LY_FILL_ITR,   LY_FILL_TR,   /**/         \
/**/    LY_FILL_OML, LY_NUMX_ML,    LY_FILL_IML,   LY_FILL_IMR,   LY_FILL_MR,   LY_FILL_OMR, \
/**/    /**/         LY_NUMX_BL,    /**/           /**/           LY_FILL_BR,   /**/         \
/**/    /**/         LY_FILL_OTHL,  LY_FILL_ITHL,  LY_FILL_ITHR,  LY_FILL_OTHR
#define LY_RNUM      /**/           /**/           /**/           /**/          /**/         \
/**/    /**/         LY_FILL_TL,    LY_FILL_ITL,   LY_NUM_ITR,    LY_NUM_TR,    /**/         \
/**/    LY_FILL_OML, LY_FILL_ML,    LY_FILL_IML,   LY_NUM_IMR,    LY_NUM_MR,    LY_NUM_OMR,  \
/**/    /**/         LY_FILL_BL,    /**/           /**/           LY_NUM_BR,    /**/         \
/**/    /**/         LY_FILL_OTHL,  LY_FILL_ITHL,  LY_NUM_ITHR,   LY_NUM_OTHR
#define LY_RNUMX     /**/           /**/           /**/           /**/          /**/         \
/**/    /**/         LY_FILL_TL,    LY_FILL_ITL,   LY_FILL_ITR,   LY_NUMX_TR,   /**/         \
/**/    LY_FILL_OML, LY_FILL_ML,    LY_FILL_IML,   LY_FILL_IMR,   LY_NUMX_MR,   LY_FILL_OMR, \
/**/    /**/         LY_FILL_BL,    /**/           /**/           LY_NUMX_BR,   /**/         \
/**/    /**/         LY_FILL_OTHL,  LY_FILL_ITHL,  LY_FILL_ITHR,  LY_FILL_OTHR
#define LY_LCTL      /**/           /**/           /**/           /**/          /**/         \
/**/    /**/         LY_CTL_TL,     LY_CTL_ITL,    LY_FILL_ITR,   LY_FILL_TR,   /**/         \
/**/    LY_CTL_OML,  LY_CTL_ML,     LY_CTL_IML,    LY_FILL_IMR,   LY_FILL_MR,   LY_FILL_OMR, \
/**/    /**/         LY_CTL_BL,     /**/           /**/           LY_FILL_BR,   /**/         \
/**/    /**/         LY_CTL_OTHL,   LY_CTL_ITHL,   LY_FILL_ITHR,  LY_FILL_OTHR
#define LY_LCTLX     /**/           /**/           /**/           /**/          /**/         \
/**/    /**/         LY_CTLX_TL,    LY_FILL_ITL,   LY_FILL_ITR,   LY_FILL_TR,   /**/         \
/**/    LY_FILL_OML, LY_CTLX_ML,    LY_FILL_IML,   LY_FILL_IMR,   LY_FILL_MR,   LY_FILL_OMR, \
/**/    /**/         LY_CTLX_BL,    /**/           /**/           LY_FILL_BR,   /**/         \
/**/    /**/         LY_FILL_OTHL,  LY_FILL_ITHL,  LY_FILL_ITHR,  LY_FILL_OTHR
#define LY_RCTL      /**/           /**/           /**/           /**/          /**/         \
/**/    /**/         LY_FILL_TL,    LY_FILL_ITL,   LY_CTL_ITR,    LY_CTL_TR,    /**/         \
/**/    LY_FILL_OML, LY_FILL_ML,    LY_FILL_IML,   LY_CTL_IMR,    LY_CTL_MR,    LY_CTL_OMR,  \
/**/    /**/         LY_FILL_BL,    /**/           /**/           LY_CTL_BR,    /**/         \
/**/    /**/         LY_FILL_OTHL,  LY_FILL_ITHL,  LY_CTL_ITHR,   LY_CTL_OTHR
#define LY_LMOD      /**/           /**/           /**/           /**/          /**/         \
/**/    /**/         LY_TRNS_TL,    LY_TRNS_ITL,   LY_MOD_ITR,    LY_MOD_TR,    /**/         \
/**/    LY_TRNS_OML, LY_TRNS_ML,    LY_TRNS_IML,   LY_MOD_IMR,    LY_MOD_MR,    LY_MOD_OMR,  \
/**/    /**/         LY_TRNS_BL,    /**/           /**/           LY_MOD_BR,    /**/         \
/**/    /**/         LY_FILL_OTHL,  LY_FILL_ITHL,  LY_MOD_ITHR,   LY_MOD_OTHR
#define LY_RMOD      /**/           /**/           /**/           /**/          /**/         \
/**/    /**/         LY_MOD_TL,     LY_MOD_ITL,    LY_TRNS_ITR,   LY_TRNS_TR,   /**/         \
/**/    LY_MOD_OML,  LY_MOD_ML,     LY_MOD_IML,    LY_TRNS_IMR,   LY_TRNS_MR,   LY_TRNS_OMR, \
/**/    /**/         LY_MOD_BL,     /**/           /**/           LY_TRNS_BR,   /**/         \
/**/    /**/         LY_MOD_OTHL,   LY_MOD_ITHL,   LY_FILL_ITHR,  LY_FILL_OTHR
