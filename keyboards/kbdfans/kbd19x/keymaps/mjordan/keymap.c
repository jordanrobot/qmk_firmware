#include QMK_KEYBOARD_H
extern rgblight_config_t rgblight_config;

void eeconfig_init_user(void) {
	//rgblight_sethsv(110, 255, 255);
};

void matrix_init_user() {
	set_unicode_input_mode(UC_WINC);
};

void keyboard_post_init_user(void) {
  rgblight_enable_noeeprom();
	//for Lime Keycaps  rgblight_sethsv_noeeprom(55, 255, 255);
  //rgblight_sethsv_noeeprom_green();
  //rgblight_sethsv_noeeprom(20, 255, 255); //orange highlight
  rgblight_sethsv_noeeprom(0, 255, 255); //orange highlight

  rgblight_mode_noeeprom(RGBLIGHT_MODE_BREATHING + 3);
};

// Layer Declarations
enum {
    _QUERTY = 0,
    _COLOR = 1,
    _MACROS = 2,
    _SYMBOLS = 3
};

enum custom_keycodes {
	ACADEND = SAFE_RANGE,
	ACADQUA,
	ACADMTP,
	ACADTAN,
    ACADINT,
    ACADPER,
    ACADMM,
    ACADIN,
    ACADCEN
};

enum unicode_names {
	DIAM,
	TIMES,
	APPROX,
	PLUSMINUS,
	GTOET,
	LTOET,
	DEGREE,
	ALPHA,
	ALPHA_U,
	BETA,
	BETA_U,
	GAMMA,
	GAMMA_U,
	DELTA,
	DELTA_U,
	EPSILON,
	EPSILON_U,
	ETA,
	ETA_U,
	THETA,
	THETA_U,
	LAMBDA,
	LAMBDA_U,
	MU,
	MU_U,
	XI,
	XI_U,
	PI,
	PI_U,
	RHO,
	RHO_U,
	SIGMA,
	SIGMA_U,
	TAU,
	TAU_U,
	PHI,
	PHI_U,
	OMEGA,
	OMEGA_U
};

