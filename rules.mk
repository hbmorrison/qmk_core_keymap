# Add the combos code during introspection if enabled.

ifeq ($(strip $(COMBO_ENABLE)), yes)
  INTROSPECTION_KEYMAP_C = combos.c
endif
