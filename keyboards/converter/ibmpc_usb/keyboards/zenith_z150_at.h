#define XXX KC_NO

// Mapped using: https://www.win.tue.nl/~aeb/linux/kbd/scancodes-10.html
/* Notes - conversions by matrix.c
 * 0x83 (F2)             -> 0x02
 * 0x84 (System Request) -> 0x7F

Zenith z150 AT
,-------.  ,--------------------------------------------------------------------------.
| F1| F2|  |Esc|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|  BS  |NumL|ScrL| SysR|
|-------|  |--------------------------------------------------------------------------|
| F3| F4|  | Tab |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ] |   |  7|  8|  9|  -|
|-------|  |------------------------------------------------------'   |---------------|
| F5| F6|  | Ctrl |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|    Ent|  4|  5|  6|  *|
|-------|  |----------------------------------------------------------------------|---|
| F7| F8|  | Shift |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /| Shift|  \|  1|  2|  3|   |
|-------|  |----------------------------------------------------------------------|   |
| F9|F10|  | Alt | ` |               Space                |CapsLck|   0   |   .   |  +|
`-------'  `--------------------------------------------------------------------------'

Raw scan codes
,-------.  ,--------------------------------------------------------------------------.
| 05| 06|  | 76| 16| 1E| 26| 25| 2E| 36| 3D| 3E| 46| 45| 4E| 55|  66  | 77 | 7E |   84|
|-------|  |--------------------------------------------------------------------------|
| 04| 0C|  |  0D | 15| 1D| 24| 2D| 2C| 35| 3C| 43| 44| 4D| 54|  5B|   | 6C| 75| 7D| 7B|
|-------|  |------------------------------------------------------'   |---------------|
| 03| 0B|  |  14  | 1C| 1B| 23| 2B| 34| 33| 3B| 42| 4B| 4C| 52|     5A| 6B| 73| 74| 7C|
|-------|  |----------------------------------------------------------------------|---|
| 83| 0A|  |   12  | 1A| 22| 21| 2A| 32| 31| 3A| 41| 49| 4A|   59 | 5D| 69| 72| 7A|   |
|-------|  |----------------------------------------------------------------------|   |
| 01| 09|  |  11 | 0E|                 29                 |   58  |   70  |   71  | 79|
`-------'  `--------------------------------------------------------------------------'*/

#define LAYOUT_z150_at(\
    K05, K06,   K76, K16, K1E, K26, K25, K2E, K36, K3D, K3E, K46, K45, K4E, K55,  K66,  K77,   K7E,    K7F, \
    K04, K0C,   K0D,  K15, K1D, K24, K2D, K2C, K35, K3C, K43, K44, K4D, K54, K5B,       K6C, K75, K7D, K7B, \
    K03, K0B,   K14,   K1C, K1B, K23, K2B, K34, K33, K3B, K42, K4B, K4C, K52,     K5A,  K6B, K73, K74, K7C, \
    K02, K0A,   K12,    K1A, K22, K21, K2A, K32, K31, K3A, K41, K49, K4A,   K59,  K5D,  K69, K72, K7A,      \
    K01, K09,   K11,   K0E,                   K29,                          K58,     K70,     K71,     K79  \
) { \
/* 0 */ { XXX, K01, K02, K03, K04, K05, K06, XXX, XXX, K09, K0A, K0B, K0C, K0D, K0E, XXX }, \
/* 1 */ { XXX, K11, K12, XXX, K14, K15, K16, XXX, XXX, XXX, K1A, K1B, K1C, K1D, K1E, XXX }, \
/* 2 */ { XXX, K21, K22, K23, K24, K25, K26, XXX, XXX, K29, K2A, K2B, K2C, K2D, K2E, XXX }, \
/* 3 */ { XXX, K31, K32, K33, K34, K35, K36, XXX, XXX, XXX, K3A, K3B, K3C, K3D, K3E, XXX }, \
/* 5 */ { XXX, K41, K42, K43, K44, K45, K46, XXX, XXX, K49, K4A, K4B, K4C, K4D, K4E, XXX }, \
/* 5 */ { XXX, XXX, K52, XXX, K54, K55, XXX, XXX, K58, K59, K5A, K5B, XXX, K5D, XXX, XXX }, \
/* 6 */ { XXX, XXX, XXX, XXX, XXX, XXX, K66, XXX, XXX, K69, XXX, K6B, K6C, XXX, XXX, XXX }, \
/* 7 */ { K70, K71, K72, K73, K74, K75, K76, K77, XXX, K79, K7A, K7B, K7C, K7D, K7E, K7F }  \
}
/*         0    1    2    3    4    5    6    7    8    9    A    B    C    D    E    F         */


/*
{ K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, K0E, K0F }, \
{ K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D, K1E, K1F }, \
{ K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, K2C, K2D, K2E, K2F }, \
{ K30, K31, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, K3C, K3D, K3E, K3F }, \
{ K40, K41, K42, K43, K44, K45, K46, K47, K48, K49, K4A, K4B, K4C, K4D, K4E, K4F }, \
{ K50, K51, K52, K53, K54, K55, K56, K57, K58, K59, K5A, K5B, K5C, K5D, K5E, K5F }, \
{ K60, K61, K62, K63, K64, K65, K66, K67, K68, K69, K6A, K6B, K6C, K6D, K6E, K6F }, \
{ K70, K71, K72, K73, K74, K75, K76, K77, K78, K79, K7A, K7B, K7C, K7D, K7E, K7F }  \
*/
