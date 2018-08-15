#ifndef PALADINTKL_H
#define PALADINTKL_H

#include "quantum.h"

#define LAYOUT_all( \
    K38,        K39, K48, K49,    K58, K59, K68, K69,    K78, K79, K09, K08,    K18, K19, K28, K29,\
    K36, K37, K46, K47, K56, K57, K66, K67, K76, K77, K06, K07, K17, K26, K27,   K97, K96, K87,\
    K34, K35, K44, K45, K54, K55, K64, K65, K75, K05, K15, K16, K25, K24,        K95, K84, K85,\
    K32, K33, K43, K52, K53, K63, K73, K74, K03, K04, K13, K14, K23, \
    K31, K41, K42, K51, K61, K62, K71, K72, K01, K02, K11, K12, K21, K22,             K83,\
    K30, K40, K50,           K60,                     K70, K00, K10, K20,         K81, K82, K91\
) { \
    { K00, K01, K02, K03, K04, K05, K06, K07, K08, K09 }, \
    { K10, K11, K12, K13, K14, K15, K16, K17, K18, K19 }, \
    { K20, K21, K22, K23, K24, K25, K26, K27, K28, K29 }, \
    { K30, K31, K32, K33, K34, K35, K36, K37, K38, K39 }, \
    { K40, K41, K42, K43, K44, K45, K46, K47, K48, K49 }, \
    { K50, K51, K52, K53, K54, K55, K56, K57, K58, K59 }, \
    { K60, K61, K62, K63, K64, K65, K66, K67, K68, K69 }, \
    { K70, K71, K72, K73, K74, K75, K76, K77, K78, K79 }, \
    { KC_NO, K81, K82, K83, K84, K85, KC_NO, K87, KC_NO, KC_NO }, \
    { KC_NO, K91, KC_NO, KC_NO, KC_NO, K95, K96, K97, KC_NO, KC_NO } \
}

#endif
