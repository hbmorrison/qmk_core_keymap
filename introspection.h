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

// Include standard QMK headers.

#include QMK_KEYBOARD_H

// Use introspection to add the keymap.

#include "core_keymap.h"

// Define layouts for each layer.

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [LAYER_BASE]   = CORE_KEYMAP_LAYOUT( LAYOUT_BASE ),
  [LAYER_LSYM]   = CORE_KEYMAP_LAYOUT( LAYOUT_LSYM ),
  [LAYER_RSYM]   = CORE_KEYMAP_LAYOUT( LAYOUT_RSYM ),
  [LAYER_LSYMX]  = CORE_KEYMAP_LAYOUT( LAYOUT_LSYMX ),
  [LAYER_RSYMX]  = CORE_KEYMAP_LAYOUT( LAYOUT_RSYMX ),
  [LAYER_LNUM]   = CORE_KEYMAP_LAYOUT( LAYOUT_LNUM ),
  [LAYER_RNUM]   = CORE_KEYMAP_LAYOUT( LAYOUT_RNUM ),
  [LAYER_LNUMX]  = CORE_KEYMAP_LAYOUT( LAYOUT_LNUMX ),
  [LAYER_RNUMX]  = CORE_KEYMAP_LAYOUT( LAYOUT_RNUMX ),
  [LAYER_LCTL]   = CORE_KEYMAP_LAYOUT( LAYOUT_LCTL ),
  [LAYER_RCTL]   = CORE_KEYMAP_LAYOUT( LAYOUT_RCTL ),
  [LAYER_LCTLX]  = CORE_KEYMAP_LAYOUT( LAYOUT_LCTLX ),
  [LAYER_RCTLX]  = CORE_KEYMAP_LAYOUT( LAYOUT_RCTLX ),
  [LAYER_LBASEX] = CORE_KEYMAP_LAYOUT( LAYOUT_LBASEX ),
  [LAYER_RBASEX] = CORE_KEYMAP_LAYOUT( LAYOUT_RBASEX )
};
