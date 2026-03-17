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

// Unused thumb keys are always transparent.

#define LY_FILL_OTHL KC_TRNS
#define LY_FILL_ITHL KC_TRNS
#define LY_FILL_ITHR KC_TRNS
#define LY_FILL_OTHR KC_TRNS

// Fillers for left and right layers. Note that the middle row is transparent so
// that layer-tap keys will not have issues with hold actions.

#define LY_FILL_TL KC_NO,   KC_NO,   KC_NO
#define LY_FILL_ML KC_TRNS, KC_TRNS, KC_TRNS
#define LY_FILL_BL KC_NO,   KC_NO,   KC_NO

#define LY_FILL_TR  KC_NO,   KC_NO,   KC_NO
#define LY_FILL_MR  KC_TRNS, KC_TRNS, KC_TRNS
#define LY_FILL_BR  KC_NO,   KC_NO,   KC_NO

#define LY_FILL_OTL KC_NO
#define LY_FILL_OML KC_NO
#define LY_FILL_OBL KC_NO

#define LY_FILL_CTL KC_NO
#define LY_FILL_CML KC_NO
#define LY_FILL_CBL KC_NO

#define LY_FILL_ITL KC_NO
#define LY_FILL_IML KC_NO
#define LY_FILL_IBL KC_NO

#define LY_FILL_ITR KC_NO
#define LY_FILL_IMR KC_NO
#define LY_FILL_IBR KC_NO

#define LY_FILL_CTR KC_NO
#define LY_FILL_CMR KC_NO
#define LY_FILL_CBR KC_NO

#define LY_FILL_OTR KC_NO
#define LY_FILL_OMR KC_NO
#define LY_FILL_OBR KC_NO

// Transparent fillers for left and right layers.

#define LY_TRNS_TL KC_TRNS, KC_TRNS, KC_TRNS
#define LY_TRNS_ML KC_TRNS, KC_TRNS, KC_TRNS
#define LY_TRNS_BL KC_TRNS, KC_TRNS, KC_TRNS

#define LY_TRNS_TR KC_TRNS, KC_TRNS, KC_TRNS
#define LY_TRNS_MR KC_TRNS, KC_TRNS, KC_TRNS
#define LY_TRNS_BR KC_TRNS, KC_TRNS, KC_TRNS

#define LY_TRNS_OTL KC_TRNS
#define LY_TRNS_OML KC_TRNS
#define LY_TRNS_OBL KC_TRNS

#define LY_TRNS_CTL KC_TRNS
#define LY_TRNS_CML KC_TRNS
#define LY_TRNS_CBL KC_TRNS

#define LY_TRNS_ITL KC_TRNS
#define LY_TRNS_IML KC_TRNS
#define LY_TRNS_IBL KC_TRNS

#define LY_TRNS_ITR KC_TRNS
#define LY_TRNS_IMR KC_TRNS
#define LY_TRNS_IBR KC_TRNS

#define LY_TRNS_CTR KC_TRNS
#define LY_TRNS_CMR KC_TRNS
#define LY_TRNS_CBR KC_TRNS

#define LY_TRNS_OTR KC_TRNS
#define LY_TRNS_OMR KC_TRNS
#define LY_TRNS_OBR KC_TRNS
