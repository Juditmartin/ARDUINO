/**********************************************************************************
**                                                                               **
**                              Daus LED                                         **
**                                                                               **
** NOM: JUDIT MARTIN                                          DATA: 27/03/2021   **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
const int led1 = 8;          
const int led2 = 7;         
const int led3 = 6;          
const int led4 = 5;       
const int buttonPin = 2;     // donar nom al pin 2 de l’Arduino
int buttonState = 0;         // per guardar l’estat en que és troba el button           
int temps = 500;
int randomNumber;

          
//********** Setup ****************************************************************
void setup()
{
  Serial.begin(9600);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);    
  pinMode(buttonPin, INPUT); // definir el pin 2 com una entrada  
}
//********** Loop *****************************************************************
void loop()
{
      // RESET TOTS ELS LEDS
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
      
  buttonState = digitalRead(buttonPin);  //llegir l’estat del button i gardar-lo
  if (buttonState == 0){
    randomNumber = random(1,7);

    Serial.println(randomNumber);
  
    switch(randomNumber){

      case 1:
      digitalWrite(led1, HIGH);
      delay(temps);
      break;

      case 2:
      digitalWrite(led2, HIGH);
      delay(temps);
      break;

      case 3:
      digitalWrite(led1, HIGH);
      digitalWrite(led3, HIGH);
      delay(temps);
      break;

      case 4:
      digitalWrite(led2, HIGH);
      digitalWrite(led3, HIGH);
      delay(temps);
      break;

      case 5:
      digitalWrite(led1, HIGH);
      digitalWrite(led2, HIGH);
      digitalWrite(led3, HIGH);
      delay(temps);
      break;

      case 6:
      digitalWrite(led2, HIGH);
      digitalWrite(led3, HIGH);
      digitalWrite(led4, HIGH);
      delay(temps);
      break;
    }
  }
      
}
//********** Funcions ************************************************************* 
