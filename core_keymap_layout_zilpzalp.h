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
#  define ALT_BASE_ITL KM_BASE_IML
#  define ALT_BASE_ITR KM_BASE_IMR
#  define ALT_BASE_IML KM_BASE_IBL
#  define ALT_BASE_IMR KM_BASE_IBR
#else
#  define ALT_BASE_ITL KM_BASE_ITL
#  define ALT_BASE_ITR KM_BASE_ITR
#  define ALT_BASE_IML KM_BASE_IML
#  define ALT_BASE_IMR KM_BASE_IMR
#endif

// Define the layers.

#define KM_BASE      /**/           /**/           /**/           /**/          /**/         \
/**/    /**/         KM_BASE_TL,    ALT_BASE_ITL,  ALT_BASE_ITR,  KM_BASE_TR,   /**/         \
/**/    KM_BASE_OML, KM_BASE_ML,    ALT_BASE_IML,  ALT_BASE_IMR,  KM_BASE_MR,   KM_BASE_OMR, \
/**/    /**/         KM_BASE_BL,    /**/           /**/           KM_BASE_BR,   /**/         \
/**/    /**/         KM_BASE_OTHL,  KM_BASE_ITHL,  KM_BASE_ITHR,  KM_BASE_OTHR
#define KM_LBASEX    /**/           /**/           /**/           /**/          /**/         \
/**/    /**/         KM_BASEX_TL,   KM_FILL_ITL,   KM_FILL_ITR,   KM_FILL_TR,   /**/         \
/**/    KM_FILL_OML, KM_BASEX_ML,   KM_FILL_IML,   KM_FILL_IMR,   KM_FILL_MR,   KM_FILL_OMR, \
/**/    /**/         KM_BASEX_BL,   /**/           /**/           KM_FILL_BR,   /**/         \
/**/    /**/         KM_BASEX_OTHL, KM_BASEX_ITHL, KM_FILL_ITHR,  KM_FILL_OTHR
#define KM_RBASEX    /**/           /**/           /**/           /**/          /**/         \
/**/    /**/         KM_FILL_TL,    KM_FILL_ITL,   KM_FILL_ITR,   KM_BASEX_TR,  /**/         \
/**/    KM_FILL_OML, KM_FILL_ML,    KM_FILL_IML,   KM_FILL_IMR,   KM_BASEX_MR,  KM_FILL_OMR, \
/**/    /**/         KM_FILL_BL,    /**/           /**/           KM_BASEX_BR,  /**/         \
/**/    /**/         KM_FILL_OTHL,  KM_FILL_ITHL,  KM_BASEX_ITHR, KM_BASEX_OTHR
#define KM_LSYM      /**/           /**/           /**/           /**/          /**/         \
/**/    /**/         KM_SYM_TL,     KM_SYM_ITL,    KM_FILL_ITR,   KM_FILL_TR,   /**/         \
/**/    KM_SYM_OML,  KM_SYM_ML,     KM_SYM_IML,    KM_FILL_IMR,   KM_FILL_MR,   KM_FILL_OMR, \
/**/    /**/         KM_SYM_BL,     /**/           /**/           KM_FILL_BR,   /**/         \
/**/    /**/         KM_SYM_OTHL,   KM_SYM_ITHL,   KM_FILL_ITHR,  KM_FILL_OTHR
#define KM_LSYMX     /**/           /**/           /**/           /**/          /**/         \
/**/    /**/         KM_SYMX_TL,    KM_FILL_ITL,   KM_FILL_ITR,   KM_FILL_TR,   /**/         \
/**/    KM_FILL_OML, KM_SYMX_ML,    KM_FILL_IML,   KM_FILL_IMR,   KM_FILL_MR,   KM_FILL_OMR, \
/**/    /**/         KM_SYMX_BL,    /**/           /**/           KM_FILL_BR,   /**/         \
/**/    /**/         KM_FILL_OTHL,  KM_FILL_ITHL,  KM_FILL_ITHR,  KM_FILL_OTHR
#define KM_RSYM      /**/           /**/           /**/           /**/          /**/         \
/**/    /**/         KM_FILL_TL,    KM_FILL_ITL,   KM_SYM_ITR,    KM_SYM_TR,    /**/         \
/**/    KM_FILL_OML, KM_FILL_ML,    KM_FILL_IML,   KM_SYM_IMR,    KM_SYM_MR,    KM_SYM_OMR,  \
/**/    /**/         KM_FILL_BL,    /**/           /**/           KM_SYM_BR,    /**/         \
/**/    /**/         KM_FILL_OTHL,  KM_FILL_ITHL,  KM_SYM_ITHR,   KM_SYM_OTHR
#define KM_RSYMX     /**/           /**/           /**/           /**/          /**/         \
/**/    /**/         KM_FILL_TL,    KM_FILL_ITL,   KM_FILL_ITR,   KM_SYMX_TR,   /**/         \
/**/    KM_FILL_OML, KM_FILL_ML,    KM_FILL_IML,   KM_FILL_IMR,   KM_SYMX_MR,   KM_FILL_OMR, \
/**/    /**/         KM_FILL_BL,    /**/           /**/           KM_SYMX_BR,   /**/         \
/**/    /**/         KM_FILL_OTHL,  KM_FILL_ITHL,  KM_FILL_ITHR,  KM_FILL_OTHR
#define KM_LNUM      /**/           /**/           /**/           /**/          /**/         \
/**/    /**/         KM_NUM_TL,     KM_NUM_ITL,    KM_FILL_ITR,   KM_FILL_TR,   /**/         \
/**/    KM_NUM_OML,  KM_NUM_ML,     KM_NUM_IML,    KM_FILL_IMR,   KM_FILL_MR,   KM_FILL_OMR, \
/**/    /**/         KM_NUM_BL,     /**/           /**/           KM_FILL_BR,   /**/         \
/**/    /**/         KM_NUM_OTHL,   KM_NUM_ITHL,   KM_FILL_ITHR,  KM_FILL_OTHR
#define KM_LNUMX     /**/           /**/           /**/           /**/          /**/         \
/**/    /**/         KM_NUMX_TL,    KM_FILL_ITL,   KM_FILL_ITR,   KM_FILL_TR,   /**/         \
/**/    KM_FILL_OML, KM_NUMX_ML,    KM_FILL_IML,   KM_FILL_IMR,   KM_FILL_MR,   KM_FILL_OMR, \
/**/    /**/         KM_NUMX_BL,    /**/           /**/           KM_FILL_BR,   /**/         \
/**/    /**/         KM_FILL_OTHL,  KM_FILL_ITHL,  KM_FILL_ITHR,  KM_FILL_OTHR
#define KM_RNUM      /**/           /**/           /**/           /**/          /**/         \
/**/    /**/         KM_FILL_TL,    KM_FILL_ITL,   KM_NUM_ITR,    KM_NUM_TR,    /**/         \
/**/    KM_FILL_OML, KM_FILL_ML,    KM_FILL_IML,   KM_NUM_IMR,    KM_NUM_MR,    KM_NUM_OMR,  \
/**/    /**/         KM_FILL_BL,    /**/           /**/           KM_NUM_BR,    /**/         \
/**/    /**/         KM_FILL_OTHL,  KM_FILL_ITHL,  KM_NUM_ITHR,   KM_NUM_OTHR
#define KM_RNUMX     /**/           /**/           /**/           /**/          /**/         \
/**/    /**/         KM_FILL_TL,    KM_FILL_ITL,   KM_FILL_ITR,   KM_NUMX_TR,   /**/         \
/**/    KM_FILL_OML, KM_FILL_ML,    KM_FILL_IML,   KM_FILL_IMR,   KM_NUMX_MR,   KM_FILL_OMR, \
/**/    /**/         KM_FILL_BL,    /**/           /**/           KM_NUMX_BR,   /**/         \
/**/    /**/         KM_FILL_OTHL,  KM_FILL_ITHL,  KM_FILL_ITHR,  KM_FILL_OTHR
#define KM_LCTL      /**/           /**/           /**/           /**/          /**/         \
/**/    /**/         KM_CTL_TL,     KM_CTL_ITL,    KM_FILL_ITR,   KM_FILL_TR,   /**/         \
/**/    KM_CTL_OML,  KM_CTL_ML,     KM_CTL_IML,    KM_FILL_IMR,   KM_FILL_MR,   KM_FILL_OMR, \
/**/    /**/         KM_CTL_BL,     /**/           /**/           KM_FILL_BR,   /**/         \
/**/    /**/         KM_CTL_OTHL,   KM_CTL_ITHL,   KM_FILL_ITHR,  KM_FILL_OTHR
#define KM_LCTLX     /**/           /**/           /**/           /**/          /**/         \
/**/    /**/         KM_CTLX_TL,    KM_FILL_ITL,   KM_FILL_ITR,   KM_FILL_TR,   /**/         \
/**/    KM_FILL_OML, KM_CTLX_ML,    KM_FILL_IML,   KM_FILL_IMR,   KM_FILL_MR,   KM_FILL_OMR, \
/**/    /**/         KM_CTLX_BL,    /**/           /**/           KM_FILL_BR,   /**/         \
/**/    /**/         KM_FILL_OTHL,  KM_FILL_ITHL,  KM_FILL_ITHR,  KM_FILL_OTHR
#define KM_RCTL      /**/           /**/           /**/           /**/          /**/         \
/**/    /**/         KM_FILL_TL,    KM_FILL_ITL,   KM_CTL_ITR,    KM_CTL_TR,    /**/         \
/**/    KM_FILL_OML, KM_FILL_ML,    KM_FILL_IML,   KM_CTL_IMR,    KM_CTL_MR,    KM_CTL_OMR,  \
/**/    /**/         KM_FILL_BL,    /**/           /**/           KM_CTL_BR,    /**/         \
/**/    /**/         KM_FILL_OTHL,  KM_FILL_ITHL,  KM_CTL_ITHR,   KM_CTL_OTHR
#define KM_LMOD      /**/           /**/           /**/           /**/          /**/         \
/**/    /**/         KM_MOD_TL,     KM_MOD_ITL,    KM_TRNS_ITR,   KM_TRNS_TR,   /**/         \
/**/    KM_MOD_OML,  KM_MOD_ML,     KM_MOD_IML,    KM_TRNS_IMR,   KM_TRNS_MR,   KM_TRNS_OMR, \
/**/    /**/         KM_MOD_BL,     /**/           /**/           KM_TRNS_BR,   /**/         \
/**/    /**/         KM_MOD_OTHL,   KM_MOD_ITHL,   KM_FILL_ITHR,  KM_FILL_OTHR
#define KM_RMOD      /**/           /**/           /**/           /**/          /**/         \
/**/    /**/         KM_TRNS_TL,    KM_TRNS_ITL,   KM_MOD_ITR,    KM_MOD_TR,    /**/         \
/**/    KM_TRNS_OML, KM_TRNS_ML,    KM_TRNS_IML,   KM_MOD_IMR,    KM_MOD_MR,    KM_MOD_OMR,  \
/**/    /**/         KM_TRNS_BL,    /**/           /**/           KM_MOD_BR,    /**/         \
/**/    /**/         KM_FILL_OTHL,  KM_FILL_ITHL,  KM_MOD_ITHR,   KM_MOD_OTHR
