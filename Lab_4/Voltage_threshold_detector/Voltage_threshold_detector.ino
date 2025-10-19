#define voltmeter A0
#define led 5
#define buzzer 6
boolean warning = false;
void setup()
{
  pinMode(led, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(voltmeter, INPUT);
  Serial.begin(9600);
}

void loop()
{
  int val = analogRead(voltmeter);
  float volt = 5.00*analogRead(voltmeter)/1023.00; // map to [0v-5v]
  Serial.println(volt);
  
  if(volt > 3) warning = true;
  else if (volt < 2.5) warning = false;
  
  // Control outputs
  digitalWrite(led, warning ? HIGH : LOW);
  digitalWrite(buzzer, warning ? HIGH : LOW);
  
  delay(200);
  
}