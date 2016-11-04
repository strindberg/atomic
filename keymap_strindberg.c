// TODO:
// diaresis
// Varför funkar inte www-back?
// power/music/sound
// non-dead ~
// right-control som dubbel-funktion
// Lager med keypad
// Knapp som cyklar lager 0 -> 1 -> 2

#include "keymap_common.h"
#include "keymap_passwords.h"
#include "keymap_letters.h"

enum macro_id {
  PASSWORD1A,
  PASSWORD1B,
  PASSWORD2,
  PASSWORD3,
  SUSPEND,
  EMAIL1,

  PW_A,
  PW_B,
  PW_C,
  PW_D,
  PW_E,
  PW_F,
  PW_G,
  PW_H,
  PW_I,
  PW_J,
  PW_K,
  PW_L,
  PW_M,
  PW_N,
  PW_O,
  PW_P,
  PW_Q,
  PW_R,
  PW_S,
  PW_T,
  PW_U,
  PW_V,
  PW_W,
  PW_X,
  PW_Y,
  PW_Z,
};

enum function_id {
  TEENSY_KEY,
};

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  // Layer 0: Standard qwerty
  KEYMAP( ESC,    1,    2,    3,    4,    5,    6,    7,    8,    9,    0, MINS,  EQL, BSPC,
          TAB,    Q,    W,    E,    R,    T,    Y,    U,    I,    O,    P, LBRC, RBRC, NUHS, VOLU,
         LCTL,    A,    S,    D,    F,    G,    H,    J,    K,    L, SCLN, QUOT, ENT,        VOLD,
          FN0, FN11,    X,    C,    V,    B,    N,    M, COMM,  DOT, SLSH, RSFT,         UP,  DEL,
         NUBS, LGUI, LALT,  FN1,        SPC,        FN1, RALT, RGUI, FN31,       LEFT, DOWN, RGHT),

  // Layer 1: Function and movement keys
  KEYMAP( FN9,   F1,   F2,   F3,   F4,   F5,   F6,   F7,   F8,   F9,  F10,  F11,  F12, TRNS,
          GRV, TRNS, TRNS,   UP, TRNS,  FN4,  FN7,  FN8, PSCR, SLCK, PAUS, TRNS, TRNS, TRNS, TRNS,
         TRNS, TRNS, LEFT, DOWN, RGHT,  FN5, TRNS,  INS, HOME, PGUP, TRNS, TRNS, TRNS,       MUTE,
         TRNS, NUBS, TRNS, TRNS, TRNS,  FN6, TRNS,  DEL,  END, PGDN, TRNS, TRNS,       TRNS, TRNS,
         FN10, TRNS, TRNS, TRNS,       TRNS,       TRNS, TRNS, TRNS, TRNS,       TRNS, TRNS, TRNS),

  // Layer 2: Mouse keys
  KEYMAP(TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,
         TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, BTN1, MS_U, BTN2, TRNS, TRNS, TRNS, TRNS, TRNS,
         TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, MS_L, MS_D, MS_R, TRNS, TRNS, TRNS,       TRNS,
         TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,       TRNS, TRNS,
         TRNS, TRNS, ACL0, ACL1,       TRNS,       ACL2, TRNS, TRNS, TRNS,       TRNS, TRNS, TRNS),

  // Layer 3: Numpad
  KEYMAP(TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,
         TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,
         TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,       TRNS,
         TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,       TRNS, TRNS,
         TRNS, TRNS, TRNS, TRNS,       TRNS,       TRNS, TRNS, TRNS, TRNS,       TRNS, TRNS, TRNS),

  // Layer 4: Passwords
  KEYMAP(TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,
         TRNS, FN17, FN23,  FN5, FN18, FN20, FN25, FN21,  FN9, FN15, FN16, TRNS, TRNS, TRNS, TRNS,
         TRNS,  FN1, FN19,  FN4,  FN6,  FN7,  FN8, FN10, FN11, FN12, TRNS, TRNS, TRNS,       TRNS,
         TRNS, FN26, FN24,  FN3, FN22,  FN2, FN14, FN13, TRNS, TRNS, TRNS, TRNS,       TRNS, TRNS,
         TRNS, TRNS, TRNS, TRNS,       TRNS,       TRNS, TRNS, TRNS, TRNS,       TRNS, TRNS, TRNS),

  // Layer 5: Transparent template
  KEYMAP(TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,
         TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,
         TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,       TRNS,
         TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,       TRNS, TRNS,
         TRNS, TRNS, TRNS, TRNS,       TRNS,       TRNS, TRNS, TRNS, TRNS,       TRNS, TRNS, TRNS),
};

const action_t PROGMEM fn_actions[] = {
   [0] = ACTION_MODS_TAP_TOGGLE(MOD_LSFT),
   [1] = ACTION_LAYER_MOMENTARY(1),
   [4] = ACTION_MACRO(PASSWORD1A),
   [5] = ACTION_MACRO(PASSWORD2),
   [6] = ACTION_MACRO(PASSWORD3),
   [7] = ACTION_MACRO(SUSPEND),
   [8] = ACTION_MACRO(PASSWORD1B),
   [9] = ACTION_MACRO(EMAIL1),
  [10] = ACTION_FUNCTION(TEENSY_KEY),
  [11] = ACTION_LAYER_TAP_KEY(2, KC_Z),
  [31] = ACTION_LAYER_MOMENTARY(4), // NOTE: reserved. Cannot overlap with layer 4 actions
};

