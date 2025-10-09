const int LEDRED = 12;
const int LEDGREEN = 13;
int LEDRedState = ~(LOW);
int LEDGreenState = LOW;
const int ButtonPin = 2;
int OldDelay=0;
const int DelayTime=50;
int OldButtonState = -1;

void setup() {
  // put your setup code here, to run once:
  pinMode(LEDRED,OUTPUT);
  pinMode(LEDGREEN,OUTPUT);
  pinMode(ButtonPin,INPUT_PULLUP);
  digitalWrite(LEDRED,LEDRedState);
  digitalWrite(LEDGREEN,LEDGreenState);
}

void loop() {
  // put your main code here, to run repeatedly:
  int BounceNow = millis();
  int NewButtonState = digitalRead(ButtonPin);

  if(BounceNow - OldDelay > DelayTime){
    if(NewButtonState !=OldButtonState){
       OldButtonState = NewButtonState;
      OldDelay = BounceNow;
      if(NewButtonState == LOW){
          LEDRedState = ~LEDRedState;
          LEDGreenState = ~LEDGreenState;
          digitalWrite(LEDRED,LEDRedState);
          digitalWrite(LEDGREEN,LEDGreenState);
      }
    }
  }
}
