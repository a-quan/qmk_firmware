#ifndef KB_H
#define KB_H

#include "quantum.h"

#define KEYMAP( \
	K000, K001, K002, K003, K004, K005, K006,       \
	K010, K011, K012, K013, K014, K015, K016, K017, \
	K020, K021, K022, K023, K024, K025, K026,       \
	K030, K031, K032, K033, K034, K035, K036, K037, \
	K040, K041, K042, K043, K044, K045, K046,       \
	K050, K051, K052, K053, K054, K055, K056,       \
	K060, K061, K062, K063, K064, K065, K066,       \
	K070, K071, K072, K073, K074, K075, K076, K077, \
	      K081,       K083,       K085, K086,       \
	      K091,       K093,                   K097  \
) { \
	{ K000,  K001,  K002,  K003,  K004,  K005,  K006,  KC_NO }, \
	{ K010,  K011,  K012,  K013,  K014,  K015,  K016,  K017 }, \
	{ K020,  K021,  K022,  K023,  K024,  K025,  K026,  KC_NO }, \
	{ K030,  K031,  K032,  K033,  K034,  K035,  K036,  K037 }, \
	{ K040,  K041,  K042,  K043,  K044,  K045,  K046,  KC_NO }, \
	{ K050,  K051,  K052,  K053,  K054,  K055,  K056,  KC_NO }, \
	{ K060,  K061,  K062,  K063,  K064,  K065,  K066,  KC_NO }, \
	{ K070,  K071,  K072,  K073,  K074,  K075,  K076,  K077 }, \
	{ KC_NO, K081,  KC_NO, K083,  KC_NO, K085,  K086,  KC_NO }, \
	{ KC_NO, K091,  KC_NO, K093,  KC_NO, KC_NO, KC_NO, K097 }  \
}

#endif