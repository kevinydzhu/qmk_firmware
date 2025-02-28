#include "wyse_ascii.h"

enum custom_keycodes {
    QMK_CLEAR  = SAFE_RANGE,
    CSCO_WR
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    case QMK_CLEAR:
        if (record->event.pressed) {
            SEND_STRING("clear\n");
        } else {
        }
        break;
    case CSCO_WR:
        if (record->event.pressed) {
            SEND_STRING("copy running-config startup-config\n");
        }
        break;
    }
    return true;
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
    KC_F1, KC_F2, KC_F3, KC_F4,     KC_F5, KC_F6, KC_F7, KC_F8,     KC_F9, KC_F10, KC_F11, KC_F12,     KC_PGDN, KC_PGUP, KC_KB_VOLUME_DOWN, KC_KB_VOLUME_UP,    KC_LCAP, KC_PAUS,

    KC_ESC, KC_1,KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8,  KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC, KC_DEL,                                     KC_NUM, KC_PSLS, KC_PAST, KC_PPLS, 
    KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_GRV, KC_PSCR,                                    KC_P7, KC_P8, KC_P9, KC_PMNS,
    KC_LCTL, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT, KC_END,                                          KC_P4, KC_P5, KC_P6, KC_PCMM,
    KC_LWIN, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_UP, KC_HOME,                            KC_P1, KC_P2, KC_P3,
    KC_LALT, KC_SPC, KC_BSLS, KC_LEFT, KC_DOWN, KC_RIGHT,                                                                                     KC_P0, KC_PDOT, KC_PENT
),

    [1] = LAYOUT(
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                                  QK_BOOT, NK_TOGG,

    KC_TRNS,KC_TRNS,KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,    KC_TRNS,    KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS,                           KC_INS,    KC_TRNS,   KC_TRNS,   QMK_CLEAR, 
    KC_TRNS,  KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS, CSCO_WR,     KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,
    KC_TRNS, KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,         KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,
    KC_TRNS, KC_TRNS,          KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_PGUP, KC_TRNS,          KC_TRNS,   KC_TRNS,   KC_TRNS,
    KC_LGUI,                       KC_TRNS,                                                            KC_TRNS,                           KC_TRNS, KC_PGDN, KC_TRNS,          KC_TRNS,   KC_TRNS,              KC_TRNS
)
};
