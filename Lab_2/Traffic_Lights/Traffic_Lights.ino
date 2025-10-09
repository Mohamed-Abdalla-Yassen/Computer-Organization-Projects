const int red_led = 7;
const int green_led = 8;
const int button = 9;
int state = 0;


void toggle() {
  if (state == 0) { // red -> on , green -> off
    digitalWrite(green_led,HIGH);
    digitalWrite(red_led,LOW);
  }
  else {
    digitalWrite(green_led,LOW);
    digitalWrite(red_led,HIGH);
  }
}

void setup() {
  pinMode(button,INPUT_PULLUP);
  pinMode(green_led,OUTPUT);
  pinMode(red_led,OUTPUT);

  // initial state: red on, green off
  digitalWrite(green_led,LOW);
  digitalWrite(red_led,HIGH);
}

void loop() {
  if (digitalRead(button) == LOW) {
    delay(200); // solve debounce
    toggle();
    state = (state+1) % 2;
    while (digitalRead(button) == LOW); // wait for release
  }
}
