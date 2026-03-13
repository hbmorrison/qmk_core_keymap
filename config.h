#pragma once

// Define the module name so other modules can detect that it is available.

#define CORE_KEYMAP_MODULE

// Set various terms and timeouts.

#define TAPPING_TERM 175
#define AUTO_SHIFT_TIMEOUT 175
#define RETRO_SHIFT 500
#define ONESHOT_TIMEOUT 2000
#define CAPS_WORD_IDLE_TIMEOUT 2000

// Enable permissive hold.

#define PERMISSIVE_HOLD

// Custom keys module options.

#define CUSTOM_KEYS_INCLUDE_USER_FUNCTIONS

// Define layouts that will allow preprocessor substitutions.

#define LAYOUT_ferris_sweep(...) LAYOUT_split_3x5_2(__VA_ARGS__)
#define LAYOUT_zilpzalp(...) LAYOUT(__VA_ARGS__)
