const int unitTime = 200;
const int dit = 1 * unitTime;
const int dah = 3* unitTime;
const int inner_gap = 1* unitTime;
const int letters_gap = 3 * unitTime;
const int words_gap = 7 * unitTime;
int LEDHigh = HIGH;
int LEDLow = LOW;
void setup() {
  // put your setup code here, to run once:
  // Serial.begin(9600);
  // Serial.println("Hello, World!");
  pinMode(LED_BUILTIN,OUTPUT);
}
void DitSound(){
  digitalWrite(LED_BUILTIN,LEDHigh);
  delay(dit);
  digitalWrite(LED_BUILTIN,LEDLow);
  delay(inner_gap);
}

void DahSound(){
  digitalWrite(LED_BUILTIN,LEDHigh);
  delay(dah);
  digitalWrite(LED_BUILTIN,LEDLow);
  delay(inner_gap);
}

void sounds(char Letter){
    switch (Letter){
      case 'A':
        DitSound();
        DahSound();
        break;
      case 'B':
        DahSound();
        DitSound();
        DitSound();
        DitSound();
        break;
      case 'C':
        DahSound();
        DitSound();
        DahSound();
        DitSound();

        break;
      case 'D':
        DahSound();
        DitSound();
        DitSound();

        break;
      case 'E':
        DitSound();
        break;
      case 'F':
        DitSound();
        DitSound();
        DahSound();
        DitSound();

        break;
      case 'G':
        DahSound();
        DahSound();
        DitSound();
        break;
      case 'H':
        DitSound();
        DitSound();
        DitSound();
        DitSound();
        break;
      case 'I':
        DitSound();
        DitSound();
        break;
      case 'J':
        DitSound();
        DahSound();
        DahSound();
        DahSound();
        break;
      case 'K':
        DahSound();
        DitSound();
        DahSound();
        break;
      case 'L':
        DitSound();
        DahSound();
        DitSound();
        DitSound();

        break;
      case 'M':
        DahSound();
        DahSound();
        break;
      case 'N':
        DahSound();
        DitSound();

        break;
      case 'O':
        DahSound();
        DahSound();
        DahSound();
        break;
      case 'P':
        DitSound();
        DahSound();
        DahSound();
        DitSound();

        break;
      case 'Q':
        DahSound();
        DahSound();
        DitSound();
        DahSound();
        break;
      case 'R':
        DitSound();
        DahSound();
        DitSound();

        break;
      case 'S':
        DitSound();
        DitSound();
        DitSound();
        break;
      case 'T':
        DahSound();
        break;
      case 'U':
        DitSound();
        DitSound();
        DahSound();;
        break;
      case 'V':
        DitSound();
        DitSound();
        DitSound();
        DahSound();
        break;
      case 'W':
        DitSound();
        DahSound();
        DahSound();
        break;
      case 'X':
        DahSound();
        DitSound();
        DitSound();
        DahSound();
        break;
      case 'Y':
        DahSound();
        DitSound();
        DahSound();
        DahSound();
        break;
      case 'Z':
        DahSound();
        DahSound();
        DitSound();
        DitSound();
        break;
    }


}

void loop() {
  // put your main code here, to run repeatedly:
  char Word[3] ="SOS"; 
  for(int i=0;i<3;i++){
    sounds(Word[i]);
    delay(letters_gap - inner_gap);
  }
  delay(words_gap);
}
