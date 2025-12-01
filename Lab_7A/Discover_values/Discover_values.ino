#include <IRremote.hpp>

#define IR_RECEIVE_PIN 11

void setup() {
  Serial.begin(9600);
  IrReceiver.begin(IR_RECEIVE_PIN, ENABLE_LED_FEEDBACK);
}

void loop() {
  if (IrReceiver.decode()) {
    Serial.print("Command: ");
    Serial.println(IrReceiver.decodedIRData.command);
    IrReceiver.resume();
  }
}
