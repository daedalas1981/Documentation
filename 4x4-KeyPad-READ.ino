// RobotDyn Keypad 4x4 Macro Script
/***********************************
// Arduino Pro Micro
// 3-Wire Connection
// ~ Data Pin on A0
// ~ Power 5V on VCC
// ~ Ground on GND
***********************************/
// Created by Robert Cole

// KEY REFERENCE GUIDE
/*
KEY_LEFT_CTRL
KEY_LEFT_SHIFT
KEY_LEFT_ALT
KEY_LEFT_GUI
KEY_RIGHT_CTRL
KEY_RIGHT_SHIFT
KEY_RIGHT_ALT
KEY_RIGHT_GUI
KEY_UP_ARROW
KEY_DOWN_ARROW
KEY_LEFT_ARROW
KEY_RIGHT_ARROW
KEY_BACKSPACE
KEY_TAB
KEY_RETURN
KEY_ESC
KEY_INSERT
KEY_DELETE
KEY_PAGE_UP
KEY_PAGE_DOWN
KEY_HOME
KEY_END
KEY_CAPS_LOCK
KEY_F1
KEY_F2
KEY_F3
KEY_F4
KEY_F5
KEY_F6
KEY_F7
KEY_F8
KEY_F9
KEY_F10
KEY_F11
KEY_F12
KEY_F13
KEY_F14
KEY_F15
KEY_F16
KEY_F17
KEY_F18
KEY_F19
KEY_F20
KEY_F21
KEY_F22
KEY_F23
KEY_F24

*** KEY MODIFIERS ARE PLUS 136?! Not sure why. ***
* Example ~ F12 is 205. But on the USB HID LIST as 69. ***
* https://www.usb.org/sites/default/files/documents/hut1_12v2.pdf
* or search google for hut1_12v2.pdf ***
* 
#define KEY_PRNT_SCRN 0xCE
*/

// Include Keyboard Library
#include <Keyboard.h>

// Analog Data Pin = Pin A0 or Pin 18
const int buttonPin = A0;

int get_button(int val) {
 // get analog input value
 if(val>1000){
    Keyboard.press(KEY_LEFT_CTRL); //Presses the CTRL key.
    Keyboard.press(KEY_F13); //Presses the F13 key.
    delay(200);
    Keyboard.releaseAll();
    return 1;
 }
 else if(val>900){
    Keyboard.press(KEY_LEFT_CTRL); //Presses the CTRL key.
    Keyboard.press(KEY_F14); //Presses the F14 key.
    delay(200);
    Keyboard.releaseAll();
    return 2;
 }
 else if(val>820){
    Keyboard.press(KEY_LEFT_CTRL); //Presses the CTRL key.
    Keyboard.press(KEY_F15); //Presses the F15 key.
    delay(200);
    Keyboard.releaseAll();
    return 3;
 }
 else if(val>750){
    Keyboard.press(KEY_LEFT_CTRL); //Presses the CTRL key.
    Keyboard.press(KEY_F16); //Presses the F16 key.
    delay(200);
    Keyboard.releaseAll();
    return 4;
 }
 else if(val>660){
    Keyboard.press(KEY_LEFT_CTRL); //Presses the CTRL key.
    Keyboard.press(KEY_F17); //Presses the F17 key.
    delay(200);
    Keyboard.releaseAll();
    return 5;
 }
 else if(val>620){
    Keyboard.press(KEY_LEFT_CTRL); //Presses the CTRL key.
    Keyboard.press(KEY_F18); //Presses the F18 key.
    delay(200);
    Keyboard.releaseAll();
    return 6;
 }
 else if(val>585){
    Keyboard.press(KEY_LEFT_CTRL); //Presses the CTRL key.
    Keyboard.press(KEY_F19); //Presses the F19 key.
    delay(200);
    Keyboard.releaseAll();
    return 7;
 }
 else if(val>540){
    Keyboard.press(KEY_LEFT_CTRL); //Presses the CTRL key.
    Keyboard.press(KEY_F20); //Presses the F20 key.
    delay(200);
    Keyboard.releaseAll();
    return 8;
 }
 else if(val>500){
    Keyboard.press(KEY_LEFT_CTRL); //Presses the CTRL key.
    Keyboard.press(KEY_F21); //Presses the F21 key.
    delay(200);
    Keyboard.releaseAll();
    return 9;
 }
 else if(val>475){
    Keyboard.press(KEY_LEFT_CTRL); //Presses the CTRL key.
    Keyboard.press(KEY_F22); //Presses the F22 key.
    delay(200);
    Keyboard.releaseAll();
    return 10;
 }
 else if(val>455){
    Keyboard.press(KEY_LEFT_CTRL); //Presses the CTRL key.
    Keyboard.press(KEY_F23); //Presses the F23 key.
    delay(200);
    Keyboard.releaseAll();
    return 11;
 }
 else if(val>425){
    Keyboard.press(KEY_LEFT_CTRL); //Presses the CTRL key.
    Keyboard.press(KEY_F24); //Presses the F24 key.
    delay(200);
    Keyboard.releaseAll();
    return 12;
 }
 else if(val>370){
    /*
    Keyboard.press(KEY_LEFT_SHIFT); //Presses the LEFT SHIFT key.
    Keyboard.press(KEY_F13); //Presses the F13 key.
    */
    Keyboard.print("Hello World!");
    delay(200);
    Keyboard.releaseAll();
    return 13;
 }
 else if(val>300){
    /*
    Keyboard.press(KEY_LEFT_SHIFT); //Presses the LEFT SHIFT key.
    Keyboard.press(KEY_F14); //Presses the F14 key.
    */
    /*
    Keyboard.press(KEY_LEFT_GUI); //Presses the WINDOWS START key.
    */
    // Change TAB View
    Keyboard.press(KEY_LEFT_ALT); //Presses the LEFT ALT key.
    Keyboard.press(KEY_TAB); //Presses the TAB key.
    Keyboard.release(KEY_TAB); // Release Single Keypress.
    Keyboard.press(KEY_TAB); //Presses the TAB key.
    delay(200);
    Keyboard.releaseAll();
    return 14;
 }
 else if(val>260){
    /*
    Keyboard.press(KEY_LEFT_SHIFT); //Presses the LEFT SHIFT key.
    Keyboard.press(KEY_F15); //Presses the F15 key.
    */
    // COPY
    Keyboard.press(KEY_LEFT_CTRL); //Presses the CTRL key.
    Keyboard.press('c'); //Presses the C key.
    delay(200);
    Keyboard.releaseAll();
    return 15;
 }
 else if(val>200){
    /*
    Keyboard.press(KEY_LEFT_SHIFT); //Presses the LEFT SHIFT key.
    Keyboard.press(KEY_F16); //Presses the F16 key.
    */
    // PASTE
    Keyboard.press(KEY_LEFT_CTRL); //Presses the CTRL key.
    Keyboard.press('v'); //Presses the C key.
    delay(200);
    Keyboard.releaseAll();
    return 16;
 }
 else {
    return 0;
 } 
}

void setup() {
  // Keyboard Init
  Keyboard.begin();
  
  // Serial Port Init
  Serial.begin(9600);

  // Delay Setup, wait for Init's
  delay(200);
}

void loop() {
 // get value of analog input
 int valueA1=analogRead(buttonPin);
 // output data to serial port
 if (valueA1 > 100) {
  int pressedBtn = get_button(valueA1);
  Serial.println(valueA1);
  Serial.println(pressedBtn);
 }
 delay(150);
}
