const float Sensor_Pin = A5;
const int Buzzer_Pin = 10;
const int LED_Pin = 8;
void setup() {
  // put your setup code here, to run once:
  pinMode(Sensor_Pin, INPUT);
  pinMode(LED_Pin, OUTPUT);
  pinMode(Buzzer_Pin, OUTPUT);
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  float SenorReading = analogRead(A5);
  float mVolt = SenorReading * (5.0/1023.0);
  float Temperature = mVolt *100;
  Serial.println(Temperature);
  if (Temperature >= 30) {
    digitalWrite(Buzzer_Pin, HIGH);
    digitalWrite(LED_Pin, HIGH);
  } else {
    digitalWrite(Buzzer_Pin, LOW);
    digitalWrite(LED_Pin, LOW);
  }
}
