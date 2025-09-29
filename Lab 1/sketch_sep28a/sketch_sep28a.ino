#include <ctype.h> 
const int unitTime = 200;
const int dit = 1 * unitTime;
const int dah = 3* unitTime;
const int inner_gap = 1* unitTime;
const int letters_gap = 3 * unitTime;
const int words_gap = 7 * unitTime;
int LEDHigh = HIGH;
int LEDLow = LOW;

struct Letter_to_morse{
  char Letter;
  char *morsecode;
};

Letter_to_morse Key_to_morse[]={
    {'A',".-"},{'B',"-..."},{'C',"-.-."},{'D',"-.."},{'E',"."},
    {'F',"..-."},{'G',"--."},{'H',"...."},{'I',".."},{'J',".---"},
    {'K',"-.-"},{'L',".-.."},{'M',"--"},{'N',"-."},{'O',"---"},
    {'P',".--."},{'Q',"--.-"},{'R',".-."},{'S',"..."},{'T',"-"},
    {'U',"..-"},{'V',"...-"},{'W',".--"},{'X',"-..-"},{'Y',"-.--"},
    {'Z',"--.."},{'0',"-----"},{'1',".----"},{'2',"..---"},{'3',"...--"},
    {'4',"....-"},{'5',"....."},{'6',"-...."},{'7',"--..."},{'8',"---.."},
    {'9',"----."}
};

const int Num_Of_Morse = sizeof(Key_to_morse) / sizeof(Letter_to_morse);

char *GetMorse(const char key){
  for(int i=0;i<Num_Of_Morse;i++){
    if(Key_to_morse[i].Letter==key){
      return Key_to_morse[i].morsecode;
    }
  }
  return nullptr;
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

void DisplaySound(char Letter){
  int key = toupper(Letter);
  char *MorseCode = GetMorse(key);
  for(int i=0;MorseCode[i]!='\0';i++){
    if(MorseCode[i]=='.'){
      DitSound();
    }else if(MorseCode[i]=='-'){
      DahSound();
    }
  }
  Serial.write(key);
  delay(letters_gap-inner_gap);
}

void DisplayWord(char *Words){
  for(int i=0;Words[i]!='\0';i++){
    if(Words[i]!=' '){
      DisplaySound(Words[i]);
    }else if(Words[i]==' '){
      delay(words_gap - (letters_gap - inner_gap));
    }
  }
  Serial.println();
}

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("###### This is A Text to Morsecode program. ######");
  pinMode(LED_BUILTIN,OUTPUT);
}
// void sounds(char Letter){
//     switch (Letter){
//       case 'A':
//         DitSound();
//         DahSound();
//         break;
//       case 'B':
//         DahSound();
//         DitSound();
//         DitSound();
//         DitSound();
//         break;
//       case 'C':
//         DahSound();
//         DitSound();
//         DahSound();
//         DitSound();

//         break;
//       case 'D':
//         DahSound();
//         DitSound();
//         DitSound();

//         break;
//       case 'E':
//         DitSound();
//         break;
//       case 'F':
//         DitSound();
//         DitSound();
//         DahSound();
//         DitSound();

//         break;
//       case 'G':
//         DahSound();
//         DahSound();
//         DitSound();
//         break;
//       case 'H':
//         DitSound();
//         DitSound();
//         DitSound();
//         DitSound();
//         break;
//       case 'I':
//         DitSound();
//         DitSound();
//         break;
//       case 'J':
//         DitSound();
//         DahSound();
//         DahSound();
//         DahSound();
//         break;
//       case 'K':
//         DahSound();
//         DitSound();
//         DahSound();
//         break;
//       case 'L':
//         DitSound();
//         DahSound();
//         DitSound();
//         DitSound();

//         break;
//       case 'M':
//         DahSound();
//         DahSound();
//         break;
//       case 'N':
//         DahSound();
//         DitSound();

//         break;
//       case 'O':
//         DahSound();
//         DahSound();
//         DahSound();
//         break;
//       case 'P':
//         DitSound();
//         DahSound();
//         DahSound();
//         DitSound();

//         break;
//       case 'Q':
//         DahSound();
//         DahSound();
//         DitSound();
//         DahSound();
//         break;
//       case 'R':
//         DitSound();
//         DahSound();
//         DitSound();

//         break;
//       case 'S':
//         DitSound();
//         DitSound();
//         DitSound();
//         break;
//       case 'T':
//         DahSound();
//         break;
//       case 'U':
//         DitSound();
//         DitSound();
//         DahSound();;
//         break;
//       case 'V':
//         DitSound();
//         DitSound();
//         DitSound();
//         DahSound();
//         break;
//       case 'W':
//         DitSound();
//         DahSound();
//         DahSound();
//         break;
//       case 'X':
//         DahSound();
//         DitSound();
//         DitSound();
//         DahSound();
//         break;
//       case 'Y':
//         DahSound();
//         DitSound();
//         DahSound();
//         DahSound();
//         break;
//       case 'Z':
//         DahSound();
//         DahSound();
//         DitSound();
//         DitSound();
//         break;
//     }


// }

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Enter Your message: ");
  while(Serial.available() == 0){
  }
  String Word = Serial.readStringUntil('\n'); 
  DisplayWord(Word.begin());
  delay(words_gap - (letters_gap - inner_gap));
}
