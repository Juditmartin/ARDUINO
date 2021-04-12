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
int buttonPin = 2;       // donar nom al pin 2 de l’Arduino
int buttonState = 0;     // per guardar l’estat en que és troba el button           
int temps = 1000;
long duration;
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
   buttonState = digitalRead(buttonPin);  //llegir l’estat del button i gardar-lo

   if (buttonState == 1){
    duration = pulseIn(2, LOW);
    Serial.print("duration: ");
    Serial.println(duration);
    
      // RESET TOTS ELS LEDS
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
      
 

      if(duration < 110000 && duration != 0){
      digitalWrite(led1, HIGH);
      delay(temps);
      }

      if(duration >= 110000 && duration <130000){
      digitalWrite(led2, HIGH);
      delay(temps);
      }

      if(duration >= 130000 && duration <150000){
      digitalWrite(led1, HIGH);
      digitalWrite(led3, HIGH);
      delay(temps);
      }

      if(duration >= 150000 && duration <170000){
      digitalWrite(led2, HIGH);
      digitalWrite(led3, HIGH);
      delay(temps);
      }

      if(duration >= 170000 && duration <190000){
      digitalWrite(led1, HIGH);
      digitalWrite(led2, HIGH);
      digitalWrite(led3, HIGH);
      delay(temps);
      }

      if(duration >= 190000 && duration <999999){
      digitalWrite(led2, HIGH);
      digitalWrite(led3, HIGH);
      digitalWrite(led4, HIGH);
      delay(temps);
      }
    }
  }
//********** Funcions ************************************************************* 
