#pragma once

#include "quantum.h"

#define LAYOUT(\
  K000, K010, K001, K011, K002, K012, K003, K013, K004, K014, K005, K015, \
  K020, K030, K021, K031, K022, K032, K023, K033, K024, K034, K025, K035, \
  K040, K050, K041, K051, K042, K052, K043, K053, K044, K054, K045, K055, \
  K060, K070, K061,                   K063, K073, K064, K074, K065, K075  \
) \
{ \
  { K000, K001,  K002,  K003, K004, K005 }, \
  { K010, K011,  K012,  K013, K014, K015 }, \
  { K020, K021,  K022,  K023, K024, K025 }, \
  { K030, K031,  K032,  K033, K034, K035 }, \
  { K040, K041,  K042,  K043, K044, K045 }, \
  { K050, K051,  K052,  K053, K054, K055 }, \
  { K060, K061,  KC_NO, K063, K064, K065 }, \
  { K070, KC_NO, KC_NO, K073, K074, K075 } \
}
