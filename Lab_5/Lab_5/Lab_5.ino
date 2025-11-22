const int Potentiometer_Pin = A0;
const int LED_Pin = 9;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(Potentiometer_Pin,INPUT);
  pinMode(LED_Pin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
    long potentiometer_value = analogRead(Potentiometer_Pin);

    long LED_Value = map(potentiometer_value,0,1023,0,255);
    analogWrite(LED_Pin,LED_Value );
    delay(1);
}
