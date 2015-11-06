/*
 * Xe0n0's keymap
 */
#include "keymap_common.h"
#include "matrix.h"


#ifdef KEYMAP_SECTION_ENABLE
const uint16_t keymaps[][KEYCODE_ROWS][KEYCODE_COLS] __attribute__ ((section (".keymap.keymaps"))) = {
#else
const uint16_t keymaps[][KEYCODE_ROWS][KEYCODE_COLS] PROGMEM = {
#endif

    /** Layer 0: Colemak Programmer mode
     */
    [0] = KEYMAP_EXT(ESC, U_1,  U_2, U_3,  U_4, U_5, U_6, U_7, U_8, U_9, U_0, MINS, EQL, BSLS, GRV, \
           TAB, Q,  W,   F,   P,   G,   J,   L,   U,   Y, SCLN,  LBRC, RBRC, BSPC, \
           LCTL,A,  R,   S,   T,   D,   H,   N,   E,   I,  O,    L_QUOT, ENT,\
           LSFT,Z,  X,   C,   V,   B,   K,   M, COMM, DOT,  SLSH,  RSFT, FN1, \
              LALT,LGUI,          SPC,                RGUI, FN6,\
            \
           ESC, L_1,  L_2,  L_3,   L_4,   L_5,   L_6,   L_7,   L_8,   L_9,    L_0, MINS, EQL, BSLS, GRV, \
           TAB, Q,  W,   F,   P,   G,   J,   L,   U,   Y, SCLN,  LBRC, RBRC, BSPC, \
           LCTL,A,  R,   S,   T,   D,   H,   N,   E,   I,  O,    U_QUOT, ENT,\
           LSFT,Z,  X,   C,   V,   B,   K,   M, COMM, DOT,  SLSH,  RSFT, FN1, \
              LALT,LGUI,          SPC,                RGUI, FN6),

    /* Layer 1: Colemak mode
     */
    [1] = KEYMAP(ESC, 1,  2,  3,   4,   5,   6,   7,   8,   9,    0, MINS, EQL, BSLS, GRV, \
           TAB, Q,  W,   F,   P,   G,   J,   L,   U,   Y, SCLN,  LBRC, RBRC, BSPC, \
           LCTL,A,  R,   S,   T,   D,   H,   N,   E,   I,  O,    QUOT, TRNS,\
           LSFT,Z,  X,   C,   V,   B,   K,   M, COMM, DOT,  SLSH,  RSFT,TRNS, \
              TRNS,TRNS,          TRNS,                TRNS,TRNS),

    /* Layer 2: Qwerty Layer
     * ,-----------------------------------------------------------.
     * |Esc|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|  \|  `|
     * |-----------------------------------------------------------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|Backs|
     * |-----------------------------------------------------------|
     * |Contro|  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Fn2     |
     * |-----------------------------------------------------------|
     * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .| /|Shift |Fn1|
     * `-----------------------------------------------------------'
     *       |Alt|GUI |         SPC           |Gui |Alt|
     *       `-------------------------------------------'
     */
    [2] = KEYMAP(ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSLS,GRV, \
           TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSPC, \
           LCTL,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN, QUOT,ENT, \
           LSFT,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH, RSFT,FN1, \
                LALT,LGUI,          SPC,                RGUI,FN6),

/* [2] = KEYMAP_EXT(ESC,U_7,LBRC,U_LBRC,U_RBRC,U_9,EQL,U_8,U_0,U_EQL,RBRC,U_1,U_3, U_BSLS, U_4, \ */
/*            TAB, SCLN,COMM,DOT, P,  Y,   F,  G,  C,  R,  L,  SLSH,  U_2, BSPC, \ */
/*            LCTL, A,  O,    E,  U,  I,   D,   H,  T,  N,  S,  MINS, TRNS,\ */
/*            LSFT, QUOT, Q,  J,  K,  X,   B,   M,  W,  V,  Z,  RSFT,  TRNS, \ */
/*               TRNS,TRNS,          TRNS,                TRNS,TRNS,\ */
/*               \ */
/*           ESC, 5, L_1,L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, L_0,L_GRV, BSLS, GRV, \ */
/*            TAB, SCLN,COMM,DOT, P,  Y,   F,  G,  C,  R,  L,  SLSH,  6, BSPC, \ */
/*            LCTL, A,  O,    E,  U,  I,   D,   H,  T,  N,  S,  MINS, TRNS,\ */
/*            LSFT, QUOT, Q,  J,  K,  X,   B,   M,  W,  V,  Z,  RSFT,  TRNS, \ */
/*               TRNS,TRNS,          TRNS,                TRNS,TRNS), */

[3] = KEYMAP(ESC, 1, 2, 3, U_EQL, MINS, NO, NO, NO, NO, NO,LBRC, RBRC, BSLS, GRV, \
           TAB, 4, 5, 6, U_LBRC,  U_RBRC ,7, 8, 9, NO, NO, NO, NO, BSPC, \
           LCTL, 7, 8, 9,  EQL, EQL, 4, 5, 6,  NO,  NO, NO, TRNS,\
           LSFT, DOT, 0, NO,  NO, NO, 1, 2, 3,  NO,  NO,  TRNS,  TRNS, \
              TRNS,TRNS,          TRNS,                TRNS, FN6),

    /* Layer 9: HHKB mode (HHKB Fn)
     * ,-----------------------------------------------------------.
     * |Esc| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Ins|Del|
     * |-----------------------------------------------------------|
     * |Caps |   |   |   |   |   |   |   |Psc|Slk|Pus|Up |   |Backs|
     * |-----------------------------------------------------------|
     * |Contro|VoD|VoU|Mut|   |   |  *|  /|Hom|PgU|Lef|Rig|Enter   |
     *
     * |-----------------------------------------------------------|
     * |Shift   |   |   |   |   |   |  +|  -|End|PgD|Dow|Shift |   |
     * `-----------------------------------------------------------'
     *       |Alt|GUI  |         Space         |GUI  |Alt|
     *       `-------------------------------------------'
     */
[9] = KEYMAP(FN3, FN4,  FN5,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, INS, MAC_EJE, \
           CAPS,F1,  F2,  F3,  NO,  NO,  NO,  NO,  PSCR,SLCK,PAUS, UP,  NO,  DEL, \
           LCTL,VOLD,VOLU,MUTE,NO,  FN9, PAST,PSLS,HOME,PGUP,LEFT,RGHT,ENT, \
           LSFT,F18,MPLY, F19, NO,  NO,  PPLS,PMNS,END, PGDN,DOWN,RSFT,TRNS, \
              TRNS,TRNS,          TRNS,                TRNS,TRNS),

};
/* id for user defined functions */
enum function_id {
    TEST,
};

enum macro_id {
    HELLO,
    VOLUP,
    MTEST,
};


/*
 * Fn action definition
 */
#ifdef KEYMAP_SECTION_ENABLE
const uint16_t fn_actions[] __attribute__ ((section (".keymap.fn_actions"))) = {
#else
const uint16_t fn_actions[] PROGMEM = {
#endif
    [0] = ACTION_DEFAULT_LAYER_SET(0),                // Default layer(not used)
    [1] = ACTION_LAYER_MOMENTARY(9),                 // HHKB layer(toggle with 5 taps)
    [2] = ACTION_LAYER_TAP_KEY(3, KC_ENT),          // Cursor layer with Slash*
//  [3] = ACTION_LAYER_TAP_KEY(3, KC_SCLN),           // Mousekey layer with Semicolon*
    /* [2] = ACTION_MODS_TAP_KEY(MOD_RCTL, KC_ENT),      // RControl with tap Enter* */
    [3] = ACTION_LAYER_SET(0, ON_RELEASE),
    [4] = ACTION_LAYER_TOGGLE(1),                 // Dvorak Layer
    [5] = ACTION_LAYER_TOGGLE(2),                 // Dvorak Programmer Layer
    [6] = ACTION_LAYER_MOMENTARY(3),            // NumPad
//    [7] = ACTION_LAYER_TOGGLE(3),                     // Mousekey layer(toggle)
//    [9] = ACTION_MODS_KEY(MOD_LSFT, KC_4),            // Shift stuck test

//  [8] = ACTION_LMOD_TAP_KEY(KC_LCTL, KC_BSPC),       // LControl with tap Backspace
//  [9] = ACTION_LMOD_TAP_KEY(KC_LCTL, KC_ESC),        // LControl with tap Esc
//    [31] = ACTION_FUNCTION(LSHIFT_LPAREN),         // Function: LShift with tap '('
//  [15] = ACTION_MACRO(HELLO),                        // Macro: say hello
//  [9] = ACTION_MACRO(VOLUP),                         // Macro: media key
};


/*
 * Macro definition
 */
const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
    switch (id) {
        case HELLO:
            return (record->event.pressed ?
                    MACRO( I(0), T(H), T(E), T(L), T(L), W(255), T(O), END ) :
                    MACRO_NONE );
        case VOLUP:
            return (record->event.pressed ?
                    MACRO( D(VOLU), U(VOLU), END ) :
                    MACRO_NONE );
        case MTEST:
            if (matrix_is_on(3, 4))
              return MACRO(D(LSFT), T(2), U(LSFT), END);
            else
              return MACRO(T(1), END);
    }
    return MACRO_NONE;
}



/*
 * user defined action function
 */
void action_function(keyrecord_t *record, uint8_t id, uint8_t opt)
{
    if (record->event.pressed) dprint("P"); else dprint("R");
    dprintf("%d", record->tap.count);
    if (record->tap.interrupted) dprint("i");
    dprint("\n");

    switch (id) {
        case TEST:
            if (record->event.pressed) {
            }
            else {
            }
            /* // Shift parentheses example: LShft + tap '(' */
            /* // http://stevelosh.com/blog/2012/10/a-modern-space-cadet/#shift-parentheses */
            /* // http://geekhack.org/index.php?topic=41989.msg1304899#msg1304899 */
            /* if (record->event.pressed) { */
            /*     if (record->tap.count > 0 && !record->tap.interrupted) { */
            /*         if (record->tap.interrupted) { */
            /*             dprint("tap interrupted\n"); */
            /*             register_mods(MOD_BIT(KC_LSHIFT)); */
            /*         } */
            /*     } else { */
            /*         register_mods(MOD_BIT(KC_LSHIFT)); */
            /*     } */
            /* } else { */
            /*     if (record->tap.count > 0 && !(record->tap.interrupted)) { */
            /*         add_weak_mods(MOD_BIT(KC_LSHIFT)); */
            /*         send_keyboard_report(); */
            /*         register_code(KC_9); */
            /*         unregister_code(KC_9); */
            /*         del_weak_mods(MOD_BIT(KC_LSHIFT)); */
            /*         send_keyboard_report(); */
            /*         record->tap.count = 0;  // ad hoc: cancel tap */
            /*     } else { */
            /*         unregister_mods(MOD_BIT(KC_LSHIFT)); */
            /*     } */
            /* } */
            break;
    }
}
