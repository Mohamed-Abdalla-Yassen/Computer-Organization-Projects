void setup() {
  Serial.begin(9600);
}

void loop() {
  for(int x = 0; x<360 ; x++) {
    float radian = x * (3.14159 / 180.0);
    float y = sin(radian);
    Serial.println(y);
    delay(50);
  }
}
