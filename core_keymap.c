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

#define MASK_LNUMX (LAYER_BIT(LAYER_LNUM) | LAYER_BIT(LAYER_LEXT))
#define MASK_RNUMX (LAYER_BIT(LAYER_RNUM) | LAYER_BIT(LAYER_REXT))
#define MASK_LSYMX (LAYER_BIT(LAYER_LSYM) | LAYER_BIT(LAYER_LEXT))
#define MASK_RSYMX (LAYER_BIT(LAYER_RSYM) | LAYER_BIT(LAYER_REXT))
#define MASK_LCTL  (LAYER_BIT(LAYER_LSYM) | LAYER_BIT(LAYER_LNUM))
#define MASK_LCTLX (LAYER_BIT(LAYER_LSYM) | LAYER_BIT(LAYER_LNUM)  | LAYER_BIT(LAYER_LEXT))
#define MASK_RCTL  (LAYER_BIT(LAYER_RSYM) | LAYER_BIT(LAYER_RNUM))

// When defined, this function is called by the conditional layers module just
// after the keyboard has been initialised, to set up conditional layers.

void add_conditional_layers() {

  // Add the extended number layer, extended nav layer and both extended symbol
  // layers as conditional layers.

  set_conditional_layer_mask(LAYER_LNUMX, MASK_LNUMX);
  set_conditional_layer_mask(LAYER_RNUMX, MASK_RNUMX);
  set_conditional_layer_mask(LAYER_LSYMX, MASK_LSYMX);
  set_conditional_layer_mask(LAYER_RSYMX, MASK_RSYMX);

  // Add the function layer and its extended layer as conditional layers.

  set_conditional_layer_mask(LAYER_LCTL,  MASK_LCTL);
  set_conditional_layer_mask(LAYER_LCTLX, MASK_LCTLX);

  // Add the controls layer as a conditional layer.

  set_conditional_layer_mask(LAYER_RCTL, MASK_RCTL);
};