const action_t PROGMEM fn_actions_4[] = {
   [1] =  ACTION_MACRO(PW_A),
   [2] =  ACTION_MACRO(PW_B),
   [3] =  ACTION_MACRO(PW_C),
   [4] =  ACTION_MACRO(PW_D),
   [5] =  ACTION_MACRO(PW_E),
   [6] =  ACTION_MACRO(PW_F),
   [7] =  ACTION_MACRO(PW_G),
   [8] =  ACTION_MACRO(PW_H),
   [9] =  ACTION_MACRO(PW_I),
  [10] =  ACTION_MACRO(PW_J),
  [11] =  ACTION_MACRO(PW_K),
  [12] =  ACTION_MACRO(PW_L),
  [13] =  ACTION_MACRO(PW_M),
  [14] =  ACTION_MACRO(PW_N),
  [15] =  ACTION_MACRO(PW_O),
  [16] =  ACTION_MACRO(PW_P),
  [17] =  ACTION_MACRO(PW_Q),
  [18] =  ACTION_MACRO(PW_R),
  [19] =  ACTION_MACRO(PW_S),
  [20] =  ACTION_MACRO(PW_T),
  [21] =  ACTION_MACRO(PW_U),
  [22] =  ACTION_MACRO(PW_V),
  [23] =  ACTION_MACRO(PW_W),
  [24] =  ACTION_MACRO(PW_X),
  [25] =  ACTION_MACRO(PW_Y),
  [26] =  ACTION_MACRO(PW_Z),
};

#define FN_ACTIONS_4_SIZE   (sizeof(fn_actions_4) / sizeof(fn_actions_4[0]))

/* translates key to keycode */
uint8_t keymap_key_to_keycode(uint8_t layer, keypos_t key) {
    return pgm_read_byte(&keymaps[(layer)][(key.row)][(key.col)]);
}

/* translates Fn keycode to action */
action_t keymap_fn_to_action(uint8_t keycode) {
  uint8_t layer = biton32(layer_state);

  dprint("layer: ");
  dprintf("%d\n", layer);
  dprint("keycode ");
  dprintf("%d\n", keycode);

  action_t action;
  action.code = ACTION_NO;

  if (layer == 4 && FN_INDEX(keycode) < FN_ACTIONS_4_SIZE) {
    action.code = pgm_read_word(&fn_actions_4[FN_INDEX(keycode)]);
  }

  if (action.code == ACTION_NO) {
    action.code = pgm_read_word(&fn_actions[FN_INDEX(keycode)]);
  }

  return action;
}

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {
  if (record->event.pressed) {
    switch (id) {
    case PASSWORD1A: return MACRO_PASSWORD1A;
    case PASSWORD1B: return MACRO_PASSWORD1B;
    case PASSWORD2:  return MACRO_PASSWORD2;
    case PASSWORD3:  return MACRO_PASSWORD3;
    case SUSPEND:    return MACRO_SUSPEND;
    case EMAIL1:     return MACRO_EMAIL1;

    case PW_A:    return MACRO_PW_A;
    case PW_B:    return MACRO_PW_B;
    case PW_C:    return MACRO_PW_C;
    case PW_D:    return MACRO_PW_D;
    case PW_E:    return MACRO_PW_E;
    case PW_F:    return MACRO_PW_F;
    case PW_G:    return MACRO_PW_G;
    case PW_H:    return MACRO_PW_H;
    case PW_I:    return MACRO_PW_I;
    case PW_J:    return MACRO_PW_J;
    case PW_K:    return MACRO_PW_K;
    case PW_L:    return MACRO_PW_L;
    case PW_M:    return MACRO_PW_M;
    case PW_N:    return MACRO_PW_N;
    case PW_O:    return MACRO_PW_O;
    case PW_P:    return MACRO_PW_P;
    case PW_Q:    return MACRO_PW_Q;
    case PW_R:    return MACRO_PW_R;
    case PW_S:    return MACRO_PW_S;
    case PW_T:    return MACRO_PW_T;
    case PW_U:    return MACRO_PW_U;
    case PW_V:    return MACRO_PW_V;
    case PW_W:    return MACRO_PW_W;
    case PW_X:    return MACRO_PW_X;
    case PW_Y:    return MACRO_PW_Y;
    case PW_Z:    return MACRO_PW_Z;
    }
  }
  return MACRO_NONE;
}

void action_function(keyrecord_t *record, uint8_t id, uint8_t opt) {
  if (id == TEENSY_KEY) {
    clear_keyboard();
    print("\n\nJump to bootloader... ");
    _delay_ms(50);
    bootloader_jump(); // should not return
    print("not supported.\n");
  }
}
