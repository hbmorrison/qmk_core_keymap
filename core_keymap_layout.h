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

// Define the keymap.

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [LAYER_BASE]     = CORE_KEYMAP_LAYOUT( KM_BASE ),
  [LAYER_LEXT]     = CORE_KEYMAP_LAYOUT( KM_LBASEX ),
  [LAYER_REXT]     = CORE_KEYMAP_LAYOUT( KM_RBASEX ),
  [LAYER_LSYM]     = CORE_KEYMAP_LAYOUT( KM_LSYM ),
  [LAYER_LSYM_EXT] = CORE_KEYMAP_LAYOUT( KM_LSYMX ),
  [LAYER_RSYM]     = CORE_KEYMAP_LAYOUT( KM_RSYM ),
  [LAYER_RSYM_EXT] = CORE_KEYMAP_LAYOUT( KM_RSYMX ),
  [LAYER_NUM]      = CORE_KEYMAP_LAYOUT( KM_NUM ),
  [LAYER_NUM_EXT]  = CORE_KEYMAP_LAYOUT( KM_NUMX ),
  [LAYER_NAV]      = CORE_KEYMAP_LAYOUT( KM_NAV ),
  [LAYER_NAV_EXT]  = CORE_KEYMAP_LAYOUT( KM_NAVX ),
  [LAYER_FUNC]     = CORE_KEYMAP_LAYOUT( KM_FUNC ),
  [LAYER_FUNC_EXT] = CORE_KEYMAP_LAYOUT( KM_FUNCX ),
  [LAYER_CTLS]     = CORE_KEYMAP_LAYOUT( KM_CTLS ),
  [LAYER_LMOD]     = CORE_KEYMAP_LAYOUT( KM_LMOD ),
  [LAYER_RMOD]     = CORE_KEYMAP_LAYOUT( KM_RMOD )
};
