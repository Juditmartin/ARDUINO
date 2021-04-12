/**********************************************************************************
**                                                                               **
**                                   Control LED                                 **
**                                                                               **
** NOM: JUDIT MARTIN                                          DATA: 27/03/2021   **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
const int led0 = 5;          // donar nom al pin 5 de l’Arduino
int contador;

//********** Setup ****************************************************************
void setup()
{
  Serial.begin(9600);
  pinMode(led0, OUTPUT);     // definir el pin 5 com una sortida

}

//********** Loop *****************************************************************
void loop(){
  while(contador <= 6){
    if (contador % 2 == 0){
      digitalWrite(led0, LOW);    // posar a 0V el pin 5
      delay(300);
    }
    else{
      digitalWrite(led0, HIGH);    // posar a 5V el pin 5
      delay(300);
    }
    contador++;
   }
}
//********** Funcions *************************************************************
