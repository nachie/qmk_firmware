#ifndef PALADINSPLIT_H
#define PALADINSPLIT_H

#ifdef SUBPROJECT_rev1
    #include "rev1.h"
#endif

#define LAYOUT_all( \
    K36, K37, K46, K47, K56, K57, K66, K67, K76, K77, K06, K07, K17, K26, K27, \
    K34, K35, K44, K45, K54, K55, K64, K65, K75, K05, K15, K16, K25, K24, \
    K32, K33, K43, K52, K53, K63, K73, K74, K03, K04, K13, K14, K23, \
    K31, K41, K42, K51, K61, K62, K71, K72, K01, K02, K11, K12, K21, K22, \
    K30, K40, K50,           K60,                     K70, K00, K10, K20  \
) { \
    { K00, K01, K02, K03, K04, K05, K06, K07 }, \
    { K10, K11, K12, K13, K14, K15, K16, K17 }, \
    { K20, K21, K22, K23, K24, K25, K26, K27 }, \
    { K30, K31, K32, K33, K34, K35, K36, K37 }, \
    { K40, K41, K42, K43, K44, K45, K46, K47 }, \
    { K50, K51, K52, K53, K54, K55, K56, K57 }, \
    { K60, K61, K62, K63, K64, K65, K66, K67 }, \
    { K70, K71, K72, K73, K74, K75, K76, K77 } \
}

// Used to create a keymap using only KC_ prefixed keys
#define KC_KEYMAP( \
    L00, L01, L02, L03, L04, L05, L06, R00, R01, R02, R03, R04, R05, R06, \
    L10, L11, L12, L13, L14, L15, L16, R10, R11, R12, R13, R14, R15, R16, \
    L20, L21, L22, L23, L24, L25, L26, R20, R21, R22, R23, R24, R25, R26, \
    L30, L31, L32, L33, L34, L35, L36, R30, R31, R32, R33, R34, R35, R36, \
    L40, L41, L42, L43, L44, L45, L46, R40, R41, R42, R43, R44, R45, R46 \
    ) \
    KEYMAP( \
        KC_##L00, KC_##L01, KC_##L02, KC_##L03, KC_##L04, KC_##L05, KC_##L06, KC_##R00, KC_##R01, KC_##R02, KC_##R03, KC_##R04, KC_##R05, KC_##R06, \
        KC_##L10, KC_##L11, KC_##L12, KC_##L13, KC_##L14, KC_##L15, KC_##L16, KC_##R10, KC_##R11, KC_##R12, KC_##R13, KC_##R14, KC_##R15, KC_##R16, \
        KC_##L20, KC_##L21, KC_##L22, KC_##L23, KC_##L24, KC_##L25, KC_##L26, KC_##R20, KC_##R21, KC_##R22, KC_##R23, KC_##R24, KC_##R25, KC_##R26, \
        KC_##L30, KC_##L31, KC_##L32, KC_##L33, KC_##L34, KC_##L35, KC_##L36, KC_##R30, KC_##R31, KC_##R32, KC_##R33, KC_##R34, KC_##R35, KC_##R36, \
        KC_##L40, KC_##L41, KC_##L42, KC_##L43, KC_##L44, KC_##L45, KC_##L46, KC_##R40, KC_##R41, KC_##R42, KC_##R43, KC_##R44, KC_##R45, KC_##R46 \
    )

#include "quantum.h"

#endif
