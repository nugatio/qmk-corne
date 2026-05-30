QMK config for corne split keyboard based on hands down neu virbranium v (Neu-vv)

keyboard: corne (https://github.com/foostan/crkbd)
firmware: qmk (https://docs.qmk.fm/)
layout: hands down neu virbranium v (https://sites.google.com/alanreiser.com/handsdown/home/hands-down-neu#h.julmingx5jxo)


                          LAYOUT
     ╭─────────────────────╮ ╭─────────────────────╮
ESC  │  X   W   M   G   !? │ │ #$  .:  "'   J   B  │ VUP/PRV
Z    │  S   C   N   T   K  │ │ ,;   A   E   I   H  │ VM/PP
CAPS │  V   P   L   D  / * │ │ -+   U   O   Y   F  │ VDN/NXT
     ╰───────╮  Q   R  BSP │ │ SPC RET TAB ╭───────╯
             ╰─────────────╯ ╰─────────────╯


CONFIG CONTENTS
overview of all layers      > overview.txt
quick adjust settings       > config.h
main file                   > keymap.c
behavior config             > behaviors.h
combo config                > combos.h
build rules                 > rules.mk


HELPFUL INFORMATION
combo: combine multiple keypresses to output a different key
[https://docs.qmk.fm/#/feature_combo]

hold-tab: key will output the 'hold' behavior if it's held for a while, and output the 'tap' behavior when it's tapped quickly
[https://docs.qmk.fm/#/tap_hold]

key overrides: invokes a different behavior depending on whether any of the specified modifiers are being held during the key press (analogous to mod-morph)
[https://docs.qmk.fm/#/feature_key_overrides]
