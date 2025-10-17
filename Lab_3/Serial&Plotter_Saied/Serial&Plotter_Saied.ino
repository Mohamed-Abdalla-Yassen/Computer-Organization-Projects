#include <string.h>
long Firstnumber;
long Secondnumber;
double x=-100;
double y;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("#### Add Two Numbers ####");
}

long AddTwoNumbers(){

    Serial.println("Please Enter the first number: ");
    while(Serial.available()==0){
    }
    String NumberOne = Serial.readStringUntil('\n');
    Firstnumber = NumberOne.toInt();
    Serial.println(Firstnumber);

    Serial.println("Please Enter the Second number: ");
    while(Serial.available()==0){
    }
    
    String NumberTwo = Serial.readStringUntil('\n');
    Secondnumber = NumberTwo.toInt();
    Serial.println(Secondnumber);
    return Firstnumber + Secondnumber;

}

void PlotSin(){
  while(true){
    y= sin(x);
    x+=0.1;
    Serial.print(1);Serial.print(",");
    Serial.print(-1);Serial.print(",");
    Serial.println(y);
    // delay(100);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  // Note that String.toInt() used converts any non number to 0
  // long sum=AddTwoNumbers();
  // Serial.print("The Sum: ");
  // Serial.println(sum);
  // Serial.println("-------------------------------");
  long sum=AddTwoNumbers();
  Serial.print("Result of sum = ");
  Serial.print(sum);
  Serial.println();
  Serial.println("-------------------------------");
}