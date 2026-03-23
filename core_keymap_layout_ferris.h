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

// Define the layout macro for the ferris sweep keyboard.

#define CORE_KEYMAP_LAYOUT(...) LAYOUT_split_3x5_2(__VA_ARGS__)

// Define the layers.

#define LAYOUT_BASE   /**/              /**/              /**/              /**/             /**/         \
/**/    KM_BASE_OTL,  KM_BASE_TL,       KM_BASE_ITL,      KM_BASE_ITR,      KM_BASE_TR,      KM_BASE_OTR, \
/**/    KM_BASE_OML,  KM_BASE_ML,       KM_BASE_IML,      KM_BASE_IMR,      KM_BASE_MR,      KM_BASE_OMR, \
/**/    KM_BASE_OBL,  KM_BASE_BL,       KM_BASE_IBL,      KM_BASE_IBR,      KM_BASE_BR,      KM_BASE_OBR, \
/**/    /**/          KM_BASE_OTHL,     KM_BASE_ITHL,     KM_BASE_ITHR,     KM_BASE_OTHR
#define LAYOUT_LBASEX /**/              /**/              /**/              /**/             /**/         \
/**/    KM_FILL_OTL,  KM_BASE_EXT_TL,   KM_FILL_ITL,      KM_FILL_ITR,      KM_FILL_TR,  KM_FILL_OTR, \
/**/    KM_FILL_OML,  KM_BASE_EXT_ML,   KM_FILL_IML,      KM_FILL_IMR,      KM_FILL_MR,  KM_FILL_OMR, \
/**/    KM_FILL_OBL,  KM_BASE_EXT_BL,   KM_FILL_IBL,      KM_FILL_IBR,      KM_FILL_BR,  KM_FILL_OBR, \
/**/    /**/          KM_BASE_EXT_OTHL, KM_BASE_EXT_ITHL, KM_FILL_ITHR,     KM_FILL_OTHR
#define LAYOUT_RBASEX /**/              /**/              /**/              /**/             /**/         \
/**/    KM_FILL_OTL,  KM_FILL_TL,   KM_FILL_ITL,      KM_FILL_ITR,      KM_BASE_EXT_TR,  KM_FILL_OTR, \
/**/    KM_FILL_OML,  KM_FILL_ML,   KM_FILL_IML,      KM_FILL_IMR,      KM_BASE_EXT_MR,  KM_FILL_OMR, \
/**/    KM_FILL_OBL,  KM_FILL_BL,   KM_FILL_IBL,      KM_FILL_IBR,      KM_BASE_EXT_BR,  KM_FILL_OBR, \
/**/    /**/          KM_FILL_OTHL,     KM_FILL_ITHL,     KM_BASE_EXT_ITHR, KM_BASE_EXT_OTHR
#define LAYOUT_LSYM   /**/              /**/              /**/              /**/             /**/         \
/**/    KM_SYM_OTL,   KM_SYM_TL,        KM_SYM_ITL,       KM_FILL_ITR,      KM_FILL_TR,      KM_FILL_OTR, \
/**/    KM_SYM_OML,   KM_SYM_ML,        KM_SYM_IML,       KM_FILL_IMR,      KM_FILL_MR,      KM_FILL_OMR, \
/**/    KM_SYM_OBL,   KM_SYM_BL,        KM_SYM_IBL,       KM_FILL_IBR,      KM_FILL_BR,      KM_FILL_OBR, \
/**/    /**/          KM_SYM_OTHL,      KM_SYM_ITHL,      KM_FILL_ITHR,     KM_FILL_OTHR
#define LAYOUT_RSYM   /**/              /**/              /**/              /**/             /**/         \
/**/    KM_FILL_OTL,  KM_FILL_TL,       KM_FILL_ITL,      KM_SYM_ITR,       KM_SYM_TR,       KM_SYM_OTR,  \
/**/    KM_FILL_OML,  KM_FILL_ML,       KM_FILL_IML,      KM_SYM_IMR,       KM_SYM_MR,       KM_SYM_OMR,  \
/**/    KM_FILL_OBL,  KM_FILL_BL,       KM_FILL_IBL,      KM_SYM_IBR,       KM_SYM_BR,       KM_SYM_OBR,  \
/**/    /**/          KM_FILL_OTHL,     KM_FILL_ITHL,     KM_SYM_ITHR,      KM_SYM_OTHR
#define LAYOUT_LSYMX  /**/              /**/              /**/              /**/             /**/         \
/**/    KM_FILL_OTL,  KM_SYM_EXT_TL,    KM_FILL_ITL,      KM_FILL_ITR,      KM_FILL_TR,      KM_FILL_OTR, \
/**/    KM_FILL_OML,  KM_SYM_EXT_ML,    KM_FILL_IML,      KM_FILL_IMR,      KM_FILL_MR,      KM_FILL_OMR, \
/**/    KM_FILL_OBL,  KM_SYM_EXT_BL,    KM_FILL_IBL,      KM_FILL_IBR,      KM_FILL_BR,      KM_FILL_OBR, \
/**/    /**/          KM_SYM_EXT_OTHL,  KM_SYM_EXT_ITHL,  KM_FILL_ITHR,     KM_FILL_OTHR
#define LAYOUT_RSYMX  /**/              /**/              /**/              /**/             /**/         \
/**/    KM_FILL_OTL,  KM_FILL_TL,       KM_FILL_ITL,      KM_FILL_ITR,      KM_SYM_EXT_TR,   KM_FILL_OTR, \
/**/    KM_FILL_OML,  KM_FILL_ML,       KM_FILL_IML,      KM_FILL_IMR,      KM_SYM_EXT_MR,   KM_FILL_OMR, \
/**/    KM_FILL_OBL,  KM_FILL_BL,       KM_FILL_IBL,      KM_FILL_IBR,      KM_SYM_EXT_BR,   KM_FILL_OBR, \
/**/    /**/          KM_FILL_OTHL,     KM_FILL_ITHL,     KM_SYM_EXT_ITHR,  KM_SYM_EXT_OTHR
#define LAYOUT_LNUM   /**/              /**/              /**/              /**/             /**/         \
/**/    KM_NUM_OTL,   KM_NUM_TL,        KM_NUM_ITL,       KM_FILL_ITR,      KM_FILL_TR,      KM_FILL_OTR, \
/**/    KM_NUM_OML,   KM_NUM_ML,        KM_NUM_IML,       KM_FILL_IMR,      KM_FILL_MR,      KM_FILL_OMR, \
/**/    KM_NUM_OBL,   KM_NUM_BL,        KM_NUM_IBL,       KM_FILL_IBR,      KM_FILL_BR,      KM_FILL_OBR, \
/**/    /**/          KM_NUM_OTHL,      KM_NUM_ITHL,      KM_FILL_ITHR,     KM_FILL_OTHR
#define LAYOUT_RNUM   /**/              /**/              /**/              /**/             /**/         \
/**/    KM_FILL_OTL,  KM_FILL_TL,       KM_FILL_ITL,      KM_NUM_ITR,       KM_NUM_TR,       KM_NUM_OTR,  \
/**/    KM_FILL_OML,  KM_FILL_ML,       KM_FILL_IML,      KM_NUM_IMR,       KM_NUM_MR,       KM_NUM_OMR,  \
/**/    KM_FILL_OBL,  KM_FILL_BL,       KM_FILL_IBL,      KM_NUM_IBR,       KM_NUM_BR,       KM_NUM_OBR,  \
/**/    /**/          KM_FILL_OTHL,     KM_FILL_ITHL,     KM_NUM_ITHR,      KM_NUM_OTHR
#define LAYOUT_LNUMX  /**/              /**/              /**/              /**/             /**/         \
/**/    KM_FILL_OTL,  KM_NUM_EXT_TL,    KM_FILL_ITL,      KM_FILL_ITR,      KM_FILL_TR,      KM_FILL_OTR, \
/**/    KM_FILL_OML,  KM_NUM_EXT_ML,    KM_FILL_IML,      KM_FILL_IMR,      KM_FILL_MR,      KM_FILL_OMR, \
/**/    KM_FILL_OBL,  KM_NUM_EXT_BL,    KM_FILL_IBL,      KM_FILL_IBR,      KM_FILL_BR,      KM_FILL_OBR, \
/**/    /**/          KM_NUM_EXT_OTHL,  KM_NUM_EXT_ITHL,  KM_FILL_ITHR,     KM_FILL_OTHR
#define LAYOUT_RNUMX  /**/              /**/              /**/              /**/             /**/         \
/**/    KM_FILL_OTL,  KM_FILL_TL,       KM_FILL_ITL,      KM_FILL_ITR,      KM_NUM_EXT_TR,   KM_FILL_OTR, \
/**/    KM_FILL_OML,  KM_FILL_ML,       KM_FILL_IML,      KM_FILL_IMR,      KM_NUM_EXT_MR,   KM_FILL_OMR, \
/**/    KM_FILL_OBL,  KM_FILL_BL,       KM_FILL_IBL,      KM_FILL_IBR,      KM_NUM_EXT_BR,   KM_FILL_OBR, \
/**/    /**/          KM_FILL_OTHL,     KM_FILL_ITHL,     KM_NUM_EXT_ITHR,  KM_NUM_EXT_OTHR
#define LAYOUT_LCTL   /**/              /**/              /**/              /**/             /**/         \
/**/    KM_CTL_OTL,   KM_CTL_TL,        KM_CTL_ITL,       KM_FILL_ITR,      KM_FILL_TR,      KM_FILL_OTR, \
/**/    KM_CTL_OML,   KM_CTL_ML,        KM_CTL_IML,       KM_FILL_IMR,      KM_FILL_MR,      KM_FILL_OMR, \
/**/    KM_CTL_OBL,   KM_CTL_BL,        KM_CTL_IBL,       KM_FILL_IBR,      KM_FILL_BR,      KM_FILL_OBR, \
/**/    /**/          KM_CTL_OTHL,      KM_CTL_ITHL,      KM_FILL_ITHR,     KM_FILL_OTHR
#define LAYOUT_RCTL   /**/              /**/              /**/              /**/             /**/         \
/**/    KM_FILL_OTL,  KM_FILL_TL,       KM_FILL_ITL,      KM_CTL_ITR,       KM_CTL_TR,       KM_CTL_OTR,  \
/**/    KM_FILL_OML,  KM_FILL_ML,       KM_FILL_IML,      KM_CTL_IMR,       KM_CTL_MR,       KM_CTL_OMR,  \
/**/    KM_FILL_OBL,  KM_FILL_BL,       KM_FILL_IBL,      KM_CTL_IBR,       KM_CTL_BR,       KM_CTL_OBR,  \
/**/    /**/          KM_FILL_OTHL,     KM_FILL_ITHL,     KM_CTL_ITHR,      KM_CTL_OTHR
#define LAYOUT_LCTLX  /**/              /**/              /**/              /**/             /**/         \
/**/    KM_FILL_OTL,  KM_CTL_EXT_TL,    KM_FILL_ITL,      KM_FILL_ITR,      KM_FILL_TR,      KM_FILL_OTR, \
/**/    KM_FILL_OML,  KM_CTL_EXT_ML,    KM_FILL_IML,      KM_FILL_IMR,      KM_FILL_MR,      KM_FILL_OMR, \
/**/    KM_FILL_OBL,  KM_CTL_EXT_BL,    KM_FILL_IBL,      KM_FILL_IBR,      KM_FILL_BR,      KM_FILL_OBR, \
/**/    /**/          KM_CTL_EXT_OTHL,  KM_CTL_EXT_ITHL,  KM_FILL_ITHR,     KM_FILL_OTHR
#define LAYOUT_RCTLX  /**/              /**/              /**/              /**/             /**/         \
/**/    KM_FILL_OTL,  KM_FILL_TL,       KM_FILL_ITL,      KM_FILL_ITR,      KM_CTL_EXT_TR,   KM_FILL_OTR, \
/**/    KM_FILL_OML,  KM_FILL_ML,       KM_FILL_IML,      KM_FILL_IMR,      KM_CTL_EXT_MR,   KM_FILL_OMR, \
/**/    KM_FILL_OBL,  KM_FILL_BL,       KM_FILL_IBL,      KM_FILL_IBR,      KM_CTL_EXT_BR,   KM_FILL_OBR, \
/**/    /**/          KM_FILL_OTHL,     KM_FILL_ITHL,     KM_CTL_EXT_ITHR,  KM_CTL_EXT_OTHR
#define LAYOUT_LMOD   /**/              /**/              /**/              /**/             /**/         \
/**/    KM_TRNS_OTL,  KM_TRNS_TL,       KM_TRNS_ITL,      KM_MOD_ITR,       KM_MOD_TR,       KM_MOD_OTR,  \
/**/    KM_TRNS_OML,  KM_TRNS_ML,       KM_TRNS_IML,      KM_MOD_IMR,       KM_MOD_MR,       KM_MOD_OMR,  \
/**/    KM_TRNS_OBL,  KM_TRNS_BL,       KM_TRNS_IBL,      KM_MOD_IBR,       KM_MOD_BR,       KM_MOD_OBR,  \
/**/    /**/          KM_TRNS_OTHL,     KM_TRNS_ITHL,     KM_MOD_ITHR,      KM_MOD_OTHR
#define LAYOUT_RMOD   /**/              /**/              /**/              /**/             /**/         \
/**/    KM_MOD_OTL,   KM_MOD_TL,        KM_MOD_ITL,       KM_TRNS_ITR,      KM_TRNS_TR,      KM_TRNS_OTR, \
/**/    KM_MOD_OML,   KM_MOD_ML,        KM_MOD_IML,       KM_TRNS_IMR,      KM_TRNS_MR,      KM_TRNS_OMR, \
/**/    KM_MOD_OBL,   KM_MOD_BL,        KM_MOD_IBL,       KM_TRNS_IBR,      KM_TRNS_BR,      KM_TRNS_OBR, \
/**/    /**/          KM_MOD_OTHL,      KM_MOD_ITHL,      KM_TRNS_ITHR,     KM_TRNS_OTHR
