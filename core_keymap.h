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

// Include other module headers.

#include "conditional_layers.h"
#include "handed_mods.h"

// Define the layers.

enum {
  LAYER_BASE,
  LAYER_LEXT,
  LAYER_REXT,
  LAYER_LSYM,
  LAYER_LSYM_EXT,
  LAYER_RSYM,
  LAYER_RSYM_EXT,
  LAYER_NUM,
  LAYER_NUM_EXT,
  LAYER_NAV,
  LAYER_NAV_EXT,
  LAYER_FUNC,
  LAYER_FUNC_EXT,
  LAYER_CTLS,
  LAYER_LMOD,
  LAYER_RMOD
};

// Check whether the standard keycodes header has been overriden.

#ifdef CORE_KEYMAP_THUMB_MODS
#  define CORE_KEYCODES_H "core_keymap_keycodes_thumb_mods.h"
#endif

// Check whether the standard keyboard header has been overriden.

#if defined(CORE_KEYMAP_ZILPZALP) || defined(CORE_KEYMAP_ZILPZALP_ALT)
#  define CORE_KEYBOARD_H "core_keymap_keyboard_zilpzalp.h"
#endif

// Use the standard keycodes and keyboard headers by default if no alternatives
// have been defined.

#ifndef CORE_KEYCODES_H
#  define CORE_KEYCODES_H "core_keymap_keycodes.h"
#endif

#ifndef CORE_KEYBOARD_H
#  define CORE_KEYBOARD_H "core_keymap_keyboard.h"
#endif

// Include the fillers headers first, since they have no dependencies.

#include "core_keymap_fillers.h"

// The keycodes header also has no dependencies.

#include CORE_KEYCODES_H

// The extended keymap header depends on the defines in the keycodes header.

#include "core_keymap_extended.h"

// The keyboard header depends on all of the above.

#include CORE_KEYBOARD_H
