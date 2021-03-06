/* My personal layout for the Dactyl Manuform 5x6 Keyboard */
// Made for use with windows.
// qmk compile -km DrezaemLeft
// qmk flash -kb handwired/dactyl_manuform/5x6 -km DrezaemLeft -bl avrdude-split-left

#include QMK_KEYBOARD_H
#include "../macros.c"

// Home row mod keys Left
#define GUI_A LGUI_T(KC_A)
#define ALT_O LALT_T(KC_O)
#define SFT_E LSFT_T(KC_E)
#define CTL_U LCTL_T(KC_U)
// Home row mod keys Right
#define CTL_H RCTL_T(KC_H)
#define SHI_T RSFT_T(KC_T)
#define ALT_N LALT_T(KC_N)
#define GUI_S RGUI_T(KC_S)

#define _DVORAK 0
#define _QWERTY 1
#define _HOMEMOD 2
#define _MACROL 3
#define _NAVI 4
#define _MOUSE 5
#define _MEDIA 6
#define _NUMBERS 7
#define _SYMBOLS 8
#define _FUNCTION 9

#define DVORAK TO(_DVORAK)
#define QWERTY TO(_QWERTY)
#define HOMEMOD TG(_HOMEMOD)
#define MACROL MO(_MACROL)
#define NAVI LT(_NAVI, KC_ESC)
#define MOUS_SPC LT(_MOUSE, KC_SPC)
#define MEDIA LT(_MEDIA, KC_ENT)
#define NUMBER LT(_NUMBERS, KC_TAB)
#define FUNCTIO LT(_FUNCTION, KC_BSPC)
#define SYMBOLS LT(_SYMBOLS, KC_DEL)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_DVORAK] = LAYOUT_5x6(
      KC_ESC , KC_1  , KC_2  , KC_3  , KC_4  , KC_5  ,                         KC_6  , KC_7  , KC_8  , KC_9  , KC_0  ,KC_BSLS,
      KC_TAB ,KC_QUOT,KC_COMM,KC_DOT , KC_P  , KC_Y  ,                         KC_F  , KC_G  , KC_C  , KC_R  , KC_L  ,KC_SLSH,
      MACROL ,GUI_A  , ALT_O , SFT_E , CTL_U , KC_I  ,                         KC_D  , CTL_H , SHI_T , ALT_N , GUI_S ,KC_MINS,
      KC_LSFT,KC_SCLN, KC_Q  , KC_J  , KC_K  , KC_X  ,                         KC_B  , KC_M  , KC_W  , KC_V  , KC_Z  ,KC_EQL ,
                      KC_LEFT,KC_RGHT,                                                          KC_UP ,KC_DOWN,
                                      NAVI   ,MOUS_SPC,                       SYMBOLS,NUMBER ,
                                      KC_LCTL,MEDIA  ,                        FUNCTIO,KC_DEL ,
                                      HOMEMOD,QWERTY ,                        KC_LGUI,KC_LALT
  ),

  [_QWERTY] = LAYOUT_5x6(
      KC_ESC , KC_1  , KC_2  , KC_3  , KC_4  , KC_5  ,                         KC_6  , KC_7  , KC_8  , KC_9  , KC_0  ,KC_BSPC,
      KC_TAB , KC_Q  , KC_W  , KC_E  , KC_R  , KC_T  ,                         KC_Y  , KC_U  , KC_I  , KC_O  , KC_P  ,KC_MINS,
      MACROL , KC_A  , KC_S  , KC_D  , KC_F  , KC_G  ,                         KC_H  , KC_J  , KC_K  , KC_L  ,KC_SCLN,KC_QUOT,
      KC_LSFT, KC_Z  , KC_X  , KC_C  , KC_V  , KC_B  ,                         KC_N  , KC_M  ,KC_COMM,KC_DOT ,KC_SLSH,KC_BSLASH,
                      KC_LEFT,KC_RGHT,                                                         KC_UP ,KC_DOWN,
                                      NAVI   ,KC_SPC ,                        KC_LSFT,NUMBER ,
                                      KC_LCTL,KC_ENT ,                        KC_BSPC,KC_DEL ,
                                      KC_HOME,DVORAK ,                        KC_LGUI,KC_LALT
  ),

  [_HOMEMOD] = LAYOUT_5x6(
      _______,_______,_______,_______,_______,_______,                        _______,_______,_______,_______,_______,_______,
      _______,_______,_______,_______,_______,_______,                        _______,_______,_______,_______,_______,_______,
      _______, KC_A  , KC_O  , KC_E  , KC_U  ,_______,                        _______, KC_H  , KC_T  , KC_N  , KC_S  ,_______,
      _______,_______,_______,_______,_______,_______,                        _______,_______,_______,_______,_______,_______,
                      _______,_______,                                                        _______, _______,
                                      _______,KC_SPC ,                       _______,_______,
                                      _______,_______,                        _______,_______,
                                      _______,_______,                        _______,_______
  ),

  [_MACROL] = LAYOUT_5x6(
      _______,_______,_______,_______,_______,_______,                        _______,_______,_______,_______,_______,_______,
      _______,_______,_______,_______,_______,SPAM   ,                        _______,_______,_______,_______,_______,_______,
      _______,KC_CAPS,_______,_______,_______,_______,                        _______,_______,_______,_______,_______,_______,
      GMAIL  ,_______,HOMEMOD,_______,_______,_______,                        _______,_______,_______,_______,_______,_______,
                      DVORAK,QWERTY,                                                          _______,_______,
                                      _______,_______,                        _______,_______,
                                      _______,_______,                        _______,_______,
                                      _______,_______,                        _______,_______
  ),

  [_NAVI] = LAYOUT_5x6(
    _______,_______,_______,_______,_______,_______,                        _______,_______,_______,_______,_______,_______,
    _______,_______,_______, KC_UP ,_______,_______,                        _______,_______,_______,_______,_______,_______,
    _______,_______,KC_LEFT,KC_DOWN,KC_RGHT,_______,                        _______,_______,_______,_______,_______,_______,
    RESET  ,KC_HOME,KC_PGUP,KC_PGDN,KC_END ,_______,                        _______,_______,_______,_______,_______,_______,
                    C(KC_C),C(KC_V),                                                        _______,_______,
                                    _______,_______,                        _______,_______,
                                    _______,_______,                        _______,_______,
                                    _______,_______,                        _______,_______
  ),

  [_MOUSE] = LAYOUT_5x6(
      _______,_______,_______,_______,_______,_______,                        _______,_______,_______,_______,_______,_______,
      _______,_______,_______,_______,_______,_______,                        _______,KC_BTN1,KC_MS_U,KC_WH_U,_______,_______,
      _______,_______,_______,_______,_______,_______,                        _______,KC_MS_L,KC_WH_L,KC_MS_R,KC_WH_R,_______,
      _______,_______,_______,_______,_______,_______,                        _______,KC_BTN2,KC_MS_D,KC_WH_D,_______,_______,
                      _______,_______,                                                         _______,_______,
                                      _______,_______,                        KC_BTN1,KC_BTN2,
                                      _______,_______,                        KC_BTN3,_______,
                                      _______,_______,                        _______,_______
  ),

  [_MEDIA] = LAYOUT_5x6(
      _______,_______,_______,_______,_______,_______,                        _______,_______,_______,_______,_______,_______,
      _______,KC_VOLU,KC_MUTE,KC_INS ,_______,_______,                        _______,_______,_______,_______,_______,_______,
      _______,KC_VOLD,KC_MPRV,KC_MPLY,KC_MNXT,_______,                        _______,_______,_______,_______,_______,_______,
      _______,KC_PAUS,KC_SLCK,KC_PSCR,KC_CAPS,_______,                        _______,_______,_______,_______,_______,_______,
                      _______,_______,                                                        _______,_______,
                                      _______,_______,                        _______,_______,
                                      _______,_______,                        _______,_______,
                                      _______,_______,                        _______,_______
  ),

  [_NUMBERS] = LAYOUT_5x6(
    _______,_______,_______,_______,_______,_______,                        _______,_______,_______,_______,_______,_______,
    _______,_______,_______,_______,_______,_______,                        KC_PAST, KC_7  , KC_8  , KC_9  ,KC_PLUS,_______,
    _______,_______,_______,_______,_______,_______,                        KC_PSLS, KC_4  , KC_5  , KC_6  ,KC_MINS,_______,
    RESET  ,_______,_______,_______,_______,_______,                         KC_0  , KC_1  , KC_2  , KC_3  ,KC_PEQL,RESET  ,
                    _______,_______,                                                        _______,_______,
                                    _______,_______,                        _______,_______,
                                    _______,_______,                        _______,_______,
                                    _______,_______,                        _______,_______
  ),

  [_SYMBOLS] = LAYOUT_5x6(
      _______,_______,_______,_______,_______,_______,                        _______,_______,_______,_______,_______,_______,
      _______,_______,_______,_______,_______,_______,                        _______,KC_LCBR,KC_RCBR,KC_EQL ,KC_EXLM,_______,
      _______,_______,_______,_______,_______,_______,                        _______,KC_LPRN,KC_RPRN,KC_SLSH,KC_BSLS,_______,
      _______,_______,_______,_______,_______,_______,                        _______,KC_LBRC,KC_RBRC,KC_MINS,KC_GRV,_______,
                      _______,_______,                                                        _______,_______,
                                      _______,_______,                        _______,_______,
                                      _______,_______,                        _______,_______,
                                      _______,_______,                        _______,_______
  ),

  [_FUNCTION] = LAYOUT_5x6(
    KC_F12 , KC_F1 , KC_F2 , KC_F3 , KC_F4 , KC_F5 ,                      KC_F6  , KC_F7 , KC_F8 , KC_F9 ,KC_F10 ,KC_F11 ,
    _______, KC_F1 , KC_F2 , KC_F3 , KC_F4 ,_______,                      _______,_______,_______,_______,_______,_______,
    _______, KC_F5 , KC_F6 , KC_F7 , KC_F8 ,_______,                      _______,_______,_______,_______,_______,_______,
    RESET  , KC_F9 , KC_F10, KC_F11, KC_F12,_______,                      _______,_______,_______,_______,_______,_______,
                    _______,_______,                                                      _______,_______,
                                    _______,_______,                      _______,_______,
                                    _______,_______,                      _______,_______,
                                    _______,_______,                      _______,_______
  ),

};

//   [_LAYER] = LAYOUT_5x6(
//       _______,_______,_______,_______,_______,_______,                        _______,_______,_______,_______,_______,_______,
//       _______,_______,_______,_______,_______,_______,                        _______,_______,_______,_______,_______,_______,
//       _______,_______,_______,_______,_______,_______,                        _______,_______,_______,_______,_______,_______,
//       _______,_______,_______,_______,_______,_______,                        _______,_______,_______,_______,_______,_______,
//                       _______,_______,                                                        _______,_______,
//                                       _______,_______,                        _______,_______,
//                                       _______,_______,                        _______,_______,
//                                       _______,_______,                        _______,_______
//   ),

