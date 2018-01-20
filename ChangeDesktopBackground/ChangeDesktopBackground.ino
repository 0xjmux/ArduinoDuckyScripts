#include <Keyboard.h>


/*
 * Written by GarrukApex January 19, 2018. Used to change the desktop background on a Windows 10 PC, using an Arduino
 * Pro Micro as a USB Rubber Ducky. 
 */



void setup() {
  // put your setup code here, to run once:

pinMode(3, INPUT_PULLUP);     //If switch is pushed, enter programming mode (AKA infinite while loop)
if (digitalRead(3) == LOW) {
while(1);
}
Serial.begin(9600);
Keyboard.begin();

delay(5000);
Keyboard.press(KEY_LEFT_CTRL);  //Opens Start Menu
Keyboard.press(KEY_ESC);
Keyboard.releaseAll();
delay(500);
Keyboard.print("iexplore https://wallpaperscraft.com/image/linux_red_yellow_sickle_hammer_26513_1600x900.jpg");
Keyboard.press(KEY_RETURN);
Keyboard.releaseAll();

delay(4000);
Keyboard.press(KEY_LEFT_CTRL);
Keyboard.press('s');
Keyboard.releaseAll();

delay(2000);
Keyboard.press(KEY_RETURN);
Keyboard.releaseAll();

delay(300);

Keyboard.press(KEY_LEFT_CTRL);  //Opens Start Menu
Keyboard.press(KEY_ESC);
Keyboard.releaseAll();
delay(500);
Keyboard.print("%USERPROFILE%\\Pictures\\linux_red_yellow_sickle_hammer_26513_1600x900");    //Change the end of the file path to whatever your picture is named once it's downloaded
delay(700);
Keyboard.press(KEY_RETURN);
Keyboard.releaseAll();
delay(700);
Keyboard.press(KEY_TAB);
Keyboard.releaseAll();
delay(400);
Keyboard.press(KEY_TAB);
Keyboard.releaseAll();
delay(400);
Keyboard.press(KEY_TAB);
Keyboard.releaseAll();
delay(400);
Keyboard.press(KEY_TAB);
Keyboard.releaseAll();
delay(400);
Keyboard.press(KEY_TAB);
Keyboard.releaseAll();
delay(400);
Keyboard.press(KEY_TAB);
Keyboard.releaseAll();
delay(400);
Keyboard.press(KEY_TAB);
Keyboard.releaseAll();
delay(400);
Keyboard.press(KEY_TAB);
Keyboard.releaseAll();
delay(400);
Keyboard.press(KEY_TAB);
Keyboard.releaseAll();
delay(400);
Keyboard.press(KEY_TAB);
Keyboard.releaseAll();
delay(400);
Keyboard.press(KEY_TAB);
Keyboard.releaseAll();
delay(400);
Keyboard.press(KEY_RETURN);
Keyboard.releaseAll();
delay(400);

Keyboard.press(KEY_DOWN_ARROW);
Keyboard.releaseAll();
delay(400);
Keyboard.press(KEY_DOWN_ARROW);
Keyboard.releaseAll();
delay(400);
Keyboard.press(KEY_DOWN_ARROW);
Keyboard.releaseAll();
delay(400);
Keyboard.press(KEY_DOWN_ARROW);
Keyboard.releaseAll();
delay(400);
Keyboard.press(KEY_RETURN);
Keyboard.releaseAll();
delay(400);

Keyboard.press(KEY_DOWN_ARROW);
Keyboard.releaseAll();

delay(400);

Keyboard.press(KEY_RETURN);
Keyboard.releaseAll();

delay(500);



}

void loop() {
  // put your main code here, to run repeatedly:

}
