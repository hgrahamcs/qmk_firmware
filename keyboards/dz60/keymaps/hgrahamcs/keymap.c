#include QMK_KEYBOARD_H

/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */
enum custom_keycode {
	BGN_AR = SAFE_RANGE,
	ORD_LIST,
	UOR_LIST,
	VERB,
	EQU,
	ARW
};

bool process_record_user(uint16_t keycode, keyrecord_t *record){
	switch(keycode) {
		case BGN_AR:
			if (record->event.pressed) {
				SEND_STRING("\\documentclass{article}"SS_TAP(X_ENT)SS_TAP(X_ENT)"\\begin{document}"SS_TAP(X_ENT)SS_TAP(X_ENT)"\\end{document}"SS_TAP(X_UP));
			} else {
				
			}
			break;
		case UOR_LIST:
			if (record->event.pressed) {
				SEND_STRING("\\begin{itemize}"SS_TAP(X_ENT)SS_TAP(X_ENT)"\\end{itemize}"SS_TAP(X_UP)"\\item ");
			} else {

			}
			break;
		case ORD_LIST:
			if (record->event.pressed) {
				SEND_STRING("\\begin{enumerate}"SS_TAP(X_ENT)SS_TAP(X_ENT)"\\end{enumerate}"SS_TAP(X_UP)"\\item ");
			} else {

			}
			break;
		case VERB:
			if (record->event.pressed) {
				SEND_STRING("\\begin{verbatim}"SS_TAP(X_ENT)SS_TAP(X_ENT)"\\end{verbatim}"SS_TAP(X_UP));
			} else {

			}
			break;
		case EQU:
			if (record->event.pressed) {
				SEND_STRING("\\begin{equation}"SS_TAP(X_ENT)SS_TAP(X_TAB)"\\begin{split}"SS_TAP(X_ENT)SS_TAP(X_ENT)"\\end{split}"SS_TAP(X_ENT)"\\end{equation}"SS_TAP(X_UP)SS_TAP(X_UP)SS_TAP(X_TAB)SS_TAP(X_TAB));
			} else {

			}
			break;
		case ARW:
			if (record->event.pressed) {
				SEND_STRING("->");
			} else {

			}
			break;
	}
	return true;
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_all(KC_GESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSLS, KC_BSLS, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSPC, KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT, KC_LSFT, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, MO(2), KC_RSFT, KC_RSFT, KC_LCTL, KC_LGUI, KC_LALT, KC_SPC, KC_SPC, KC_SPC, KC_RALT, KC_LGUI, KC_NO, MO(1), KC_RCTL),
	[1] = LAYOUT_all(KC_GRV, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_BSPC, KC_BSPC, KC_TRNS, RGB_TOG, RGB_MOD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, KC_TRNS, KC_PSCR, KC_SLCK, KC_PAUS, RESET, KC_TRNS, RGB_M_P, RGB_RMOD, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_INS, KC_HOME, KC_PGUP, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, BL_DEC, BL_TOGG, BL_INC, BL_STEP, KC_TRNS, KC_TRNS, KC_DEL, KC_END, KC_PGDN, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[2] = LAYOUT_all(KC_GESC, BGN_AR, UOR_LIST, ORD_LIST, VERB, EQU, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, ARW, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_UP, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LEFT, KC_DOWN, KC_RGHT, KC_TRNS, KC_TRNS, KC_H, KC_J, KC_K, KC_L, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS)
};
