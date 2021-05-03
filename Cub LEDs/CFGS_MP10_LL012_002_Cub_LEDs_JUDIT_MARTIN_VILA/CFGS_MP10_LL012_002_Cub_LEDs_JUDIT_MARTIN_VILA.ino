/**********************************************************************************
**                                                                               **
**                           Cub de leds 3X3                                     **
**                                                                               **
** NOM: JUDIT MARTIN                                          DATA: 03/05/2021   **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
int transistors[] = {11, 12, 13};
int leds[] = {2, 3, 4, 5, 6, 7, 8, 9, 10};
int RandTransistors;     //Variable para fila aleatoria
int RandLeds;  //Variable para columna aleatoria
int i;

//********** Setup ****************************************************************
void setup(){
 Serial.begin(9600);

    //TOTES LES POSICIONS DEL ARRAY "TRANSISTORS" ELS ASSIGNEM COM A SORTIDES I ELS PAREM
    for (int i = 0; i < 4; i ++ ){ 
        pinMode(transistors[i], OUTPUT);
        digitalWrite(transistors[i], LOW);
    }
    //TOTES LES POSICIONS DEL ARRAY "LEDS" ELS ASSIGNEM COM A SORTIDES I ELS PAREM
    for (int i = 0; i < 10; i ++ ){
        pinMode(leds[i], OUTPUT);
        digitalWrite(leds[i], LOW);
    }
}
//********** Loop *****************************************************************
void loop(){
  RandLed();
}
 
void RandLed()
{
  RandTransistors = random(0,3);
  RandLeds = random(0,9);
 
  digitalWrite(transistors[RandTransistors], HIGH);
  digitalWrite(leds[RandLeds], HIGH);
 
  delay(75);
 
  digitalWrite(transistors[RandTransistors], LOW);
  digitalWrite(leds[RandLeds], LOW);
 
  delay(50);
}
//********** Funcions *************************************************************



 

 
