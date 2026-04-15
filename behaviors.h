#pragma once

/*
BEHAVIORS (Key Overrides)

keyboard: corne (crkbd)
firmware: qmk (RP2040)
layout: hands down
*/

// In QMK, Mod-Morphs are handled via Key Overrides.
// We intercept the base physical key when Shift is held and output the alternate key.

// shift_excl_qmrk
const key_override_t ko_excl_qmrk = ko_make_basic(MOD_MASK_SHIFT, KC_EXLM, KC_QUES);
// shift_fslh_star
const key_override_t ko_fslh_star = ko_make_basic(MOD_MASK_SHIFT, KC_SLSH, KC_ASTR);
// shift_hash_dllr
const key_override_t ko_hash_dllr = ko_make_basic(MOD_MASK_SHIFT, KC_HASH, KC_DLR);
// shift_comma_semi
const key_override_t ko_comma_semi = ko_make_basic(MOD_MASK_SHIFT, KC_COMM, KC_SCLN);
// shift_minus_plus
const key_override_t ko_minus_plus = ko_make_basic(MOD_MASK_SHIFT, KC_MINS, KC_PLUS);
// shift_dot_colon
const key_override_t ko_dot_colon = ko_make_basic(MOD_MASK_SHIFT, KC_DOT, KC_COLN);
// shift_dqt_sqt
const key_override_t ko_dqt_sqt = ko_make_basic(MOD_MASK_SHIFT, KC_DQUO, KC_QUOT);

// Media
const key_override_t ko_volup_prev = ko_make_basic(MOD_MASK_SHIFT, KC_VOLU, KC_MPRV);
const key_override_t ko_volmute_pp = ko_make_basic(MOD_MASK_SHIFT, KC_MUTE, KC_MPLY);
const key_override_t ko_voldn_next = ko_make_basic(MOD_MASK_SHIFT, KC_VOLD, KC_MNXT);

// Backspace with layer access that works with modifiers
const key_override_t ko_bspc_sbspc = ko_make_basic(MOD_MASK_SHIFT, KC_BSPC, LALT(KC_BSPC));

// Register all overrides globally (Fixed array syntax here)
const key_override_t *key_overrides[] = {
    &ko_excl_qmrk,
    &ko_fslh_star,
    &ko_hash_dllr,
    &ko_comma_semi,
    &ko_minus_plus,
    &ko_dot_colon,
    &ko_dqt_sqt,
    &ko_volup_prev,
    &ko_volmute_pp,
    &ko_voldn_next,
    &ko_bspc_sbspc,
    NULL // MUST end with NULL
};
