unsigned int num1;
unsigned int num2;

void setup() {
  Serial.begin(9600);
  Serial.println("Please enter first number:");
}

void loop() {
  if(Serial.available()){
    num1 = Serial.parseInt();
    Serial.read(); //
    Serial.println(num1);
    Serial.println("Please enter second number:");
    while(Serial.available() == 0);
    num2 = Serial.parseInt();
    Serial.read(); //
    Serial.println(num2);
    Serial.println("The result is:");
    unsigned int sum = num1 + num2; 
    Serial.println(sum);
    Serial.println("___________________________________________");
    Serial.println("Please enter first number:");
  }
}
