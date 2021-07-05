/* My personal layout for the Dactyl Manuform 5x6 Keyboard */ 
// qmk compile -km DrezaemRight
// qmk flash -kb handwired/dactyl_manuform/5x6 -km DrezaemRight -bl avrdude-split-right

#include QMK_KEYBOARD_H
#include "../macros.c"

// Home row mod keys Left
#define CTL_A LCTL_T(KC_A)
#define ALT_O LALT_T(KC_O)
#define SFT_E LSFT_T(KC_E)
#define GUI_U LGUI_T(KC_U)
// Home row mod keys Right
#define GUI_H RGUI_T(KC_H)
#define SHFT_T RSFT_T(KC_T)
#define ALT_N LALT_T(KC_N)
#define CTL_S RCTL_T(KC_S)
#define MOUS_SPC LT(_MOUSE, KC_SPC)

#define _DVORAK 0
#define _QWERTY 1
#define _HOMEMOD 2
#define _MOUSE 3
#define _MACROL 4
#define _LOWER 5
#define _RAISE 6

#define DVORAK DF(_DVORAK)
#define QWERTY DF(_QWERTY)
#define HOMEMOD TG(_HOMEMOD)
#define MACROL MO(_MACROL)
#define RAISE MO(_RAISE)
#define LOWER MO(_LOWER)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_DVORAK] = LAYOUT_5x6(
     KC_ESC , KC_1  , KC_2  , KC_3  , KC_4  , KC_5  ,                         KC_6  , KC_7  , KC_8  , KC_9  , KC_0  ,KC_BSLS,
     KC_TAB ,KC_QUOT,KC_COMM,KC_DOT , KC_P  , KC_Y  ,                         KC_F  , KC_G  , KC_C  , KC_R  , KC_L  ,KC_SLSH,
     MACROL , KC_A  , KC_O  , KC_E  , KC_U  , KC_I  ,                         KC_D  , KC_H  , KC_T  , KC_N  , KC_S  ,KC_MINS,
     KC_LCTL,KC_SCLN, KC_Q  , KC_J  , KC_K  , KC_X  ,                         KC_B  , KC_M  , KC_W  , KC_V  , KC_Z  ,KC_EQL ,
                     KC_LEFT,KC_RGHT,                                                         KC_UP ,KC_DOWN,
                                      RAISE,KC_SPC,                          KC_LSFT, LOWER ,
                                      KC_LGUI,KC_ENT,                        KC_BSPC, KC_DEL,
                                      KC_HOME,KC_END,                        KC_LCTL, KC_LALT
  ),

  [_QWERTY] = LAYOUT_5x6(
     KC_ESC , KC_1  , KC_2  , KC_3  , KC_4  , KC_5  ,                         KC_6  , KC_7  , KC_8  , KC_9  , KC_0  ,KC_BSPC,
     KC_TAB , KC_Q  , KC_W  , KC_E  , KC_R  , KC_T  ,                         KC_Y  , KC_U  , KC_I  , KC_O  , KC_P  ,KC_MINS,
     MACROL , KC_A  , KC_S  , KC_D  , KC_F  , KC_G  ,                         KC_H  , KC_J  , KC_K  , KC_L  ,KC_SCLN,KC_QUOT,
     KC_LCTL, KC_Z  , KC_X  , KC_C  , KC_V  , KC_B  ,                         KC_N  , KC_M  ,KC_COMM,KC_DOT ,KC_SLSH,KC_BSLASH,
                     KC_LEFT,KC_RGHT,                                                        KC_UP ,KC_DOWN,
                                      RAISE,KC_SPC,                          KC_LSFT, LOWER ,
                                      KC_LGUI,KC_ENT,                        KC_BSPC, KC_DEL,
                                      KC_HOME,KC_END,                        KC_LCTL, KC_LALT
  ),

  [_HOMEMOD] = LAYOUT_5x6(
    _______ ,_______  ,_______  ,_______  ,_______  ,_______  ,                        _______  ,_______ ,_______  ,_______  ,_______  ,_______,
    _______ ,_______  ,_______  ,_______  ,_______  ,_______  ,                        _______  ,_______ ,_______  ,_______  ,_______  ,_______,
    _______ , CTL_A   , ALT_O   , SFT_E   , GUI_U   ,_______  ,                        _______  , GUI_H  , SHFT_T   , ALT_N   , CTL_S   ,_______,
    _______ ,_______  ,_______  ,_______  ,_______  ,_______  ,                        _______  ,_______ ,_______  ,_______  ,_______  ,_______,
                    _______,_______,                                                        _______  , _______,
                                    _______,MOUS_SPC,                        _______,_______,
                                    _______,_______,                        _______, _______,
                                    _______ ,_______,                        _______, _______
  ),

  [_MOUSE] = LAYOUT_5x6(
     _______ , _______  , _______  , _______  , _______  , _______  ,                         _______  , _______  , _______  , _______  , _______  ,_______,
     _______ , _______  , _______  , _______  , _______  ,_______    ,                         _______  , KC_BTN1  , KC_MS_U  , KC_BTN2  , KC_WH_U  ,_______,
     _______ , _______  , _______  , _______  , _______  , _______  ,                         _______  , KC_MS_L, KC_MS_D  , KC_MS_R  , KC_WH_D ,_______,
     _______ , _______  , _______   , _______  , _______  , _______  ,                         _______  , _______  , _______  , _______  , _______  ,_______,
                     _______,_______,                                                                                _______ ,_______,
                                      _______,_______,                        _______,_______,
                                      _______,_______,                        _______, _______,
                                      _______,_______,                        _______, _______
  ),

  [_MACROL] = LAYOUT_5x6(
    _______ ,_______  ,_______  ,_______  ,_______  ,_______  ,                        _______  ,_______  ,_______  ,_______  ,_______  ,_______,
    _______ ,_______  ,_______  ,_______  ,_______  ,_______  ,                        _______  ,_______  ,_______  ,_______  ,_______  ,_______,
    _______ ,_______  ,_______  ,_______  ,_______  ,_______  ,                        _______  ,_______  ,_______  ,_______  ,_______  ,_______,
      GMAIL  ,_______ , HOMEMOD ,_______  ,_______  ,_______  ,                        _______  ,_______  ,_______  ,_______  ,_______  ,_______,
                     DVORAK,QWERTY,                                                       _______ ,_______,
                                      _______,_______,                        _______,_______,
                                      _______,_______,                        _______, _______,
                                      _______,_______,                        _______, _______
  ),

  [_LOWER] = LAYOUT_5x6(

     KC_F12 , KC_F1 , KC_F2 , KC_F3 , KC_F4 , KC_F5 ,                        KC_F6  , KC_F7 , KC_F8 , KC_F9 ,KC_F10 ,KC_F11 ,
     _______,_______,_______,_______,_______,KC_LBRC,                        KC_RBRC, KC_P7 , KC_P8 , KC_P9 ,KC_GRV ,KC_PLUS,
     _______,KC_HOME,KC_PGUP,KC_PGDN,KC_END ,KC_LPRN,                        KC_RPRN, KC_P4 , KC_P5 , KC_P6 ,KC_MINS,KC_PIPE,
      RESET ,_______,_______,_______,_______,KC_LCBR,                        KC_RCBR, KC_P1 , KC_P2 , KC_P3 ,KC_EQL ,KC_UNDS,
                     _______,KC_PSCR,                                                        _______, KC_P0,
                                             _______,_______,            _______,_______,
                                             _______,_______,            _______,_______,
                                             _______,_______,            _______,_______

  ),

  [_RAISE] = LAYOUT_5x6(
       KC_F12 , KC_F1 , KC_F2 , KC_F3 , KC_F4 , KC_F5 ,                      KC_F6  , KC_F7 , KC_F8 , KC_F9 ,KC_F10 ,KC_F11 ,
       _______,_______,_______,KC_UP  ,_______,KC_LBRC,                      KC_RBRC,_______,KC_NLCK,KC_INS ,KC_SLCK,KC_MUTE,
       _______,_______,KC_LEFT,KC_DOWN,KC_RGHT,KC_LPRN,                      KC_RPRN,KC_MPRV,KC_MPLY,KC_MNXT,_______,KC_VOLU,
        RESET ,_______,LCTL(KC_X),LCTL(KC_C),LCTL(KC_V),KC_LCBR,             KC_RCBR,_______,_______,_______,_______,KC_VOLD,
                       _______,_______,                                                      KC_EQL ,_______,
                                               _______,_______,            _______,_______,
                                               _______,_______,            _______,_______,
                                               _______,_______,            _______,_______
  ),
};