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
const int led4 = 9;          // donar nom al pin 9 de l’Arduino
const int led5 = 10;          // donar nom al pin 10 de l’Arduino
const int led6 = 11;          // donar nom al pin 11 de l’Arduino
const int led7 = 12;          // donar nom al pin 12 de l’Arduino
int numero = 0;
int resto1;
int resto2;
int resto3;
int resto4;
int resto5;
int resto6;
int resto7;
int resto8;
int myarray[7];

//********** Setup ****************************************************************
void setup()
{
  Serial.begin(9600);    // obre el port sèrie configurant la velocitat a 9600bps
  pinMode(led0, OUTPUT);     // definir el pin 5 com una sortida
  pinMode(led1, OUTPUT);     // definir el pin 6 com una sortida
  pinMode(led2, OUTPUT);     // definir el pin 7 com una sortida
  pinMode(led3, OUTPUT);     // definir el pin 8 com una sortida
  pinMode(led4, OUTPUT);     // definir el pin 9 com una sortida
  pinMode(led5, OUTPUT);     // definir el pin 10 com una sortida
  pinMode(led6, OUTPUT);     // definir el pin 11 com una sortida
  pinMode(led7, OUTPUT);     // definir el pin 12 com una sortida
}

//********** Loop *****************************************************************
void loop()
{
while (numero <= 255){

    Serial.print("Numero: ");
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

    resto5 = resto4 / 2;
    Serial.println("resto5");
    Serial.println(resto5);
    
    resto6 = resto5 / 2;
    Serial.println("resto6");
    Serial.println(resto6);
    
    resto7 = resto6 / 2;
    Serial.println("resto7");
    Serial.println(resto7);

    resto8 = resto7 / 2;
    Serial.println("resto8");
    Serial.println(resto8);
    
    myarray[0]= resto7 % 2;    
    Serial.println("array0");
    Serial.println(myarray[0]);
    
    myarray[1]= resto6 % 2;
    Serial.println("array1");
    Serial.println(myarray[1]);

    myarray[2]= resto5 % 2;
    Serial.println("array2");
    Serial.println(myarray[2]);

    myarray[3]= resto4 % 2;
    Serial.println("array3");
    Serial.println(myarray[3]);
    
    myarray[4]= resto3 % 2;    
    Serial.println("array4");
    Serial.println(myarray[4]);
    
    myarray[5]= resto2 % 2;
    Serial.println("array5");
    Serial.println(myarray[5]);

    myarray[6]= resto1 % 2;
    Serial.println("array6");
    Serial.println(myarray[6]);

    myarray[7]= numero % 2;
    Serial.println("array7");
    Serial.println(myarray[7]);

    if (myarray[7]>=1){
      digitalWrite(led7, HIGH); 
    }
    else {
      digitalWrite(led7, LOW); 
    }
    
    if (myarray[6]>=1){
      digitalWrite(led6, HIGH); 
    }
        else {
      digitalWrite(led6, LOW); 
    }
    
    if (myarray[5]>=1){
      digitalWrite(led5, HIGH); 
    }
    else {
      digitalWrite(led5, LOW); 
    }
    
    if (myarray[4]>=1){
      digitalWrite(led4, HIGH); 
    }
    else {
      digitalWrite(led4, LOW); 
    }

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
    Serial.print("array 4: ");
    Serial.println(myarray[4]);
    Serial.print("array 5: ");
    Serial.println(myarray[5]);
    Serial.print("array 6: ");
    Serial.println(myarray[6]);
    Serial.print("array 7: ");
    Serial.println(myarray[7]);

    delay(200);
}
}

//********** Funcions *************************************************************
