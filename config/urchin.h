#define U_NA &none
#define U_NU &none

#define U_TAPPING_TERM 200

#define U_BASE   0
#define U_BUTTON 1
#define U_NAV    2
#define U_MOUSE  3
#define U_MEDIA  4
#define U_NUM    5
#define U_SYM    6
#define U_FUN    7

#define U_MACRO(name,...) \
/ { \
  macros { \
    name: name { \
      compatible = "zmk,behavior-macro"; \
      #binding-cells = <0>; \
      __VA_ARGS__ \
    }; \
  }; \
};

// mouse
#define ZMK_POINTING_DEFAULT_MOVE_VAL 1250
#define ZMK_POINTING_DEFAULT_SCRL_VAL 100

#define U_MOUSE_MOVE_EXPONENT 1
#define U_MOUSE_MOVE_TIME 1500
#define U_MOUSE_MOVE_DELAY 0
#define U_MOUSE_SCROLL_EXPONENT 1
#define U_MOUSE_SCROLL_TIME 5000
#define U_MOUSE_SCROLL_DELAY 0

#define U_BTN1 &mkp MB1
#define U_BTN2 &mkp MB2
#define U_BTN3 &mkp MB3

// mouse
#define U_MS_D &mmv MOVE_DOWN
#define U_MS_L &mmv MOVE_LEFT
#define U_MS_R &mmv MOVE_RIGHT
#define U_MS_U &mmv MOVE_UP
#define U_WH_D &msc SCRL_DOWN
#define U_WH_L &msc SCRL_LEFT
#define U_WH_R &msc SCRL_RIGHT
#define U_WH_U &msc SCRL_UP

// rgb
#define U_RGB_TOG &rgb_ug RGB_TOG
#define U_RGB_EFF &rgb_ug RGB_EFF
#define U_RGB_HUI &rgb_ug RGB_HUI
#define U_RGB_SAI &rgb_ug RGB_SAI
#define U_RGB_BRI &rgb_ug RGB_BRI
#define U_EP_TOG &ext_power EP_TOG
