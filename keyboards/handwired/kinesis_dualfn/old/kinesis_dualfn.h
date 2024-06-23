#ifndef KINESIS_DUALFN_H
#define KINESIS_DUALFN_H

#define ___ KC_NO

#define LAYOUT(                                    \
    k60, k61, k62, k63, k80, k81, k82, k83, k6A,   \
    k70, k71, k72, k73, k90, k91, k92, k93, k7A,   \
                                                   \
    k00, k10, k20, k30, k40, k50,                  \
    k01, k11, k21, k31, k41, k51,                  \
    k02, k12, k22, k32, k42, k52,                  \
    k03, k13, k23, k33, k43, k53,                  \
         k14, k24, k34, k44,                       \
/* Fit in between keys in rows 4, 9*/              \
/* Leads joined to make two rows of 3 keys */      \
                                       k54, k59,   \
                                            k69,   \
                                  k64, k04, k09,   \
                                                   \
                                                   \
    k65, k66, k67, k68, k85, k86, k87, k88, k8A,   \
    k75, k76, k77, k78, k95, k96, k97, k98, k9A,   \
                                                   \
/* Shared columns with left hand */                \
                                                   \
                   k05, k15, k25, k35, k45, k55,   \
                   k06, k16, k26, k36, k46, k56,   \
                   k07, k17, k27, k37, k47, k57,   \
                   k08, k18, k28, k38, k48, k58,   \
                        k19, k29, k39, k49,        \
/* Fit in between keys in rows 4, 9    */          \
    k74, k89,                                      \
    k84,                                           \
    k94, k79, k99,                                 \
                                                   \
    m00, m01, m02                                  \
) {                                                \
    { k00,  k01,  k02,  k03,  k04,  k05,  k06,  k07, k08, k09, m00 }, \
    { k10,  k11,  k12,  k13,  k14,  k15,  k16,  k17, k18, k19, m01 }, \
    { k20,  k21,  k22,  k23,  k24,  k25,  k26,  k27, k28, k29, m02 }, \
    { k30,  k31,  k32,  k33,  k34,  k35,  k36,  k37, k38, k39, ___ }, \
    { k40,  k41,  k42,  k43,  k44,  k45,  k46,  k47, k48, k49, ___ }, \
    { k50,  k51,  k52,  k53,  k54,  k55,  k56,  k57, k58, k59, k5A }, \
    { k60,  k61,  k62,  k63,  k64,  k65,  k66,  k67, k68, k69, k6A }, \
    { k70,  k71,  k72,  k73,  ___,  k75,  k76,  k77, k78, k79, k7A }, \
    { k80,  k81,  k82,  k83,  k84,  k85,  k86,  k87, k88, k89, k8A }, \
    { k90,  k91,  k92,  k93,  k94,  k95,  k96,  k97, k98, k99, k9A } \
}

/*  ---------------- LEFT HAND -----------------   ---------------- RIGHT HAND ---------------- */
#define LAYOUT_pretty(                                                                              \
    k60, k61, k62, k63, k80, k81, k82, k83, k6A,      k65, k66, k67, k68, k85, k86, k87, k88, k8A,  \
    k70, k71, k72, k73, k90, k91, k92, k93, k7A,      k75, k76, k77, k78, k85, k96, k97, k98, k9A,  \
    k00, k10, k20, k30, k40, k50,                                    k05, k15, k25, k35, k45, k55,  \
    k01, k11, k21, k31, k41, k51,                                    k06, k16, k26, k36, k46, k56,  \
    k02, k12, k22, k32, k42, k52,                                    k07, k17, k27, k37, k47, k57,  \
    k03, k13, k23, k33, k43, k53,                                    k08, k18, k28, k38, k48, k58,  \
         k14, k24, k34, k44,                                              k19, k29, k39, k49,       \
                             k54, k59,                          k74, k89,                           \
                                  k69,                          k84,                                \
                        k64, k04, k09,                          k94, k79, k99,                      \
                                                                                                    \
                                       m00, m01, m02                                                \
) {                                                    \
    { k00,  k01,  k02,  k03,  k04,  k05,  k06,  k07, k08, k09, m00 }, \
    { k10,  k11,  k12,  k13,  k14,  k15,  k16,  k17, k18, k19, m01 }, \
    { k20,  k21,  k22,  k23,  k24,  k25,  k26,  k27, k28, k29, m02 }, \
    { k30,  k31,  k32,  k33,  k34,  k35,  k36,  k37, k38, k39, ___ }, \
    { k40,  k41,  k42,  k43,  k44,  k45,  k46,  k47, k48, k49, ___ }, \
    { k50,  k51,  k52,  k53,  k54,  k55,  k56,  k57, k58, k59, k5A }, \
    { k60,  k61,  k62,  k63,  k64,  k65,  k66,  k67, k68, k69, k6A }, \
    { k70,  k71,  k72,  k73,  ___,  k75,  k76,  k77, k78, k79, k7A }, \
    { k80,  k81,  k82,  k83,  k84,  k85,  k86,  k87, k88, k89, k8A }, \
    { k90,  k91,  k92,  k93,  k94,  k95,  k96,  k97, k98, k99, k9A } \
}


/*
  Row pin configuration

  PF0   A
  PF1   B
  PF2   C
  PF3   G   0 = U4, 1 = U5


  Matrix Map (US QWERTY keyboard layout shown)

              | row 0  | row 1  | row 2  | row 3  | row 4  | row 5  | row 6  | row 7  | row 8  | row 9  | row A  | row B  | row C  | row D  | row E  | row F
        ----------------------------------------------------------------------------------------------------------------------------------------------------
  PB0   col0  | F6     | F8     | F7     | 5%     | 4$     | 3#     | 2@     | 1!     | =+     |        |        |        |        |        |        |
  PB1   col1  | F3     | F5     | F4     | T      | R      | E      | W      | Q      | Tab    |        |        |        |        |        |        |
  PB2   col2  | Esc    | F2     | F1     | G      | F      | D      | S      | A      | CapsLk |        |        |        |        |        |        |
  PB3   col3  | F9     | F11    | F10    | B      | V      | C      | X      | Z      | LShift | Up     |        | Down   |        | [{     | ]}     |
  PB4   col4  | F12    | ScrLk  | PrtSc  | Right  |        | Left   | Insert | `~     | 1!     | 6^     | 7&     | 8*     |        | 9(     | 0)     | -_
  PB5   col5  | Pause  |        |        | LAlt   |        | Home   |        | End    | Fn     | Y      | U      | I      |        | O      | P      | \|
  PB6   col6  |        |        |        | LCtrl  | Delete | Bksp   | RCtrl  | Enter  | Space  | H      | J      | K      |        | L      | ;:     | '"
  PB7   col7  |        |        |        |        | RGUI   |        | PageUp |        | PageDn | N      | M      | ,<     |        | .>     | /?     | RShift
*/

#endif
