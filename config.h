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

// Define the module name so other modules can detect that it is available.

#define CORE_KEYMAP_MODULE_AVAILABLE

// Tell the custom keys module to compile in the default _user() functions.

#define CUSTOM_KEYS_INCLUDE_USER_FUNCTIONS

// Set various terms and timeouts.

#define TAPPING_TERM 200
#define AUTO_SHIFT_TIMEOUT 180
#define RETRO_SHIFT 600
#define ONESHOT_TIMEOUT 2000
#define CAPS_WORD_IDLE_TIMEOUT 2000

// Enable permissive hold.

#define PERMISSIVE_HOLD
