bool spam_active = false;
uint32_t spam_timer = 0;

enum custom_keycodes {
    GMAIL = SAFE_RANGE,
    SPAM
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    case GMAIL:
        if (record->event.pressed) {
            // when keycode GMAIL is pressed
            SEND_STRING("rbavleeuwen@gmail.com");
        } else {
            // when keycode GMAIL is released
        }
    break;
    case SPAM: 
        if (record->event.pressed) {
            spam_active = !spam_active;
            spam_timer = timer_read32();
    }
    break;
    }
    return true;
};

void matrix_scan_user(void){
    if(spam_active){
        if(timer_elapsed32(spam_timer) > 1000){
            tap_code(KC_CAPS);
            spam_timer = timer_read32();
        }
    }
}
