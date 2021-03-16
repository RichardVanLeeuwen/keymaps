/* My personal layout for the Dactyl Manuform 5x6 Keyboard */ 
// Made for use with windows.
// qmk compile -km DrezaemLeft
// qmk flash -kb handwired/dactyl_manuform/5x6 -km DrezaemLeft -bl avrdude-split-left

#include QMK_KEYBOARD_H
#include "../macros.c"


#define _DVORAK 0
#define _QWERTY 1
#define _MACROL 2
#define _LOWER 3
#define _RAISE 4

#define DVORAK DF(_DVORAK)
#define QWERTY DF(_QWERTY)
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
                                      KC_LCTL,KC_ENT,                        KC_BSPC, KC_DEL,
                                      KC_HOME,KC_END,                        KC_LGUI, KC_LALT
  ),

  [_QWERTY] = LAYOUT_5x6(
     KC_ESC , KC_1  , KC_2  , KC_3  , KC_4  , KC_5  ,                         KC_6  , KC_7  , KC_8  , KC_9  , KC_0  ,KC_BSPC,
     KC_TAB , KC_Q  , KC_W  , KC_E  , KC_R  , KC_T  ,                         KC_Y  , KC_U  , KC_I  , KC_O  , KC_P  ,KC_MINS,
     MACROL , KC_A  , KC_S  , KC_D  , KC_F  , KC_G  ,                         KC_H  , KC_J  , KC_K  , KC_L  ,KC_SCLN,KC_QUOT,
     KC_LCTL, KC_Z  , KC_X  , KC_C  , KC_V  , KC_B  ,                         KC_N  , KC_M  ,KC_COMM,KC_DOT ,KC_SLSH,KC_BSLASH,
                     KC_LEFT,KC_RGHT,                                                        KC_UP ,KC_DOWN,
                                      RAISE,KC_SPC,                          KC_LSFT, LOWER ,
                                      KC_LCTL,KC_ENT,                        KC_BSPC, KC_DEL,
                                      KC_HOME,KC_END,                        KC_LGUI, KC_LALT
  ),

  [_MACROL] = LAYOUT_5x6(
     _______ , _______  , _______  , _______  , _______  , _______  ,                         _______  , _______  , _______  , _______  , _______  ,_______,
     _______ , _______  , _______  , _______  , _______  , _______  ,                         _______  , _______  , _______  , _______  , _______  ,_______,
     _______ , _______  , _______  , _______  , _______  , _______  ,                         _______  , _______  , _______  , _______  , _______  ,_______,
      GMAIL  , _______  , _______  , _______  , _______  , _______  ,                         _______  , _______  , _______  , _______  , _______  ,_______,
                     DVORAK,QWERTY,                                                        _______ ,_______,
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