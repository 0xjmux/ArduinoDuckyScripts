#include <Keyboard.h>


void setup() {
  // put your setup code here, to run once:
  
pinMode(3, INPUT_PULLUP);     //If switch is pushed, enter programming mode (AKA infinite while loop)
if (digitalRead(3) == LOW) {
while(1);
}

Keyboard.begin();
delay(1000);
Keyboard.print("Hello user");
}

void loop() {
  // put your main code here, to run repeatedly:

}

