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

// Define the layers.

enum {
  LAYER_BASE,
  LAYER_LBASEX,
  LAYER_RBASEX,

  LAYER_LSYM,
  LAYER_RSYM,
  LAYER_LSYMX,
  LAYER_RSYMX,

  LAYER_LNUM,
  LAYER_RNUM,
  LAYER_LNUMX,
  LAYER_RNUMX,

  LAYER_LCTL,
  LAYER_RCTL,
  LAYER_LCTLX,

  LAYER_LMOD,
  LAYER_RMOD
};

// Include the keycode definitions.

#include "core_keymap_keycodes.h"

// Work out which keyboard layout to use, defaulting to Ferris Sweep.

#if defined(CORE_KEYMAP_ZILPZALP)
#include "core_keymap_layout_zilpzalp.h"
#else
#include "core_keymap_layout_ferris.h"
#endif
