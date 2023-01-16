#include QMK_KEYBOARD_H

#define BASE 0
#define NAV  1
#define NUM  2

// home row mods - left
#define HOME_C LGUI_T(KC_C)
#define HOME_R LALT_T(KC_R)
#define HOME_S LCTL_T(KC_S)
#define HOME_T LSFT_T(KC_T)

// home row mods - right
#define HOME_N LSFT_T(KC_N)
#define HOME_E LCTL_T(KC_E)
#define HOME_I LALT_T(KC_I)
#define HOME_A LGUI_T(KC_A)

// thumb keys
#define NAV_SPC LT(NAV, KC_SPC)
#define NUM_BSPC LT(NUM, KC_BSPC)

// thumb keys
//#define MO_NAV MO(NAV)
//#define MO_NUM MO(NUM)

// one-shot mods
//#define OS_LSFT OSM(MOD_LSFT)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

// BASE LAYER
[BASE] = LAYOUT_planck_grid(
        KC_W    , KC_L    , KC_Y    , KC_P    , KC_B    , XXXXXXX , XXXXXXX , KC_Z    , KC_F    , KC_O    , KC_U    , KC_QUOT ,
        HOME_C  , HOME_R  , HOME_S  , HOME_T  , KC_G    , XXXXXXX , XXXXXXX , KC_M    , HOME_N  , HOME_E  , HOME_I  , HOME_A  ,
        KC_Q    , KC_J    , KC_V    , KC_D    , KC_K    , XXXXXXX , XXXXXXX , KC_X    , KC_H    , KC_SLSH , KC_COMM , KC_DOT  ,
        XXXXXXX , XXXXXXX , KC_ESC  , NAV_SPC , KC_ENT  , XXXXXXX , XXXXXXX , KC_TAB  , NUM_BSPC, KC_DEL  , XXXXXXX , XXXXXXX 
),

// NAVIGATION LAYER
[NAV] = LAYOUT_planck_grid(
        XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , KC_PGUP , KC_HOME , KC_UP   , KC_END  , XXXXXXX ,
        KC_LGUI , KC_LALT , KC_LCTL , KC_LSFT , XXXXXXX , XXXXXXX , XXXXXXX , KC_PGDN , KC_LEFT , KC_DOWN , KC_RIGHT, XXXXXXX ,
        XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX ,
        XXXXXXX , XXXXXXX , XXXXXXX , _______ , XXXXXXX , XXXXXXX , XXXXXXX , KC_TAB  , KC_BSPC , KC_DEL  , XXXXXXX , XXXXXXX 
),

// NUMBER/SYMBOL LAYER
[NUM] = LAYOUT_planck_grid(
        KC_GRV  , KC_7    , KC_8    , KC_9    , KC_LBRC , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , 
        KC_SCLN , KC_4    , KC_5    , KC_6    , KC_EQL  , XXXXXXX , XXXXXXX , XXXXXXX , KC_LSFT , KC_LCTL , KC_LALT , KC_LGUI ,
        KC_BSLS , KC_1    , KC_2    , KC_3    , KC_MINS , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , 
        XXXXXXX , XXXXXXX , XXXXXXX , KC_0    , KC_RBRC , XXXXXXX , XXXXXXX , XXXXXXX , _______ , XXXXXXX , XXXXXXX , XXXXXXX 
),
};
