// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku


#define MIRYOKU_EXTRA_COLEMAKDH
#define MIRYOKU_NAV_INVERTEDT
#define MIRYOKU_CLIPBOARD_WIN
#define MIRYOKU_LAYERS_FLIP
#define MIRYOKU_KLUDGE_MOUSEKEYSPR

#define HYP LS(LC(LA(LGUI)))
#define MEH LS(LC(LALT))


#define MIRYOKU_LAYER_BASE \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp Z,               &kp U,              &kp I,              &kp O,             &kp P,             \
U_MT(LGUI, A),     U_MT(LALT, S),     U_MT(LCTRL, D),    U_MT(LSHFT, F),    &kp G,             &kp H,               U_MT(LSHFT, J),     U_MT(LCTRL, K),     U_MT(LALT, L),     U_MT(LGUI, SQT),   \
U_LT(U_BUTTON, Y), U_MT(RALT, X),     &kp C,             &kp V,             &kp B,             &kp N,               &kp M,              &kp COMMA,          U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH),\
U_NP,              &kp HYP,           U_LT(U_FUN, DEL),  U_LT(U_SYM, TAB),  U_LT(U_NUM, BSPC), U_LT(U_NAV, SPACE),  U_LT(U_MOUSE, RET), U_LT(U_MEDIA, ESC), &kp MEH,           U_NP

#define MIRYOKU_LAYER_NAV \
&kp PG_UP,         &kp HOME,          &kp UP,            &kp END,           &kp INS,           U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
&kp PG_DN,         &kp LEFT,          &kp DOWN,          &kp RIGHT,         &u_caps_word,      U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_NA,              &u_to_U_NAV,       &u_to_U_NUM,       &kp RALT,          U_NA,              \
U_NP,              &trans,            &kp RET,           &kp DEL,           &kp BSPC,           U_NA,              U_NA,              U_NA,             &trans,            U_NP

#define MIRYOKU_LAYER_SYM \
&kp SINGLE_QUOTE,  &kp LT,             &kp GT,           &kp DQT,           &kp SEMI,              &kp AMPS,          &kp U_NA,          &kp LBKT,         &kp RBKT,          &kp PRCNT,      \
&kp EXCL,          &kp MINUS,          &kp PLUS,         &kp EQUAL,         &kp HASH,              &kp PIPE,          &kp COLON,         &kp LPAR,         &kp RPAR,          &kp QMARK,      \
&kp CARET,         &kp SLASH,          &kp ASTRK,        &kp BSLH,          U_NA,                  &kp TILDE,         &kp DLLR,          &kp LBRC,         &kp RBRC,          &kp AT,         \
U_NP,              &trans,             U_NA,             U_NA,              &kp UNDER,             U_NA,              U_NA,               U_NA,            &trans              U_NP,

#define MIRYOKU_LAYER_MEDIA \
U_RGB_HUI,         U_RGB_SAI,         &kp C_VOL_UP,      U_RGB_BRI,         U_RGB_TOG,         U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
U_RGB_EFF,         &kp C_PREV,        &kp C_VOL_DN,      &kp C_NEXT,        &u_out_tog,          U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,        \
&u_bt_sel_0,       &u_bt_sel_1,       &u_bt_sel_2,       &u_bt_sel_3,       &u_bt_sel_4,        U_NA,              &u_to_U_MEDIA,     &u_to_U_FUN,       &kp RALT,          U_NA,             \
U_NP,              U_NP,              &kp C_MUTE,        &kp C_PP,          &kp C_STOP,        U_NA,              U_NA,              U_NA,              U_NP,              U_NP
