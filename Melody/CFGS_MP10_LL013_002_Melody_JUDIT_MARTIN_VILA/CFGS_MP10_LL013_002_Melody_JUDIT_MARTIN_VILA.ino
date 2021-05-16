/******************************************************************************
**                                                                           **
**                              Music player                                 **
**                                                                           **
**           c=DO, d=RE, e=MI, f=FA, g=SOL, a=LA, b=SI, C=DO' D=RE'          **
**                                                                           **
*******************************************************************************/
//******* Includes ************************************************************

//******* Variables ***********************************************************
const int speakerPin = 13;   // pin for speaker
int tempo = 150;
int LEDS [] = {2, 3, 4, 5, 6, 7, 8, 9, 10};


//Melody 1
//int length = 15; // the number of notes
//char notes[] = "ccggaagffeeddc "; // a space represents a rest
//int beats[] = { 1, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 2, 4 }; // time notes

//Melody 2 himne del Barça
//int length = 21; 
//char notes[] = "egC egC egCDCb abCabg";
//int beats[]={3, 2, 2, 1, 3, 2, 2, 1, 2, 1, 2, 2, 1, 3, 1, 2, 1, 1, 1, 1, 3, 1};

//Melody 3 Jingle Bells
int length = 51;
char notes[] = "eeeeeeegcdefffffeeeeeddedgeeeeeeegcdefffffeeeeggfdc";
int beats[] = { 2, 2, 4, 2, 2, 4, 2, 2, 3, 1, 8, 2, 2, 3, 1, 2, 2, 2, 1, 1, 2, 2, 2, 2, 4, 4, 2, 2, 4, 2, 2, 4, 2, 2, 3, 2, 8, 2, 2, 2, 2, 2, 2, 2, 1, 1, 2, 2, 2, 2, 8};

//****** Setup ****************************************************************
void setup() {
  Serial.begin(9600);
  // make the pin output
  pinMode(speakerPin, OUTPUT);

for (int i = 0; i<9; i++){
  pinMode(LEDS[i], OUTPUT);
  digitalWrite(LEDS[i], LOW);
}
}

//***** Loop *****************************************************************
void loop() {
    for (int i = 0; i < length; i++) {
    if (notes[i] == ' ') {
      delay(beats[i] * tempo);
    } else {
      playNote(notes[i], beats[i] * tempo);
    }
    // pause between notes
    delay(tempo / 2); 
  }
}
//****** Funcions *************************************************************
void playTone(int tone, int duration, int note2) {
  switch (note2){
        case 'c':
        digitalWrite(LEDS[0],HIGH);
        Serial.println(note2);
        break;
    
        case 'd':
        digitalWrite(LEDS[1],HIGH);
        Serial.println(note2);
        break;
    
        case 'e':
        digitalWrite(LEDS[2],HIGH);
        Serial.println(note2);
        break;
    
        case 'f':
        digitalWrite(LEDS[3],HIGH);
        Serial.println(note2);
        break;
    
        case 'g':
        digitalWrite(LEDS[4],HIGH);
        Serial.println(note2);
        break;
    
        case 'a':
        digitalWrite(LEDS[5],HIGH);
        Serial.println(note2);
        break;
        
        case 'b':
        digitalWrite(LEDS[6],HIGH);
        Serial.println(note2);
        break;
    
        case 'C':
        digitalWrite(LEDS[7],HIGH);
        Serial.println(note2);
        break;
        
        case 'D':
        digitalWrite(LEDS[8],HIGH);
        Serial.println(note2);
        break;
      }
      
  for (long i = 0; i < duration * 1000L; i += tone * 2) {
    digitalWrite(speakerPin, HIGH);
    delayMicroseconds(tone);
    digitalWrite(speakerPin, LOW);
    delayMicroseconds(tone);
  
  }
  for (int i = 0; i<9; i++){
    digitalWrite(LEDS[i], LOW);
  }

}

void playNote(char note, int duration) {
  char names[] = { 'c', 'd', 'e', 'f', 'g', 'a', 'b', 'C' , 'D'};
  int tones[] = { 1915, 1700, 1519, 1432, 1275, 1136, 1014, 956, 840};

  // play the tone corresponding to the note name
  for (int i = 0; i < 9; i++) {
    if (names[i] == note) {
      playTone(tones[i], duration, names[i]);
    
    }
  }
}
