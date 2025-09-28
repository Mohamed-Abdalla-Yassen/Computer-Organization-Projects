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

void sounds(char Letter){
    switch (Letter){
      case 'A':
        digitalWrite(LED_BUILTIN,LEDHigh);
        delay(dit);
        digitalWrite(LED_BUILTIN,LEDLow);
        delay(inner_gap);
        digitalWrite(LED_BUILTIN,LEDHigh);
        delay(dah);
        digitalWrite(LED_BUILTIN,LEDLow);
        delay(letters_gap);
        break;
      case 'B':
        digitalWrite(LED_BUILTIN,LEDHigh);
        delay(dah);
        digitalWrite(LED_BUILTIN,LEDLow);
        delay(inner_gap);
        digitalWrite(LED_BUILTIN,LEDHigh);
        delay(dit);
        digitalWrite(LED_BUILTIN,LEDLow);
        delay(inner_gap);
        digitalWrite(LED_BUILTIN,LEDHigh);
        delay(dit);
        digitalWrite(LED_BUILTIN,LEDLow);
        delay(inner_gap);
        digitalWrite(LED_BUILTIN,LEDHigh);
        delay(dit);
        digitalWrite(LED_BUILTIN,LEDLow);
        delay(letters_gap);
        break;
      case 'C':
        digitalWrite(LED_BUILTIN,LEDHigh);
        delay(dah);
        digitalWrite(LED_BUILTIN,LEDLow);
        delay(inner_gap);
        digitalWrite(LED_BUILTIN,LEDHigh);
        delay(dit);
        digitalWrite(LED_BUILTIN,LEDLow);
        delay(inner_gap);
        digitalWrite(LED_BUILTIN,LEDHigh);
        delay(dah);
        digitalWrite(LED_BUILTIN,LEDLow);
        delay(inner_gap);
        digitalWrite(LED_BUILTIN,LEDHigh);
        delay(dit);
        digitalWrite(LED_BUILTIN,LEDLow);
        delay(letters_gap);
        break;
      case 'D':
        digitalWrite(LED_BUILTIN,LEDHigh);
        delay(dah);
        digitalWrite(LED_BUILTIN,LEDLow);
        delay(inner_gap);
        digitalWrite(LED_BUILTIN,LEDHigh);
        delay(dit);
        digitalWrite(LED_BUILTIN,LEDLow);
        delay(inner_gap);
        digitalWrite(LED_BUILTIN,LEDHigh);
        delay(dit);
        digitalWrite(LED_BUILTIN,LEDLow);
        delay(letters_gap);
        break;
      case 'E':
        digitalWrite(LED_BUILTIN,LEDHigh);
        delay(dit);
        digitalWrite(LED_BUILTIN,LEDLow);
        delay(letters_gap);
        break;
      case 'F':
        digitalWrite(LED_BUILTIN,LEDHigh);
        delay(dit);
        digitalWrite(LED_BUILTIN,LEDLow);
        delay(inner_gap);
        digitalWrite(LED_BUILTIN,LEDHigh);
        delay(dit);
        digitalWrite(LED_BUILTIN,LEDLow);
        delay(inner_gap);
        digitalWrite(LED_BUILTIN,LEDHigh);
        delay(dah);
        digitalWrite(LED_BUILTIN,LEDLow);
        delay(inner_gap);
        digitalWrite(LED_BUILTIN,LEDHigh);
        delay(dit);
        digitalWrite(LED_BUILTIN,LEDLow);
        delay(letters_gap);
        break;
      case 'G':
        digitalWrite(LED_BUILTIN,LEDHigh);
        delay(dah);
        digitalWrite(LED_BUILTIN,LEDLow);
        delay(inner_gap);
        digitalWrite(LED_BUILTIN,LEDHigh);
        delay(dah);
        digitalWrite(LED_BUILTIN,LEDLow);
        delay(inner_gap);
        digitalWrite(LED_BUILTIN,LEDHigh);
        delay(dit);
        digitalWrite(LED_BUILTIN,LEDLow);
        delay(letters_gap);
        break;
      case 'H':
        digitalWrite(LED_BUILTIN,LEDHigh);
        delay(dit);
        digitalWrite(LED_BUILTIN,LEDLow);
        delay(inner_gap);
        digitalWrite(LED_BUILTIN,LEDHigh);
        delay(dit);
        digitalWrite(LED_BUILTIN,LEDLow);
        delay(inner_gap);
        digitalWrite(LED_BUILTIN,LEDHigh);
        delay(dit);
        digitalWrite(LED_BUILTIN,LEDLow);
        delay(inner_gap);
        digitalWrite(LED_BUILTIN,LEDHigh);
        delay(dit);
        digitalWrite(LED_BUILTIN,LEDLow);
        delay(letters_gap);
        break;
      case 'I':
        digitalWrite(LED_BUILTIN,LEDHigh);
        delay(dit);
        digitalWrite(LED_BUILTIN,LEDLow);
        delay(inner_gap);
        digitalWrite(LED_BUILTIN,LEDHigh);
        delay(dit);
        digitalWrite(LED_BUILTIN,LEDLow);
        delay(letters_gap);
        break;
      case 'J':
        digitalWrite(LED_BUILTIN,LEDHigh);
        delay(dit);
        digitalWrite(LED_BUILTIN,LEDLow);
        delay(inner_gap);
        digitalWrite(LED_BUILTIN,LEDHigh);
        delay(dah);
        digitalWrite(LED_BUILTIN,LEDLow);
        delay(inner_gap);
        digitalWrite(LED_BUILTIN,LEDHigh);
        delay(dah);
        digitalWrite(LED_BUILTIN,LEDLow);
        delay(inner_gap);
        digitalWrite(LED_BUILTIN,LEDHigh);
        delay(dah);
        digitalWrite(LED_BUILTIN,LEDLow);
        delay(letters_gap);
        break;
      case 'K':
        digitalWrite(LED_BUILTIN,LEDHigh);
        delay(dah);
        digitalWrite(LED_BUILTIN,LEDLow);
        delay(inner_gap);
        digitalWrite(LED_BUILTIN,LEDHigh);
        delay(dit);
        digitalWrite(LED_BUILTIN,LEDLow);
        delay(inner_gap);
        digitalWrite(LED_BUILTIN,LEDHigh);
        delay(dah);
        digitalWrite(LED_BUILTIN,LEDLow);
        delay(letters_gap);
        break;
      case 'L':
        digitalWrite(LED_BUILTIN,LEDHigh);
        delay(dit);
        digitalWrite(LED_BUILTIN,LEDLow);
        delay(inner_gap);
        digitalWrite(LED_BUILTIN,LEDHigh);
        delay(dah);
        digitalWrite(LED_BUILTIN,LEDLow);
        delay(inner_gap);
        digitalWrite(LED_BUILTIN,LEDHigh);
        delay(dit);
        digitalWrite(LED_BUILTIN,LEDLow);
        delay(inner_gap);
        digitalWrite(LED_BUILTIN,LEDHigh);
        delay(dit);
        digitalWrite(LED_BUILTIN,LEDLow);
        delay(letters_gap);
        break;
      case 'M':
        digitalWrite(LED_BUILTIN,LEDHigh);
        delay(dah);
        digitalWrite(LED_BUILTIN,LEDLow);
        delay(inner_gap);
        digitalWrite(LED_BUILTIN,LEDHigh);
        delay(dah);
        digitalWrite(LED_BUILTIN,LEDLow);
        delay(letters_gap);
        break;
      case 'N':
        digitalWrite(LED_BUILTIN,LEDHigh);
        delay(dah);
        digitalWrite(LED_BUILTIN,LEDLow);
        delay(inner_gap);
        digitalWrite(LED_BUILTIN,LEDHigh);
        delay(dit);
        digitalWrite(LED_BUILTIN,LEDLow);
        delay(letters_gap);
        break;
      case 'O':
        digitalWrite(LED_BUILTIN,LEDHigh);
        delay(dah);
        digitalWrite(LED_BUILTIN,LEDLow);
        delay(inner_gap);
        digitalWrite(LED_BUILTIN,LEDHigh);
        delay(dah);
        digitalWrite(LED_BUILTIN,LEDLow);
        delay(inner_gap);
        digitalWrite(LED_BUILTIN,LEDHigh);
        delay(dah);
        digitalWrite(LED_BUILTIN,LEDLow);
        delay(letters_gap);
        break;
      case 'P':
        digitalWrite(LED_BUILTIN,LEDHigh);
        delay(dit);
        digitalWrite(LED_BUILTIN,LEDLow);
        delay(inner_gap);
        digitalWrite(LED_BUILTIN,LEDHigh);
        delay(dah);
        digitalWrite(LED_BUILTIN,LEDLow);
        delay(inner_gap);
        digitalWrite(LED_BUILTIN,LEDHigh);
        delay(dah);
        digitalWrite(LED_BUILTIN,LEDLow);
        delay(inner_gap);
        digitalWrite(LED_BUILTIN,LEDHigh);
        delay(dit);
        digitalWrite(LED_BUILTIN,LEDLow);
        delay(letters_gap);
        break;
      case 'Q':
        digitalWrite(LED_BUILTIN,LEDHigh);
        delay(dah);
        digitalWrite(LED_BUILTIN,LEDLow);
        delay(inner_gap);
        digitalWrite(LED_BUILTIN,LEDHigh);
        delay(dah);
        digitalWrite(LED_BUILTIN,LEDLow);
        delay(inner_gap);
        digitalWrite(LED_BUILTIN,LEDHigh);
        delay(dit);
        digitalWrite(LED_BUILTIN,LEDLow);
        delay(inner_gap);
        digitalWrite(LED_BUILTIN,LEDHigh);
        delay(dah);
        digitalWrite(LED_BUILTIN,LEDLow);
        delay(letters_gap);
        break;
      case 'R':
        digitalWrite(LED_BUILTIN,LEDHigh);
        delay(dit);
        digitalWrite(LED_BUILTIN,LEDLow);
        delay(inner_gap);
        digitalWrite(LED_BUILTIN,LEDHigh);
        delay(dah);
        digitalWrite(LED_BUILTIN,LEDLow);
        delay(inner_gap);
        digitalWrite(LED_BUILTIN,LEDHigh);
        delay(dit);
        digitalWrite(LED_BUILTIN,LEDLow);
        delay(letters_gap);
        break;
      case 'S':
        digitalWrite(LED_BUILTIN,LEDHigh);
        delay(dit);
        digitalWrite(LED_BUILTIN,LEDLow);
        delay(inner_gap);
        digitalWrite(LED_BUILTIN,LEDHigh);
        delay(dit);
        digitalWrite(LED_BUILTIN,LEDLow);
        delay(inner_gap);
        digitalWrite(LED_BUILTIN,LEDHigh);
        delay(dit);
        digitalWrite(LED_BUILTIN,LEDLow);
        delay(letters_gap);
        break;
      case 'T':
        digitalWrite(LED_BUILTIN,LEDHigh);
        delay(dah);
        digitalWrite(LED_BUILTIN,LEDLow);
        delay(letters_gap);
        break;
      case 'U':
        digitalWrite(LED_BUILTIN,LEDHigh);
        delay(dit);
        digitalWrite(LED_BUILTIN,LEDLow);
        delay(inner_gap);
        digitalWrite(LED_BUILTIN,LEDHigh);
        delay(dit);
        digitalWrite(LED_BUILTIN,LEDLow);
        delay(inner_gap);
        digitalWrite(LED_BUILTIN,LEDHigh);
        delay(dah);
        digitalWrite(LED_BUILTIN,LEDLow);
        delay(letters_gap);
        break;
      case 'V':
        digitalWrite(LED_BUILTIN,LEDHigh);
        delay(dit);
        digitalWrite(LED_BUILTIN,LEDLow);
        delay(inner_gap);
        digitalWrite(LED_BUILTIN,LEDHigh);
        delay(dit);
        digitalWrite(LED_BUILTIN,LEDLow);
        delay(inner_gap);
        digitalWrite(LED_BUILTIN,LEDHigh);
        delay(dit);
        digitalWrite(LED_BUILTIN,LEDLow);
        delay(inner_gap);
        digitalWrite(LED_BUILTIN,LEDHigh);
        delay(dah);
        digitalWrite(LED_BUILTIN,LEDLow);
        delay(letters_gap);
        break;
      case 'W':
        digitalWrite(LED_BUILTIN,LEDHigh);
        delay(dit);
        digitalWrite(LED_BUILTIN,LEDLow);
        delay(inner_gap);
        digitalWrite(LED_BUILTIN,LEDHigh);
        delay(dah);
        digitalWrite(LED_BUILTIN,LEDLow);
        delay(inner_gap);
        digitalWrite(LED_BUILTIN,LEDHigh);
        delay(dah);
        digitalWrite(LED_BUILTIN,LEDLow);
        delay(letters_gap);
        break;
      case 'X':
        digitalWrite(LED_BUILTIN,LEDHigh);
        delay(dah);
        digitalWrite(LED_BUILTIN,LEDLow);
        delay(inner_gap);
        digitalWrite(LED_BUILTIN,LEDHigh);
        delay(dit);
        digitalWrite(LED_BUILTIN,LEDLow);
        delay(inner_gap);
        digitalWrite(LED_BUILTIN,LEDHigh);
        delay(dit);
        digitalWrite(LED_BUILTIN,LEDLow);
        delay(inner_gap);
        digitalWrite(LED_BUILTIN,LEDHigh);
        delay(dah);
        digitalWrite(LED_BUILTIN,LEDLow);
        delay(letters_gap);
        break;
      case 'Y':
        digitalWrite(LED_BUILTIN,LEDHigh);
        delay(dah);
        digitalWrite(LED_BUILTIN,LEDLow);
        delay(inner_gap);
        digitalWrite(LED_BUILTIN,LEDHigh);
        delay(dit);
        digitalWrite(LED_BUILTIN,LEDLow);
        delay(inner_gap);
        digitalWrite(LED_BUILTIN,LEDHigh);
        delay(dah);
        digitalWrite(LED_BUILTIN,LEDLow);
        delay(inner_gap);
        digitalWrite(LED_BUILTIN,LEDHigh);
        delay(dah);
        digitalWrite(LED_BUILTIN,LEDLow);
        delay(letters_gap);
        break;
      case 'Z':
        digitalWrite(LED_BUILTIN,LEDHigh);
        delay(dah);
        digitalWrite(LED_BUILTIN,LEDLow);
        delay(inner_gap);
        digitalWrite(LED_BUILTIN,LEDHigh);
        delay(dah);
        digitalWrite(LED_BUILTIN,LEDLow);
        delay(inner_gap);
        digitalWrite(LED_BUILTIN,LEDHigh);
        delay(dit);
        digitalWrite(LED_BUILTIN,LEDLow);
        delay(inner_gap);
        digitalWrite(LED_BUILTIN,LEDHigh);
        delay(dit);
        digitalWrite(LED_BUILTIN,LEDLow);
        delay(letters_gap);
        break;
    }


}

void loop() {
  // put your main code here, to run repeatedly:
  char Word[3] ="SOS"; 
  for(int i=0;i<3;i++){
    sounds(Word[i]);
  }
  delay(words_gap);
}
