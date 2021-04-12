/**********************************************************************************
**                                                                               **
**                              Array de 8 LEDs                                  **
**                                                                               **
** NOM: JUDIT MARTIN                                          DATA: 27/03/2021   **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
const int led0 = 5;          // donar nom al pin 5 de l’Arduino
const int led1 = 6;          // donar nom al pin 6 de l’Arduino
const int led2 = 7;          // donar nom al pin 7 de l’Arduino
const int led3 = 8;          // donar nom al pin 8 de l’Arduino
int numero = 0;
int resto1;
int resto2;
int resto3;
int resto4;
int myarray[3];

//********** Setup ****************************************************************
void setup()
{
  Serial.begin(9600);    // obre el port sèrie configurant la velocitat a 9600bps
  pinMode(led0, OUTPUT);     // definir el pin 5 com una sortida
  pinMode(led1, OUTPUT);     // definir el pin 6 com una sortida
  pinMode(led2, OUTPUT);     // definir el pin 7 com una sortida
  pinMode(led3, OUTPUT);     // definir el pin 8 com una sortida
}

//********** Loop *****************************************************************
void loop()
{
while (numero <= 15){
  
    Serial.println(numero);
    
    resto1 = numero / 2;
    Serial.println("resto1");
    Serial.println(resto1);
    
    resto2 = resto1 / 2;
    Serial.println("resto2");
    Serial.println(resto2);
    
    resto3 = resto2 / 2;
    Serial.println("resto3");
    Serial.println(resto3);

    resto4 = resto3 / 2;
    Serial.println("resto4");
    Serial.println(resto4);
    
    myarray[3]= numero % 2;    
    Serial.println("array3");
    Serial.println(myarray[3]);
    
    myarray[2]= resto1 % 2;
    Serial.println("array2");
    Serial.println(myarray[2]);

    myarray[1]= resto2 % 2;
    Serial.println("array1");
    Serial.println(myarray[1]);

    myarray[0]= resto3 % 2;
    Serial.println("array0");
    Serial.println(myarray[0]);

    if (myarray[3]>=1){
      digitalWrite(led3, HIGH); 
    }
    else {
      digitalWrite(led3, LOW); 
    }
    
    if (myarray[2]>=1){
      digitalWrite(led2, HIGH); 
    }
        else {
      digitalWrite(led2, LOW); 
    }
    
    if (myarray[1]>=1){
      digitalWrite(led1, HIGH); 
    }
    else {
      digitalWrite(led1, LOW); 
    }
    
    if (myarray[0]>=1){
      digitalWrite(led0, HIGH); 
    }
    else {
      digitalWrite(led0, LOW); 
    }
    Serial.println("numero");
    Serial.println(numero, BIN);
    numero++;
    Serial.print("array 0: ");
    Serial.println(myarray[0]);
    Serial.print("array 1: ");
    Serial.println(myarray[1]);
    Serial.print("array 2: ");
    Serial.println(myarray[2]);
    Serial.print("array 3: ");
    Serial.println(myarray[3]);

    delay(1000);
}
}

//********** Funcions *************************************************************