const uint32_t PROGMEM unicode_map[] = {
	[DIAM]		= 0x2300,
	[TIMES]		= 0x00D7,
	[APPROX]	= 0x2248,
	[PLUSMINUS] = 0x00B1,
	[GTOET]		= 0x2265,
	[LTOET]		= 0x2264,
	[DEGREE]	= 0x00B0,
	[ALPHA]		= 0x03b1,//
	[ALPHA_U]	= 0x0391,//
	[BETA]		= 0x03B2,//
	[BETA_U]	= 0x0392,//
	[GAMMA]		= 0x1D6FE,// //0x03B3,
	[GAMMA_U]	= 0x0393,//
	[DELTA]		= 0x03B3,//
	[DELTA_U]	= 0x0394,//
	[EPSILON]	= 0x03B5,//
	[EPSILON_U]	= 0x0395,//
	[ETA]		= 0x03B7,//
	[ETA_U]		= 0x0397,//
	[THETA]		= 0x03B8,//
	[THETA_U]	= 0x0398,
	[LAMBDA]	= 0x03BB,//
	[LAMBDA_U]	= 0x039B,//
	[MU]		= 0x03BC,//
	[MU_U]		= 0x039C,//
	[XI]		= 0x03BE,//
	[XI_U]		= 0x039E,//
	[PI]		= 0x1D70B, //0x03C0,
	[PI_U]		= 0x03A0,
	[RHO]		= 0x03C1,//
	[RHO_U]		= 0x03A1,//
	[SIGMA]		= 0x03C3,//
	[SIGMA_U]	= 0x03A3,//
	[TAU]		= 0x1D70F,//
	[TAU_U]		= 0x03A4,
	[PHI]		= 0x03D5,
	[PHI_U]		= 0x03A6,
	[OMEGA]		= 0x1D714,//
	[OMEGA_U]	= 0x03A9//
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[_QUERTY] = LAYOUT_all(
		KC_ESC, 	   	KC_ESC, 		KC_F2,	 		KC_F3,		 		KC_F4,  		KC_F5,  		KC_F6,  	KC_F7,  		KC_F8,  		KC_F9,  		KC_F10, 	KC_F11, 	KC_F12,  		KC_PSCR,	KC_DEL, 	KC_INS, 	KC_QUOT,	KC_DQUO,
		LT(1,KC_GRV),  	KC_1,   		KC_2, 	 		KC_3, 				KC_4,   		KC_5,   		KC_6,   	KC_7,   		KC_8,   		KC_9,   		KC_0,   	KC_MINS,	KC_EQL,  		KC_BSPC,	KC_BSPC,	KC_NLCK,	KC_PSLS,	KC_PAST,	KC_PMNS,
		LT(3,KC_TAB),	KC_Q,	  		KC_W,   		KC_E, 	 			KC_R,			KC_T,   		KC_Y,   	KC_U,   		KC_I,   		KC_O,   		KC_P,   	KC_LBRC,	KC_RBRC,		KC_BSLS, 				KC_P7,  	KC_P8,  	KC_P9,		KC_PPLS,
		LT(2,KC_CAPS), 	KC_A,		  	KC_S,			KC_D, 				KC_F,  			KC_G,   		KC_H,   	KC_J,   		KC_K,   		KC_L,   		KC_SCLN,	KC_QUOT,	KC_ENT,  								KC_P4,  	KC_P5,  	KC_P6,  	KC_PPLS,	KC_LSPO,
		KC_LSFT,	   	KC_Z,   		KC_X, 	 		KC_C, 		  		KC_V,   		KC_B,   		KC_N,   	KC_M,   		KC_COMM,		KC_DOT, 		KC_SLSH,	KC_RSPC,	KC_UP,   								KC_P1,  	KC_P2,  	KC_P3,  	KC_PENT,
		KC_LCTL,  		KC_LGUI,		KC_LALT,		KC_SPC,				KC_RALT,		KC_RGUI,		KC_RCTL,																KC_LEFT,	KC_DOWN,		KC_RGHT,							KC_P0,  	KC_PDOT,	KC_PENT),	
	
	[_COLOR] = LAYOUT_all(
		RESET, 		    KC_F1,			_______,  		_______, 			_______,   		_______,   		_______,  	_______,  		_______,  		_______,		_______,	_______,	_______,		_______,		_______,   	_______,  	_______,	_______,
		_______, 	    RGB_M_P,		RGB_M_B,		RGB_M_R,			RGB_M_SW,		RGB_M_SN,		RGB_M_K,	RGB_M_X,		RGB_M_G,		_______,		_______,	_______,	_______,		_______,		_______,   	RGB_SPD,	_______,	RGB_SPI,	_______,
		_______, 	    _______,  		_______,  		_______,			_______,   		_______,   		_______,  	_______,  		_______,  		_______,		_______,	_______,	_______,		_______,					RGB_RMOD,	RGB_VAI,	RGB_MOD, 	_______,
		_______,  		_______,  		_______,  		_______, 			_______,   		_______,  		_______,  	_______,  		_______,		_______,		_______,	_______,	_______,									RGB_HUD, 	RGB_TOG,	RGB_HUI,	_______,		_______,
		_______,  		_______,  		_______,  		_______,			_______,   		_______,  		_______,  	_______,  		_______,		_______,		_______,	_______,	_______,									RGB_SAD, 	RGB_VAD,	RGB_SAI,	_______,
		KC_LCTL, 		_______,  		_______, 		_______, 			_______,   		_______,  		_______,  																_______,  	_______,		_______,								KC_NO,		_______,	_______),

	[_MACROS] = LAYOUT_all(
		RESET,			KC_F1,			KC_NO,			KC_NO,				KC_NO,			KC_NO,			KC_NO,		KC_NO,			KC_NO,			_______,			KC_NO,		KC_NO,		KC_NO,			KC_NO,		KC_NO,		KC_NO,		KC_NO, 		KC_NO,
		X(APPROX),		ACADMM,			ACADIN,			X(DIAM),			KC_NO,			KC_NO,			KC_NO,		KC_NO,			X(TIMES),		_______,			KC_NO,		KC_NO,		X(PLUSMINUS),	KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO,
		KC_NO,			ACADQUA,		KC_NO,			ACADEND,			ACADPER,		ACADTAN,		KC_NO,		KC_NO,			ACADINT,		_______,		KC_NO,		KC_NO,		KC_NO,			KC_NO,					KC_MPLY,	KC_VOLU,	KC_MSTP,	KC_NO,		
		KC_NO,			KC_NO,			KC_NO,			X(DEGREE),			KC_NO,			KC_NO,			KC_NO,		KC_NO,			KC_NO,			KC_NO,			KC_NO,		KC_NO,		KC_NO,									KC_MPRV,	KC_MUTE,	KC_MNXT, 	KC_NO,		KC_NO,
		KC_NO, 			KC_NO, 			KC_NO,			ACADCEN,			KC_NO,			KC_NO,			KC_NO,		ACADMTP,		X(LTOET),		X(GTOET),		KC_NO,		KC_NO,		KC_PGUP,								KC_NO,		KC_VOLD,	KC_NO,		KC_NO,	
		KC_NO,			KC_NO,			KC_NO,			KC_NO,				KC_NO,			KC_NO,			KC_NO,																	KC_HOME,	KC_PGDN,		KC_END,								KC_NO,		KC_NO,		KC_NO),

	[_SYMBOLS] = LAYOUT_all(
		RESET,			KC_F1,			KC_NO,			KC_NO,				KC_NO,			KC_NO,			KC_NO,		KC_NO,			KC_NO,			KC_NO,			KC_NO,		KC_NO,		KC_NO,			KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO,
		X(APPROX),		KC_NO,			KC_NO,			KC_NO,				KC_NO,			KC_NO,			KC_NO,		KC_NO,			KC_NO,			KC_NO,			KC_NO,		KC_NO,		KC_NO,			KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO,
		KC_NO,			KC_NO,			KC_NO,	 XP(EPSILON, EPSILON_U),XP(RHO, RHO_U), XP(THETA, TAU),		KC_NO,		KC_NO,			KC_NO,	XP(OMEGA, OMEGA_U),	XP(PI, PI_U),XP(PHI, PHI_U),KC_NO,			KC_NO,					RGB_RMOD,	RGB_VAI,	RGB_MOD,	KC_NO,
		KC_NO,	 XP(ALPHA, ALPHA_U),XP(SIGMA, SIGMA_U),XP(DELTA_U, DELTA),	KC_NO,	XP(GAMMA,GAMMA_U),	XP(ETA, ETA_U),	KC_NO,			KC_NO,	XP(LAMBDA,LAMBDA_U),	KC_NO,		KC_NO,		KC_NO,									RGB_HUD,	RGB_TOG,	RGB_HUI,	KC_NO,		KC_NO,
		KC_NO,			KC_NO,		XP(XI, XI_U),		KC_NO,				KC_NO,	 XP(BETA, BETA_U),		KC_NO,	XP(MU, MU_U),		KC_NO,			KC_NO,			KC_NO,		KC_NO,		KC_NO,									RGB_SAD,	RGB_VAD,	RGB_SAI,	KC_NO,
		KC_NO,			KC_NO,			KC_NO,			KC_NO,				KC_NO,			KC_NO,			KC_NO,																	KC_NO,		KC_NO, 			KC_NO, 								KC_NO, 		KC_NO, 		KC_NO)
};



