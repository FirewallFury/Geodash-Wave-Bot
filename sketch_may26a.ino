#include <Mouse.h>
#include <Keyboard.h>
#include <KeyboardLayout.h>
#include <Keyboard_da_DK.h>
#include <Keyboard_de_DE.h>
#include <Keyboard_es_ES.h>
#include <Keyboard_fr_FR.h>
#include <Keyboard_hu_HU.h>
#include <Keyboard_it_IT.h>
#include <Keyboard_pt_PT.h>
#include <Keyboard_sv_SE.h>
void setup() {
Mouse.begin();
delay(10000);
}

void loop() {
Mouse.press(MOUSE_LEFT);
delay(50);
Mouse.release();
delay(50);
}
