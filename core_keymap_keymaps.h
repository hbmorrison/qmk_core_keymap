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

// Define the keymaps for each layer.

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [LAYER_BASE]   = CORE_KEYMAP_LAYOUT( LY_BASE ),
  [LAYER_LBASEX] = CORE_KEYMAP_LAYOUT( LY_LBASEX ),
  [LAYER_RBASEX] = CORE_KEYMAP_LAYOUT( LY_RBASEX ),
  [LAYER_LSYM]   = CORE_KEYMAP_LAYOUT( LY_LSYM ),
  [LAYER_LSYMX]  = CORE_KEYMAP_LAYOUT( LY_LSYMX ),
  [LAYER_RSYM]   = CORE_KEYMAP_LAYOUT( LY_RSYM ),
  [LAYER_RSYMX]  = CORE_KEYMAP_LAYOUT( LY_RSYMX ),
  [LAYER_LNUM]   = CORE_KEYMAP_LAYOUT( LY_LNUM ),
  [LAYER_LNUMX]  = CORE_KEYMAP_LAYOUT( LY_LNUMX ),
  [LAYER_RNUM]   = CORE_KEYMAP_LAYOUT( LY_RNUM ),
  [LAYER_RNUMX]  = CORE_KEYMAP_LAYOUT( LY_RNUMX ),
  [LAYER_LCTL]   = CORE_KEYMAP_LAYOUT( LY_LCTL ),
  [LAYER_LCTLX]  = CORE_KEYMAP_LAYOUT( LY_LCTLX ),
  [LAYER_RCTL]   = CORE_KEYMAP_LAYOUT( LY_RCTL ),
  [LAYER_LMOD]   = CORE_KEYMAP_LAYOUT( LY_LMOD ),
  [LAYER_RMOD]   = CORE_KEYMAP_LAYOUT( LY_RMOD )
};
