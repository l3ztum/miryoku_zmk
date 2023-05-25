// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

// #define MIRYOKU_LAYER_TAP \
 // KC_Q,              KC_W,              KC_E,              KC_R,              KC_T,              KC_Z,              KC_U,              KC_I,              KC_O,              KC_P,              \
 // KC_A,              KC_S,              KC_D,              KC_F,              KC_G,              KC_H,              KC_J,              KC_K,              KC_L,              KC_QUOT,           \
 // KC_Y,              KC_X,              KC_C,              KC_V,              KC_B,              KC_N,              KC_M,              KC_COMM,           KC_DOT,            KC_SLSH,           \
 // U_NP,              U_NP,              KC_H,              KC_M,            KC_SPC,            KC_BSPC,           KC_ENT,            KC_ESC,            U_NP,

// #define MIRYOKU_LAYER_BASE \
// KC_Q,              KC_W,              KC_E,              KC_R,              KC_T,              KC_Z,              KC_U,              KC_I,              KC_O,              KC_P,              \
// LGUI_T(KC_A),      LALT_T(KC_S),      LCTL_T(KC_D),      LSFT_T(KC_F),      KC_G,              KC_H,              LSFT_T(KC_J),      LCTL_T(KC_K),      LALT_T(KC_L),      RGUI_T(KC_QUOT),   \
// LT(U_BUTTON,KC_Y), ALGR_T(KC_X),      KC_C,              KC_V,              KC_B,              KC_N,              KC_M,              KC_COMM,           ALGR_T(KC_DOT),    LT(U_BUTTON,KC_SLSH),\
// U_NP,              U_NP,              LT(U_FUN,KC_DEL),   LT(U_SYM,KC_TAB), LT(U_NUM,KC_BSPC),  LT(U_NAV,KC_SPC), LT(U_MOUSE,KC_ENT),  LT(U_MEDIA,KC_ESC),U_NP,              U_NP


// #define MIRYOKU_LAYER_SYM \
// KC_QUOTE,    KC_LABK, KC_RABK, KC_DOUBLE_QUOTE,  KC_DOT,                KC_AMPERSAND, CPP_SCOPE, KC_LBRC,   KC_RBRC, KC_PERCENT, \
// KC_EXLM, KC_MINUS, KC_PLUS, KC_EQL,             KC_HASH,            KC_PIPE, KC_COLON, KC_LPRN,   KC_RPRN, KC_QUES, \
// KC_CIRCUMFLEX,    KC_SLASH, KC_ASTERISK, KC_BACKSLASH, BASH_UPWARD,         KC_TILD, KC_DOLLAR, KC_LCBR, KC_RCBR, KC_AT, \
// U_NP,    U_NP,    U_NA,    U_NA,    U_NA,                           KC_UNDS,      KC_LPRN, KC_RPRN,   U_NP,


// #define MIRYOKU_LAYER_NAV \
// KC_PGUP,           KC_HOME,           KC_UP,             KC_END,            KC_INS,            U_NA,              TD(U_TD_U_BASE),   TD(U_TD_U_EXTRA),  TD(U_TD_U_TAP),    TD(U_TD_BOOT),     \
// KC_PGDN,           KC_LEFT,           KC_DOWN,           KC_RGHT,           CW_TOGG,           U_NA,              KC_LSFT,           KC_LCTL,           KC_LALT,           KC_LGUI,           \
// U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_NA,              TD(U_TD_U_NAV),    TD(U_TD_U_NUM),    KC_ALGR,           U_NA,              \
// U_NP,              U_NP,              KC_DEL,            KC_TAB,            KC_BSPC,           U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_EXTRA_COLEMAKDH
#define MIRYOKU_NAV_INVERTEDT
#define MIRYOKU_CLIPBOARD_WIN
#define MIRYOKU_LAYERS_FLIP
#define MIRYOKU_KLUDGE_MOUSEKEYSPR

#define MIRYOKU_LAYER_BASE \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp Z,             &kp U,             &kp I,             &kp O,             &kp P,             \
U_MT(LGUI, A),     U_MT(LALT, S),     U_MT(LCTRL, D),    U_MT(LSHFT, F),    &kp G,             &kp H,             U_MT(LSHFT, J),    U_MT(LCTRL, K),    U_MT(LALT, L),     U_MT(LGUI, SQT),   \
U_LT(U_BUTTON, Y), U_MT(RALT, X),     &kp C,             &kp V,             &kp B,             &kp N,             &kp M,             &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              U_LT(U_FUN, DEL),  U_LT(U_SYM, TAB),  U_LT(U_NUM, BSPC),   U_LT(U_NAV, SPACE), U_LT(U_MOUSE, RET),U_LT(U_MEDIA, ESC),U_NP,              U_NP

#define MIRYOKU_LAYER_NAV \
&kp PG_UP,         &kp HOME,          &kp UP,            &kp END,           &kp INS,           U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
&kp PG_DN,         &kp LEFT,          &kp DOWN,          &kp RIGHT,         &u_caps_word,      U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_NA,              &u_to_U_NAV,       &u_to_U_NUM,       &kp RALT,          U_NA,              \
U_NP,              U_NP,              &kp DEL,           &kp RET,          &kp BSPC,           U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_LAYER_SYM \
&kp SINGLE_QUOTE,  &kp LT,             &kp GT,           &kp DQT,           &kp SEMI,              &kp AMPS,          &kp U_NA,          &kp LBKT,         &kp RBKT,          &kp PRCNT,          \
&kp EXCL,          &kp MINUS,          &kp PLUS,         &kp EQUAL,         &kp HASH,              &kp PIPE,          &kp COLON,         &kp LPAR,         &kp RPAR,          &kp QMARK,         \
&kp CARET,         &kp SLASH,          &kp ASTRK,        &kp BSLH,          U_NA,                  &kp TILDE,         &kp DLLR,          &kp LBRC,         &kp RBRC,          &kp AT,         \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,                  &kp UNDER,         &kp KP_NUM,          U_NA,          U_NP,              U_NP

#define MIRYOKU_LAYER_MEDIA \
U_RGB_HUI,         U_RGB_SAI,         &kp C_VOL_UP,      U_RGB_BRI,         U_RGB_TOG,         U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
U_RGB_EFF,         &kp C_PREV,        &kp C_VOL_DN,      &kp C_NEXT,        &u_out_tog,          U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
&u_bt_sel_0,       &u_bt_sel_1,       &u_bt_sel_2,       &u_bt_sel_3,       &u_bt_sel_4,        U_NA,              &u_to_U_MEDIA,     &u_to_U_FUN,       &kp RALT,          U_NA,              \
U_NP,              U_NP,              &kp C_MUTE,        &kp C_PP,          &kp C_STOP,        U_NA,              U_NA,              U_NA,              U_NP,              U_NP