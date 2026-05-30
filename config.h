#pragma once

/*
SETTINGS

keyboard: corne (https://github.com/foostan/crkbd)
firmware: qmk (https://docs.qmk.fm/)
layout: hands down (https://sites.google.com/alanreiser.com/handsdown/)

nb@2026.05.30
*/


// ////////// DEFINITION //////////

#undef MASTER_LEFT
#define MASTER_RIGHT


// :::::::::: TIMING ::::::::::

// combo & tapping timing
#define COMBO_TERM 65
#define TAPPING_TERM 200


// :::::::::: DEBOUNCE ::::::::::

// debounce tuning
#define DEBOUNCE 5


// :::::::::: HOMEROW MODS ::::::::::

// homerow mods tuning
#define TAPPING_FORCE_HOLD
