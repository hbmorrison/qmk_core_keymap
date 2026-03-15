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

#define KM_SYMX_TR KM_SYM_ITR, KM_SYM_CTR, KM_SYM_OTR
#define KM_SYMX_MR KM_SYM_IMR, KM_SYM_CMR, KM_SYM_OMR
#define KM_SYMX_BR KM_SYM_IBR, KM_SYM_CBR, KM_SYM_OBR

// Define the extended number and navigation layers.

#define KM_NUMX_TL KM_NUM_OTL, KM_NUM_CTL, KM_NUM_ITL
#define KM_NUMX_ML KM_NUM_OML, KM_NUM_CML, KM_NUM_IML
#define KM_NUMX_BL KM_NUM_OBL, KM_NUM_CBL, KM_NUM_IBL

#define KM_NAVX_TR KM_NAV_ITR, KM_NAV_CTR, KM_NAV_OTR
#define KM_NAVX_MR KM_NAV_IMR, KM_NAV_CMR, KM_NAV_OMR
#define KM_NAVX_BR KM_NAV_IBR, KM_NAV_CBR, KM_NAV_OBR

// Define the extended function and control layers.

#define KM_FUNCX_TL KM_FUNC_OTL, KM_FUNC_CTL, KM_FUNC_ITL
#define KM_FUNCX_ML KM_FUNC_OML, KM_FUNC_CML, KM_FUNC_IML
#define KM_FUNCX_BL KM_FUNC_OBL, KM_FUNC_CBL, KM_FUNC_IBL

#define KM_CTLSX_TR KM_CTLS_ITR, KM_CTLS_CTR, KM_CTLS_OTR
#define KM_CTLSX_MR KM_CTLS_IMR, KM_CTLS_CMR, KM_CTLS_OMR
#define KM_CTLSX_BR KM_CTLS_IBR, KM_CTLS_CBR, KM_CTLS_OBR
