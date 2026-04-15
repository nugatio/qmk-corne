#include QMK_KEYBOARD_H

/*
CONFIG

keyboard: corne (crkbd)
firmware: qmk (RP2040)
layout: hands down
*/

// layer names
enum layers {
    BASE = 0,
    SYMB = 1,
    NPFN = 2,
    NAVI = 3
};

// Internal Structure inclusion
#include "behaviors.h"
#include "combos.h"

// DEFINITION
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /* base layer layout
         ╭─────────────────────╮ ╭─────────────────────╮
    ESC  │  X   W   M   G   !? │ │ #$  .:  "'   J   B  │ VUP/PRV
    Z    │  S   C   N   T   K  │ │ ,;   A   E   I   H  │ VM/PP
    CAPS │  V   P   L   D   /* │ │ -+   U   O   Y   F  │ VDN/NXT
         ╰───────╮  Q   R  BSP │ │ SPC RET TAB ╭───────╯
                 ╰─────────────╯ ╰─────────────╯
    */
    [BASE] = LAYOUT_split_3x6_3(
        KC_ESC,  KC_X,         KC_W,         KC_M,         KC_G,         KC_EXLM,             KC_HASH, KC_DOT,       KC_DQUO,      KC_J,         KC_B,         KC_VOLU,
        KC_Z,    LCTL_T(KC_S), LALT_T(KC_C), LGUI_T(KC_N), LSFT_T(KC_T), KC_K,                KC_COMM, RSFT_T(KC_A), RGUI_T(KC_E), RALT_T(KC_I), RCTL_T(KC_H), KC_MUTE,
        KC_CAPS, KC_V,         KC_P,         KC_L,         KC_D,         KC_SLSH,             KC_MINS, KC_U,         KC_O,         KC_Y,         KC_F,         KC_VOLD,
                                             KC_Q,         LT(NAVI,KC_R),LT(NPFN,KC_BSPC),    LT(SYMB,KC_SPC), LT(NAVI,KC_ENT), KC_TAB
    ),

    /* symbol layer (symb) layout
        ╭─────────────────────╮ ╭─────────────────────╮
        │                     │ │      _   @   \      │
        │  <   [   (   {      │ │      =   &   |   %  │
        │  >   ]   )   }      │ │      ^   ~          │
        ╰───────╮     INS DEL │ │             ╭───────╯
                ╰─────────────╯ ╰─────────────╯
    */
    [SYMB] = LAYOUT_split_3x6_3(
        KC_NO, KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,             KC_NO, KC_UNDS, KC_AT,   KC_BSLS, KC_NO,   KC_NO,
        KC_NO, KC_LT, KC_LBRC, KC_LPRN, KC_LCBR, KC_NO,             KC_NO, KC_EQL,  KC_AMPR, KC_PIPE, KC_PERC, KC_NO,
        KC_NO, KC_GT, KC_RBRC, KC_RPRN, KC_RCBR, KC_NO,             KC_NO, KC_CIRC, KC_TILD, KC_NO,   KC_NO,   KC_NO,
                               KC_NO,   KC_INS,  KC_DEL,            KC_NO, KC_NO,   KC_NO
    ),

    /* numpad function (npfn) layer layout
        ╭─────────────────────╮ ╭─────────────────────╮
        │  F9 F10 F11 F12 F13 │ │  /   7   8   9   =  │ BUP
        │  F5  F6  F7  F8 F14 │ │  * 4   5   6   +  │
        │  F1  F2  F3  F4 F15 │ │  ,   1   2   3   -  │ BDN
        ╰───────╮         BSP │ │  0  RET  .  ╭───────╯
                ╰─────────────╯ ╰─────────────╯
    */
    [NPFN] = LAYOUT_split_3x6_3(
        KC_NO, KC_F9, KC_F10, KC_F11, KC_F12, KC_F13,            KC_SLSH, KC_7,   KC_8,   KC_9, KC_EQL,  KC_BRIU,
        KC_NO, KC_F5, KC_F6,  KC_F7,  KC_F8,  KC_F14,            KC_ASTR, KC_4,   KC_5,   KC_6, KC_PLUS, KC_NO,
        KC_NO, KC_F1, KC_F2,  KC_F3,  KC_F4,  KC_F15,            KC_COMM, KC_1,   KC_2,   KC_3, KC_MINS, KC_BRID,
                              KC_NO,  KC_NO,  KC_BSPC,           KC_0,    KC_ENT, KC_DOT
    ),

    /* navigation (navi) layer layout
        ╭─────────────────────╮ ╭─────────────────────╮
        │         HOM PUP     │ │     PUP HOM         │
 A⮜ │  ⮜   ⮟   ⮝   ⮞   A⮞ │ │ A⮜   ⮜   ⮝   ⮟   ⮞  │ A⮞
        │         END PDN     │ │     PDN END         │
        ╰───────╮     ADL ABS │ │             ╭───────╯
                ╰─────────────╯ ╰─────────────╯
    */
    [NAVI] = LAYOUT_split_3x6_3(
        KC_NO, KC_NO,   LALT(KC_LEFT), KC_UP,   LALT(KC_RGHT), QK_BOOT,           KC_NO,         KC_PGUP, KC_HOME, KC_F9,   KC_F12,        KC_NO,
        KC_NO, KC_PGUP, KC_LEFT,       KC_DOWN, KC_RGHT,       KC_NO,             LALT(KC_LEFT), KC_LEFT, KC_UP,   KC_DOWN, KC_RGHT,       LALT(KC_RGHT),
        KC_NO, KC_PGDN, KC_HOME,       KC_NO,   KC_END,        KC_NO,             KC_NO,         KC_PGDN, KC_END,  KC_F3,   KC_F10,        KC_NO,
                                       KC_NO,   LALT(KC_DEL),  LALT(KC_BSPC),     KC_NO,         KC_NO,   KC_NO
    )
};