//custom macro keycodes
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	switch (keycode) {
	case ACADEND:
		if (record->event.pressed) {
			// when keycode ACADEND is pressed
			SEND_STRING("end\n");
		}
		else {
			// when keycode ACADEND is released
		}
		break;
	case ACADQUA:
		if (record->event.pressed) {
			// when keycode ACADQUA is pressed
			SEND_STRING("qua\n");
		}
		else {
			// when keycode ACADQUA is released
		}
		break;
	case ACADMTP:
		if (record->event.pressed) {
			// when keycode ACADMTP is pressed
			SEND_STRING("mtp\n");
		}
		else {
			// when keycode ACADMTP is released
		}
		break;
	case ACADTAN:
		if (record->event.pressed) {
			// when keycode ACADTAN is pressed
			SEND_STRING("tan\n");
		}
		else {
			// when keycode ACADTAN is released
		}
		break;
	case ACADINT:
		if (record->event.pressed) {
			// when keycode ACADINT is pressed
			SEND_STRING("int\n");
		}
		else {
			// when keycode ACADINT is released
		}
		break;
	case ACADPER:
		if (record->event.pressed) {
			// when keycode ACADPER is pressed
			SEND_STRING("PER\n");
		}
		else {
			// when keycode ACADPER is released
		}
		break;
	case ACADMM:
		if (record->event.pressed) {
			// when keycode ACADMM is pressed
			SEND_STRING("'mm\n");
		}
		else {
			// when keycode ACADMM is released
		}
		break;
	case ACADIN:
		if (record->event.pressed) {
			// when keycode ACADIN is pressed
			SEND_STRING("'in\n");
		}
		else {
			// when keycode ACADIN is released
		}
		break;
	case ACADCEN:
		if (record->event.pressed) {
			// when keycode ACADCEN is pressed
			SEND_STRING("cen\n");
		}
		else {
			// when keycode ACADCEN is released
		}
		break;

	}
    return true;
};




// RGB Modes
// 1 = Static
// 2-5 = Breathing
// 6-8 = Rainbow
// 9-14 = Swirl
// 15-20 = Snake
// 21-24 = Nightrider
// 25 = Christmas
// 26-30 = Static Gradient
const uint8_t RGBLED_BREATHING_INTERVALS[] PROGMEM = {55, 255, 255, 18};

uint8_t prev = 0;
uint32_t check;
uint32_t desiredFX = 5;

//Change the RGB colors based on the activated layer
uint32_t layer_state_set_user(uint32_t state) {
	uint8_t currentLayer = biton32(state);
	switch (currentLayer) {
		
		//qwerty layer
		case _QUERTY:
			if (prev != 1) {
			rgblight_mode_noeeprom(desiredFX);
			// Lime-Green rgblight_sethsv_noeeprom(65, 255, 255);
			// RED rgblight_sethsv_noeeprom(20, 255, 255);
			rgblight_sethsv_noeeprom(0, 255, 255);
			}
			prev = 0;
		break;

		//macros layer
		case _MACROS:
			desiredFX = rgblight_config.mode;
			rgblight_sethsv_noeeprom_green();
			rgblight_mode_noeeprom(1);
//			rgblight_sethsv_noeeprom(0, 255, 255);
		break;

		//symbols layer
		case _SYMBOLS:
			//desiredFX = state;
			desiredFX = rgblight_config.mode;
			rgblight_sethsv_noeeprom_blue();
			rgblight_mode_noeeprom(1);
//			rgblight_sethsv_noeeprom(180, 255, 255);
		break;
		

			//color layer
		case _COLOR:
			prev = 1;
		break;

		default :
		;
	} //end switch

	return state;
}; //end layer_state_set_user


void matrix_scan_user(void) {

};

void led_set_user(uint8_t usb_led) {

};
