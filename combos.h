#pragma once

/*
COMBOS

keyboard: corne (https://github.com/foostan/crkbd)
firmware: qmk (https://docs.qmk.fm/)
layout: hands down (https://sites.google.com/alanreiser.com/handsdown/)

nb@2026.05.30
*/


// ////////// ENUMS //////////

enum combos {
    C_PASTE, C_COPY, C_CUT, C_REDO, C_UNDO, C_QUIT, C_NEW, C_CLOSE,
    C_LBRC, C_RBRC, C_LPAR, C_RPAR, C_LBKT, C_RBKT, C_LT, C_GT,
    C_AT, C_UNDER, C_EQUAL, C_AMPS, C_ALL, C_FIND, C_ESC
};


// ////////// COMBOS //////////

// :::::::::: CLIPBOARD ::::::::::

const uint16_t PROGMEM paste_combo[] = {KC_M, KC_G, COMBO_END};
const uint16_t PROGMEM copy_combo[]  = {LGUI_T(KC_N), LSFT_T(KC_T), COMBO_END}; // zmk lcmd = qmk lgui
const uint16_t PROGMEM cut_combo[]   = {KC_L, KC_D, COMBO_END};


// :::::::::: REVISION ::::::::::

const uint16_t PROGMEM redo_combo[]  = {KC_W, KC_M, COMBO_END};
const uint16_t PROGMEM undo_combo[]  = {LALT_T(KC_C), LGUI_T(KC_N), COMBO_END};


// :::::::::: WINDOW ::::::::::

const uint16_t PROGMEM quit_combo[]  = {KC_G, KC_EXLM, COMBO_END};
const uint16_t PROGMEM new_combo[]   = {LSFT_T(KC_T), KC_K, COMBO_END};
const uint16_t PROGMEM close_combo[] = {KC_D, KC_SLSH, COMBO_END};


// :::::::::: STRUCTURAL ::::::::::

const uint16_t PROGMEM lbrc_combo[]  = {KC_COMM, RSFT_T(KC_A), COMBO_END};
const uint16_t PROGMEM rbrc_combo[]  = {KC_MINS, KC_U, COMBO_END};
const uint16_t PROGMEM lpar_combo[]  = {RSFT_T(KC_A), RGUI_T(KC_E), COMBO_END};
const uint16_t PROGMEM rpar_combo[]  = {KC_U, KC_O, COMBO_END};
const uint16_t PROGMEM lbkt_combo[]  = {RGUI_T(KC_E), RALT_T(KC_I), COMBO_END};
const uint16_t PROGMEM rbkt_combo[]  = {KC_O, KC_Y, COMBO_END};
const uint16_t PROGMEM lt_combo[]    = {RALT_T(KC_I), RCTL_T(KC_H), COMBO_END};
const uint16_t PROGMEM gt_combo[]    = {KC_Y, KC_F, COMBO_END};


// :::::::::: SPECIAL ::::::::::

const uint16_t PROGMEM at_combo[]    = {KC_HASH, KC_DOT, COMBO_END};
const uint16_t PROGMEM under_combo[] = {KC_DOT, KC_DQUO, COMBO_END};
const uint16_t PROGMEM equal_combo[] = {KC_DQUO, KC_J, COMBO_END};
const uint16_t PROGMEM amps_combo[]  = {KC_J, KC_B, COMBO_END};


// :::::::::: OTHER ::::::::::

const uint16_t PROGMEM all_combo[]   = {LCTL_T(KC_S), LALT_T(KC_C), COMBO_END};
const uint16_t PROGMEM find_combo[]  = {KC_P, KC_L, COMBO_END};
const uint16_t PROGMEM esc_combo[]   = {KC_Q, LT(SYMB, KC_SPC), COMBO_END}; // mapped directly to lh1 + rh1 based on your positions.dtsi


// ////////// DEFINITION //////////

// dictionary mapping combos to result keycodes
combo_t key_combos[] = {
    [C_PASTE] = COMBO(paste_combo, LGUI(KC_V)),
    [C_COPY]  = COMBO(copy_combo,  LGUI(KC_C)),
    [C_CUT]   = COMBO(cut_combo,   LGUI(KC_X)),
    [C_REDO]  = COMBO(redo_combo,  LGUI(LSFT(KC_Z))),
    [C_UNDO]  = COMBO(undo_combo,  LGUI(KC_Z)),
    [C_QUIT]  = COMBO(quit_combo,  LGUI(KC_Q)),
    [C_NEW]   = COMBO(new_combo,   LGUI(KC_N)),
    [C_CLOSE] = COMBO(close_combo, LGUI(KC_W)),

    // qmk keycodes for brackets
    [C_LBRC]  = COMBO(lbrc_combo,  KC_LCBR),
    [C_RBRC]  = COMBO(rbrc_combo,  KC_RCBR),
    [C_LPAR]  = COMBO(lpar_combo,  KC_LPRN),
    [C_RPAR]  = COMBO(rpar_combo,  KC_RPRN),
    [C_LBKT]  = COMBO(lbkt_combo,  KC_LBRC),
    [C_RBKT]  = COMBO(rbkt_combo,  KC_RBRC),
    [C_LT]    = COMBO(lt_combo,    KC_LT),
    [C_GT]    = COMBO(gt_combo,    KC_GT),

    [C_AT]    = COMBO(at_combo,    KC_AT),
    [C_UNDER] = COMBO(under_combo, KC_UNDS),
    [C_EQUAL] = COMBO(equal_combo, KC_EQL),
    [C_AMPS]  = COMBO(amps_combo,  KC_AMPR),

    [C_ALL]   = COMBO(all_combo,   LGUI(KC_F16)),
    [C_FIND]  = COMBO(find_combo,  LGUI(KC_F)),
    [C_ESC]   = COMBO(esc_combo,   KC_ESC),
};
