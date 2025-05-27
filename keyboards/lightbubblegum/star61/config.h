// Copyright 2025

#pragma once

#define MATRIX_ROWS 5
#define MATRIX_COLS 14

/* key combination for command */
#define IS_COMMAND() (\
    get_mods() == (MOD_BIT(KC_LSFT) | MOD_BIT(KC_RSFT) |\
                    MOD_BIT(KC_LCTL) | MOD_BIT(KC_RCTL))\
)

#define MAGIC_KEY_BOOTLOADER B
