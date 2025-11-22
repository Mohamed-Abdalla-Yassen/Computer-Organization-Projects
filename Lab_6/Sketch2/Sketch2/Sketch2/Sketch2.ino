/*
 Name:		Sketch_test.ino
 Created:	5/15/2022 7:35:32 PM
 Author:	Ahmed
*/

int x;
const int ButtonPin = 12;
const int Pin= LED_BUILTIN;
int Initial;
int ButtonState;
// the setup function runs once when you press reset or power the board
void setup() {
	x = 20;
	pinMode(ButtonPin,INPUT);
	Initial = digitalRead(ButtonPin);
	Serial.begin(115200);
}

// the loop function runs over and over again until power down or reset
void loop() {
	ButtonState = digitalRead(ButtonPin);
	
	if(ButtonState!=Initial){
	digitalWrite(Pin, ButtonState);
	x++;
	}
	delay(10000);
}
