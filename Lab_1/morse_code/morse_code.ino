const int led = 7;
String text;
const int unitTime = 200; // 0.5s
const int dot_duration = 1 * unitTime; // 0.5s
const int dash_duration = 3 * unitTime; // 0.5s
const int gab_Between_symbol_Of_Same_Letter = 1 * unitTime;
const int gabBetweenLetters = 3 * unitTime;
const int gabBetweenWords = 7 * unitTime;

struct MorseCode {
  char character;
  const char *symbol;
};

const MorseCode MorseCodeMap[] = {
  {'A', ".-"},   {'B', "-..."}, {'C', "-.-."}, {'D', "-.."},  {'E', "."},
  {'F', "..-."}, {'G', "--."},  {'H', "...."}, {'I', ".."},   {'J', ".---"},
  {'K', "-.-"},  {'L', ".-.."}, {'M', "--"},   {'N', "-."},   {'O', "---"},
  {'P', ".--."}, {'Q', "--.-"}, {'R', ".-."},  {'S', "..."},  {'T', "-"},
  {'U', "..-"},  {'V', "...-"}, {'W', ".--"},  {'X', "-..-"}, {'Y', "-.--"},
  {'Z', "--.."},
  {'0', "-----"},{'1', ".----"},{'2', "..---"},{'3', "...--"},{'4', "....-"},
  {'5', "....."},{'6', "-...."},{'7', "--..."},{'8', "---.."},{'9', "----."}
};
const int morseCount = sizeof(MorseCodeMap) / sizeof(MorseCode);

void dotSymbol() {
  digitalWrite(led,HIGH);
  delay(dot_duration);
  digitalWrite(led,LOW);
  delay(gab_Between_symbol_Of_Same_Letter);
}
void dashSymbol() {
  digitalWrite(led,HIGH);
  delay(dash_duration);
  digitalWrite(led,LOW);
  delay(gab_Between_symbol_Of_Same_Letter);
}

void showLetter(char ch) {
  if (ch >= 'a' && ch <= 'z') ch -= 32; //  convert lowercase to ubbercase
  for(int i = 0;i < morseCount; i++){
    if(ch == MorseCodeMap[i].character){
      const char *symbol = MorseCodeMap[i].symbol;
      for (int j = 0; symbol[j] != '\0'; j++) {
        if (symbol[j] == '.') dotSymbol();
        else if (symbol[j] == '-') dashSymbol();
      }
      delay(gabBetweenLetters - unitTime);
      break;
    }
  }
}

void showWord(String word) {
  for (int i = 0; i < word.length(); i++) {
    char ch = word[i];
    if (ch == ' ') {
      delay(gabBetweenWords - gabBetweenLetters);
    } else {
      showLetter(ch);
    }
  }
}



void setup() {
  pinMode(led, OUTPUT);
  Serial.begin(9600);
  Serial.println("Enter text to send in Morse:");
}

void loop() {
  if (Serial.available()) {
    text = Serial.readStringUntil('\n'); 
    text.trim();
    if (text.length() > 0) {
      Serial.print("I received: ");
      Serial.println(text);
      showWord(text);
    }
  }
}
