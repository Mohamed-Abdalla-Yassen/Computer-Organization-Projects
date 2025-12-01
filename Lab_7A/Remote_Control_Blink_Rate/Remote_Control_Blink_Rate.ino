#include <IRremote.hpp>

#define IR_RECEIVE_PIN 11
#define LED_PIN 9

int blinkDelay = 500; // defult 0.5s

void setup() {
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(9600);

  IrReceiver.begin(IR_RECEIVE_PIN, ENABLE_LED_FEEDBACK);
  Serial.println("Ready to receive IR signals...");
}

void loop() {

  if (IrReceiver.decode()) {

    uint8_t cmd = IrReceiver.decodedIRData.command;

    Serial.print("Received Command: ");
    Serial.println(cmd);

    if (cmd == 4)       blinkDelay = 100;   // button 1
    else if (cmd == 5)  blinkDelay = 200;   // button 2
    else if (cmd == 6)  blinkDelay = 300;   // button 3
    else if (cmd == 8)  blinkDelay = 400;   // button 4
    else if (cmd == 9)  blinkDelay = 500;   // button 5
    else if (cmd == 10) blinkDelay = 600;   // button 6
    else if (cmd == 12) blinkDelay = 700;   // button 7
    else if (cmd == 13) blinkDelay = 800;   // button 8
    else if (cmd == 14) blinkDelay = 900;   // button 9
    else if (cmd == 17) blinkDelay = 100;   // button 0

    Serial.print("New blink delay = ");
    Serial.println(blinkDelay);

    IrReceiver.resume();
  }

  // Led operation
  digitalWrite(LED_PIN, HIGH);
  delay(blinkDelay);
  digitalWrite(LED_PIN, LOW);
  delay(blinkDelay);
}
