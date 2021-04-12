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
int temps = 500;

//********** Setup ****************************************************************
void setup()
{
  Serial.begin(9600);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);    
  
}
//********** Loop *****************************************************************
void loop()
{
      // RESET TOTS ELS LEDS
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);

      //1
      digitalWrite(led1, HIGH);
      delay(temps);

      //2
      digitalWrite(led1, LOW);
      digitalWrite(led2, HIGH);
      delay(temps);

      //3
      digitalWrite(led2, LOW);
      digitalWrite(led1, HIGH);
      digitalWrite(led3, HIGH);
      delay(temps);

      //4
      digitalWrite(led1, LOW);
      digitalWrite(led2, HIGH);
      delay(temps);

      //5
      digitalWrite(led1, HIGH);
      delay(temps);

      //6
      digitalWrite(led1, LOW);
      digitalWrite(led4, HIGH);
      delay(temps);
      
}
//********** Funcions ************************************************************* 
