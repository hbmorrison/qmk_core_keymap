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

#define LAYOUT_BASE  /**/           /**/           /**/           /**/          /**/         \
/**/    KM_BASE_OTL, KM_BASE_TL,    KM_BASE_ITL,   KM_BASE_ITR,   KM_BASE_TR,   KM_BASE_OTR, \
/**/    KM_BASE_OML, KM_BASE_ML,    KM_BASE_IML,   KM_BASE_IMR,   KM_BASE_MR,   KM_BASE_OMR, \
/**/    KM_BASE_OBL, KM_BASE_BL,    KM_BASE_IBL,   KM_BASE_IBR,   KM_BASE_BR,   KM_BASE_OBR, \
/**/    /**/         KM_BASE_OTHL,  KM_BASE_ITHL,  KM_BASE_ITHR,  KM_BASE_OTHR
#define LAYOUT_LSYM  /**/           /**/           /**/           /**/          /**/         \
/**/    KM_SYM_OTL,  KM_SYM_TL,     KM_SYM_ITL,    KM_FILL_ITR,   KM_FILL_TR,   KM_FILL_OTR, \
/**/    KM_SYM_OML,  KM_SYM_ML,     KM_SYM_IML,    KM_FILL_IMR,   KM_FILL_MR,   KM_FILL_OMR, \
/**/    KM_SYM_OBL,  KM_SYM_BL,     KM_SYM_IBL,    KM_FILL_IBR,   KM_FILL_BR,   KM_FILL_OBR, \
/**/    /**/         KM_SYM_OTHL,   KM_SYM_ITHL,   KM_FILL_ITHR,  KM_FILL_OTHR
#define LAYOUT_RSYM  /**/           /**/           /**/           /**/          /**/         \
/**/    KM_FILL_OTL, KM_FILL_TL,    KM_FILL_ITL,   KM_SYM_ITR,    KM_SYM_TR,    KM_SYM_OTR,  \
/**/    KM_FILL_OML, KM_FILL_ML,    KM_FILL_IML,   KM_SYM_IMR,    KM_SYM_MR,    KM_SYM_OMR,  \
/**/    KM_FILL_OBL, KM_FILL_BL,    KM_FILL_IBL,   KM_SYM_IBR,    KM_SYM_BR,    KM_SYM_OBR,  \
/**/    /**/         KM_FILL_OTHL,  KM_FILL_ITHL,  KM_SYM_ITHR,   KM_SYM_OTHR
#define LAYOUT_NUM  /**/           /**/           /**/           /**/          /**/         \
/**/    KM_NUM_OTL,  KM_NUM_TL,     KM_NUM_ITL,    KM_FILL_ITR,   KM_FILL_TR,   KM_FILL_OTR, \
/**/    KM_NUM_OML,  KM_NUM_ML,     KM_NUM_IML,    KM_FILL_IMR,   KM_FILL_MR,   KM_FILL_OMR, \
/**/    KM_NUM_OBL,  KM_NUM_BL,     KM_NUM_IBL,    KM_FILL_IBR,   KM_FILL_BR,   KM_FILL_OBR, \
/**/    /**/         KM_NUM_OTHL,   KM_NUM_ITHL,   KM_FILL_ITHR,  KM_FILL_OTHR
#define LAYOUT_NAV   /**/           /**/           /**/           /**/          /**/         \
/**/    KM_FILL_OTL, KM_FILL_TL,    KM_FILL_ITL,   KM_NAV_ITR,    KM_NAV_TR,    KM_NAV_OTR,  \
/**/    KM_FILL_OML, KM_FILL_ML,    KM_FILL_IML,   KM_NAV_IMR,    KM_NAV_MR,    KM_NAV_OMR,  \
/**/    KM_FILL_OBL, KM_FILL_BL,    KM_FILL_IBL,   KM_NAV_IBR,    KM_NAV_BR,    KM_NAV_OBR,  \
/**/    /**/         KM_FILL_OTHL,  KM_FILL_ITHL,  KM_NAV_ITHR,   KM_NAV_OTHR
#define LAYOUT_FUNC  /**/           /**/           /**/           /**/          /**/         \
/**/    KM_FUNC_OTL, KM_FUNC_TL,    KM_FUNC_ITL,   KM_FILL_ITR,   KM_FILL_TR,   KM_FILL_OTR, \
/**/    KM_FUNC_OML, KM_FUNC_ML,    KM_FUNC_IML,   KM_FILL_IMR,   KM_FILL_MR,   KM_FILL_OMR, \
/**/    KM_FUNC_OBL, KM_FUNC_BL,    KM_FUNC_IBL,   KM_FILL_IBR,   KM_FILL_BR,   KM_FILL_OBR, \
/**/    /**/         KM_FUNC_OTHL,  KM_FUNC_ITHL,  KM_FILL_ITHR,  KM_FILL_OTHR
#define LAYOUT_CTL   /**/           /**/           /**/           /**/          /**/         \
/**/    KM_FILL_OTL, KM_FILL_TL,    KM_FILL_ITL,   KM_CTL_ITR,    KM_CTL_TR,    KM_CTL_OTR,  \
/**/    KM_FILL_OML, KM_FILL_ML,    KM_FILL_IML,   KM_CTL_IMR,    KM_CTL_MR,    KM_CTL_OMR,  \
/**/    KM_FILL_OBL, KM_FILL_BL,    KM_FILL_IBL,   KM_CTL_IBR,    KM_CTL_BR,    KM_CTL_OBR,  \
/**/    /**/         KM_FILL_OTHL,  KM_FILL_ITHL,  KM_CTL_ITHR,   KM_CTL_OTHR
