enum custom_keycodes {
    GMAIL = SAFE_RANGE,
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
    }
    return true;
};
