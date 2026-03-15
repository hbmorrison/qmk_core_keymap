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

#include "core_keymap.h"

// Include other module headers.

#include "conditional_layers.h"

// Define the layer masks for the conditional layers.

#define MASK_NUM_EXT  (LAYER_BIT(LAYER_NUM)  | LAYER_BIT(LAYER_LEXT))
#define MASK_NAV_EXT  (LAYER_BIT(LAYER_NAV)  | LAYER_BIT(LAYER_REXT))
#define MASK_LSYM_EXT (LAYER_BIT(LAYER_LSYM) | LAYER_BIT(LAYER_LEXT))
#define MASK_RSYM_EXT (LAYER_BIT(LAYER_RSYM) | LAYER_BIT(LAYER_REXT))
#define MASK_FUNC     (LAYER_BIT(LAYER_LSYM) | LAYER_BIT(LAYER_NUM))
#define MASK_FUNC_EXT (LAYER_BIT(LAYER_LSYM) | LAYER_BIT(LAYER_NUM)   | LAYER_BIT(LAYER_LEXT))
#define MASK_CTLS     (LAYER_BIT(LAYER_RSYM) | LAYER_BIT(LAYER_NAV))

// When defined, this function is called by the conditional layers module just
// after the keyboard has been initialised, to set up conditional layers.

void add_conditional_layers() {

  // Add the extended number layer, extended nav layer and both extended symbol
  // layers as conditional layers.

  set_conditional_layer_mask(LAYER_NUM_EXT,  MASK_NUM_EXT);
  set_conditional_layer_mask(LAYER_NAV_EXT,  MASK_NAV_EXT);
  set_conditional_layer_mask(LAYER_LSYM_EXT, MASK_LSYM_EXT);
  set_conditional_layer_mask(LAYER_RSYM_EXT, MASK_RSYM_EXT);

  // Add the function layer and its extended layer as conditional layers.

  set_conditional_layer_mask(LAYER_FUNC,     MASK_FUNC);
  set_conditional_layer_mask(LAYER_FUNC_EXT, MASK_FUNC_EXT);

  // Add the controls layer as a conditional layer.

  set_conditional_layer_mask(LAYER_CTLS, MASK_CTLS);
};
