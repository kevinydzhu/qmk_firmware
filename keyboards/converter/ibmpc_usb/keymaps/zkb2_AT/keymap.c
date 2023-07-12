/* Zenith ZKB2 AT
,----   ,---------------, ,---------------, ----------------, ,-----------.
|Esc|   | F1| F2| F3| F4| | F5| F6| F7| F8| | F9|F10|F11|F12| |PrS|ScL|Pau|
`----   `---------------' `---------------' ----------------' `-----------'
,-----------------------------------------------------------, ,-----------. ,---------------.
|  `|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|   BS  | |Ins|Hom|PgU| |NmL|  /|  *|  -|
|-----------------------------------------------------------| |-----------| |---------------|
| Tab |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]  |   | |Del|End|PgD| |  7|  8|  9| + |
|-------------------------------------------------------'   | `-----------' |------------   |
|  Caps |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '| Enter |               |  4|  5|  6|   |
|-----------------------------------------------------------|     ,---.     |---------------|
|  Shift  |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift|  \|     |Up |     |  1|  2|  3|   |
|-------,-,-----------------------------------------,-,-----| ,-----------. |-----------|   |
| Ctrl  | |  Alt |          Space            |  Alt | | Ctrl| |Lef|Dow|Rig| |   0 |   . |Ent|
`-------' `-----------------------------------------' `-----' `-----------' `---------------'*/
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    LAYOUT_zkb2_at(
        KC_ESC,     KC_F1, KC_F2, KC_F3, KC_F4,  KC_F5, KC_F6, KC_F7, KC_F8,  KC_F9, KC_F10, KC_F11, KC_F12,  KC_PSCR, KC_SCRL, KC_PAUS,                                       \
                                                                                                                                                                               \
        KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL,        KC_BSPC,  KC_INS , KC_HOME, KC_PGUP,  KC_NUM, KC_PSLS, KC_PAST, KC_PMNS,   \
        KC_TAB,   KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC,               KC_DEL , KC_END , KC_PGDN,  KC_P7,  KC_P8,   KC_P9,              \
        KC_CAPS,    KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT,         KC_ENT ,                              KC_P4,  KC_P5,   KC_P6,   KC_PPLS,   \
        KC_LSFT,      KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH,  KC_RSFT, KC_BSLS,           KC_UP           ,  KC_P1,  KC_P2,   KC_P3,              \
        KC_LCTL,     KC_LALT,                   KC_SPC,                              KC_RALT,       KC_RCTL,  KC_LEFT, KC_DOWN, KC_RGHT,  KC_P0,     KC_PDOT,       KC_PENT    \
    ),
};
