// Copyright 2022 Manna Harbour
// https://github.com/manna-harbour/miryoku
// generated -*- buffer-read-only: t -*-
// target: zmk

#pragma once


#define LAYOUT34_BASE \
&kp Q               &kp W               &kp E            &kp R               &kp T               &kp Y               &kp U              &kp I              &kp O              &kp P                  \
&u_mt LGUI  A       &u_mt LALT  S       &u_mt LCTRL  D   &u_mt LSHFT  F      &kp G               &kp H               &u_mt LSHFT  J     &u_mt LCTRL  K     &u_mt LALT  L      &u_mt LGUI  SQT        \
&u_lt U_BUTTON  Z   &u_mt RALT  X       &kp C            &kp V               &kp B               &kp N               &kp M              &kp COMMA          &u_mt RALT  DOT    &u_lt U_BUTTON  SLASH  \
                                                         &u_lt U_NAV  SPACE  &u_lt U_MOUSE  TAB  &u_lt U_SYM  RET    &u_lt U_NUM  BSPC


#define LAYOUT34_NAV \
U_NA               U_NA               U_NA               &u_to_U_BASE       U_NA               &kp LS(LG(Z))      &kp LG(V)          &kp LG(C)          &kp LG(X)          &kp LG(Z)     \
&kp LGUI           &kp LALT           &kp LCTRL          &kp LSHFT          U_NA               &u_caps_word       &kp LEFT           &kp DOWN           &kp UP             &kp RIGHT     \
U_NA               &kp RALT           &u_to_U_NUM        &u_to_U_NAV        U_NA               &kp INS            &kp HOME           &kp PG_DN          &kp PG_UP          &kp END       \
                                                         U_NA               U_NA               &kp RET            &kp BSPC


#define LAYOUT34_MOUSE \
U_NA               U_NA               U_NA               &u_to_U_BASE       U_NA               &kp LS(LG(Z))      &kp LG(V)          &kp LG(C)          &kp LG(X)          &kp LG(Z)          \
&kp LGUI           &kp LALT           &kp LCTRL          &kp LSHFT          U_NA               U_NU               U_MS_L             U_MS_D             U_MS_U             U_MS_R             \
U_NA               &kp RALT           &u_to_U_SYM        &u_to_U_MOUSE      U_NA               U_NU               U_WH_L             U_WH_D             U_WH_U             U_WH_R             \
                                                         U_NA               U_NA               U_BTN2             U_BTN1


#define LAYOUT34_MEDIA \
U_NA               U_NA               U_NA               &u_to_U_BASE       U_NA               U_RGB_TOG          U_RGB_EFF          U_RGB_HUI          U_RGB_SAI          U_RGB_BRI          \
&kp LGUI           &kp LALT           &kp LCTRL          &kp LSHFT          U_NA               U_EP_TOG           &kp C_PREV         &kp C_VOL_DN       &kp C_VOL_UP       &kp C_NEXT         \
U_NA               &kp RALT           &u_to_U_FUN        &u_to_U_MEDIA      U_NA               &u_out_tog         &u_bt_sel_0        &u_bt_sel_1        &u_bt_sel_2        &u_bt_sel_3        \
                                                         U_NA               U_NA               &kp C_STOP         &kp C_PP


#define LAYOUT34_NUM \
&kp LBKT           &kp N7             &kp N8             &kp N9             &kp RBKT           U_NA               &u_to_U_BASE       U_NA               U_NA               U_NA               \
&kp SEMI           &kp N4             &kp N5             &kp N6             &kp EQUAL          U_NA               &kp LSHFT          &kp LCTRL          &kp LALT           &kp LGUI           \
&kp GRAVE          &kp N1             &kp N2             &kp N3             &kp BSLH           U_NA               &u_to_U_NUM        &u_to_U_NAV        &kp RALT           U_NA               \
                                                         &kp N0             &kp MINUS          U_NA               U_NA


#define LAYOUT34_SYM \
&kp LBRC           &kp AMPS           &kp ASTRK          &kp LPAR           &kp RBRC           U_NA               &u_to_U_BASE       U_NA               U_NA               U_NA               \
&kp COLON          &kp DLLR           &kp PRCNT          &kp CARET          &kp PLUS           U_NA               &kp LSHFT          &kp LCTRL          &kp LALT           &kp LGUI           \
&kp TILDE          &kp EXCL           &kp AT             &kp HASH           &kp PIPE           U_NA               &u_to_U_SYM        &u_to_U_MOUSE      &kp RALT           U_NA               \
                                                         &kp RPAR           &kp UNDER          U_NA               U_NA


#define LAYOUT34_FUN \
&kp F12            &kp F7             &kp F8             &kp F9             &kp PSCRN          U_NA               &u_to_U_BASE       U_NA               U_NA               U_NA               \
&kp F11            &kp F4             &kp F5             &kp F6             &kp SLCK           U_NA               &kp LSHFT          &kp LCTRL          &kp LALT           &kp LGUI           \
&kp F10            &kp F1             &kp F2             &kp F3             &kp PAUSE_BREAK    U_NA               &u_to_U_FUN        &u_to_U_MEDIA      &kp RALT           U_NA               \
                                                         &kp SPACE          &kp TAB            U_NA               U_NA


#define LAYOUT34_BUTTON \
&kp LG(Z)          &kp LG(X)          &kp LG(C)          &kp LG(V)          &kp LS(LG(Z))      &kp LS(LG(Z))      &kp LG(V)          &kp LG(C)          &kp LG(X)          &kp LG(Z)          \
&kp LGUI           &kp LALT           &kp LCTRL          &kp LSHFT          U_NU               U_NU               &kp LSHFT          &kp LCTRL          &kp LALT           &kp LGUI           \
&kp LG(Z)          &kp LG(X)          &kp LG(C)          &kp LG(V)          &kp LS(LG(Z))      &kp LS(LG(Z))      &kp LG(V)          &kp LG(C)          &kp LG(X)          &kp LG(Z)          \
                                                         U_BTN1             U_BTN2             U_BTN2             U_BTN1
