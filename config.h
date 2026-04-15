#pragma once

/*
SETTINGS

keyboard: corne (crkbd)
firmware: qmk (RP2040)
layout: hands down
*/

// Tell QMK that the side plugged into the computer is the RIGHT half
#undef MASTER_LEFT
#define MASTER_RIGHT

// Combo & Tapping timing
#define COMBO_TERM 65
#define TAPPING_TERM 200

// Debounce tuning (Standard QMK equivalent to ZMK 1ms press/7ms release eager debounce)
#define DEBOUNCE 5

// Homerow Mods Tuning (Mimics ZMK's flavor = "tap-preferred")
#define PERMISSIVE_HOLD
#define TAPPING_FORCE_HOLD
