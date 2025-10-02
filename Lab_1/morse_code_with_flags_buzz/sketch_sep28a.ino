#include <ctype.h> 
const int unitTime = 200;
const int inner_gap = 1* unitTime;
const int letters_gap = 3 * unitTime;
const int words_gap = 7 * unitTime;
const int LED_CLOSE=4;
const int LED_OPEN=8;
const int buzz = 7;
int LED=12;
class Morse_Code{
  private:
    const int unitTime = 200;
    const int dit = 1 * unitTime;
    const int dah = 3* unitTime;
    const int inner_gap = 1* unitTime;
    const int letters_gap = 3 * unitTime;
    const int words_gap = 7 * unitTime;
    int LEDHigh = HIGH;
    int LEDLow = LOW;
    int LED=12;

    struct Letter_to_morse{
    char Letter;
    char *morsecode;
    };

    Letter_to_morse Key_to_morse[36]={
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
      digitalWrite(LED,LEDHigh);
      digitalWrite(buzz,HIGH);
      delay(dit);
      digitalWrite(LED,LEDLow);
      digitalWrite(buzz,LOW);
      delay(inner_gap);
    }

    void DahSound(){
      digitalWrite(LED,LEDHigh);
      digitalWrite(buzz,HIGH);
      delay(dah);
      digitalWrite(LED,LEDLow);
      digitalWrite(buzz,LOW);
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

  public:
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
    
    

};

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("###### This is A Text to Morsecode program. ######");
  pinMode(LED,OUTPUT);
  pinMode(LED_OPEN,OUTPUT);
  pinMode(LED_CLOSE,OUTPUT);
  pinMode(buzz,OUTPUT);
}


void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Enter Your message: ");
  while(Serial.available() == 0){
    digitalWrite(LED_OPEN,LOW);
    digitalWrite(LED_CLOSE,HIGH);
  }
  digitalWrite(LED_CLOSE,LOW);
  digitalWrite(LED_OPEN,HIGH);
  String Word = Serial.readStringUntil('\n'); 
  Morse_Code morsecode;
  morsecode.DisplayWord(Word.begin());
  delay(words_gap - (letters_gap - inner_gap));
}
