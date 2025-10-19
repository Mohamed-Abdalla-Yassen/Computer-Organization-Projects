const int AnalogPin = A0;
const int LEDPin = 3;
const int buzzerPin = 5;

int LEDState = LOW;
int BuzzerState = LOW;

void setup() {
  Serial.begin(9600);
  pinMode(LEDPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  pinMode(AnalogPin, INPUT);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  int Potentiometer = analogRead(AnalogPin);
  float Voltage = Potentiometer * (5.0 / 1023.0);
  Serial.println(Voltage);

  if (Voltage > 3 && LEDState == LOW) {
    LEDState = HIGH;
    BuzzerState = HIGH;
    digitalWrite(buzzerPin, HIGH);
    digitalWrite(LEDPin, HIGH);
    digitalWrite(LED_BUILTIN, HIGH);
  } 
  else if (Voltage < 2.5 && LEDState == HIGH) {
    LEDState = LOW;
    BuzzerState = LOW;
    digitalWrite(buzzerPin, LOW);
    digitalWrite(LEDPin, LOW);
    digitalWrite(LED_BUILTIN, LOW);
  }

  delay(200);
}
