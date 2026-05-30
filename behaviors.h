#pragma once

/*
BEHAVIORS

keyboard: corne (https://github.com/foostan/crkbd)
firmware: qmk (https://docs.qmk.fm/)
layout: hands down (https://sites.google.com/alanreiser.com/handsdown/)

nb@2026.05.30
*/


// ////////// KEY OVERRIDES //////////

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


// :::::::::: MEDIA ::::::::::

const key_override_t ko_volup_prev = ko_make_basic(MOD_MASK_SHIFT, KC_VOLU, KC_MPRV);
const key_override_t ko_volmute_pp = ko_make_basic(MOD_MASK_SHIFT, KC_MUTE, KC_MPLY);
const key_override_t ko_voldn_next = ko_make_basic(MOD_MASK_SHIFT, KC_VOLD, KC_MNXT);


// :::::::::: REGISTRATION ::::::::::

// register all overrides globally
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
    NULL
};
