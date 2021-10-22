#pragma once

#include "quantum.h"

#define LAYOUT(\
  K00, K10, K01, K11, K02, K12, K03, K13, K04, K14, K05, K15, \
  K20, K30, K21, K31, K22, K32, K23, K33, K24, K34, K25, \
  K40, K50, K41, K51, K42, K52, K43, K53, K44, K54, K45, K55, \
  K60, K70, K61,                K63,      K64, K74, K65, K75  \
) \
{ \
  { K00, K01,   K02,   K03,   K04, K05 }, \
  { K10, K11,   K12,   K13,   K14, K15 }, \
  { K20, K21,   K22,   K23,   K24, K25 }, \
  { K30, K31,   K32,   K33,   K34, KC_NO }, \
  { K40, K41,   K42,   K43,   K44, K45 }, \
  { K50, K51,   K52,   K53,   K54, K55 }, \
  { K60, K61,   KC_NO, K63,   K64, K65 }, \
  { K70, KC_NO, KC_NO, KC_NO, K74, K75 } \
}
