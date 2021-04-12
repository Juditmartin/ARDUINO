/**********************************************************************************
**                                                                               **
**                              Semafors                                       **
**                                                                               **
** NOM: JUDIT MARTIN                                          DATA: 27/03/2021   **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
//ASSIGNAR PINS
const int led0 = 8; // VERMELL A
const int led1 = 9; // AMBAR A
const int led2 = 10; // VERD A
const int led3 = 11; // VERMELL B
const int led4 = 12; // AMBAR B
const int led5 = 13; //VERD B
const int led6 = 7; // SEMAFOR VIANANTS VERD A
const int led7 = 6; // SEMAFOR VIANANTS VERMELL A
const int led8 = 5; // SEMAFOR VIANANTS VERD B
const int led9 = 4; // SEMAFOR VIANANTS VERMELL B
const int buttonPin2 = 2;     // donar nom al pin 2 de l’Arduino
const int buttonPin3 = 3;     // donar nom al pin 3 de l’Arduino
int buttonState2 = 0;     // per guardar l’estat en que és troba el button 1 - A
int buttonState3 = 0;     // per guardar l’estat en que és troba el button 2 - B
int temps = 300;
int a = 0;
int b = 0;
int x = 0;
         
//********** Setup ****************************************************************
void setup()
{
  Serial.begin(9600);
  //DECLAREM SORTIDES
  pinMode(led0, OUTPUT);     
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT); 
  pinMode(led3, OUTPUT); 
  pinMode(led4, OUTPUT); 
  pinMode(led5, OUTPUT); 
  pinMode(led6, OUTPUT); 
  pinMode(led7, OUTPUT); 
  pinMode(led8, OUTPUT); 
  pinMode(led9, OUTPUT); 
  pinMode(buttonPin2, INPUT); // definir el pin 2 com una entrada - A
  pinMode(buttonPin3, INPUT); // definir el pin 3 com una entrada - B
}
//********** Loop *****************************************************************
void loop(){

buttonState2 = digitalRead(buttonPin2);  //llegir l’estat del button 2 i gardar-lo
if (buttonState2 == 1){
  a++;
  Serial.print("A val:  ");
  Serial.println (a);
}

buttonState3 = digitalRead(buttonPin3);  //llegir l’estat del button 3 i gardar-lo
if (buttonState3 == 1){
  b++;
  Serial.print("B val:  ");
  Serial.println (b);
}
  //PAS VIANANTS A PREMUT
 if (buttonState2 == 1 && buttonState3 == 0){
      
      a--;

      //RESET TOTS ELS LLUMS
      digitalWrite(led0, LOW);
      digitalWrite(led1, LOW);     
      digitalWrite(led2, LOW);    
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);     
      digitalWrite(led5, LOW);    
      digitalWrite(led6, LOW);
      digitalWrite(led7, LOW);
      digitalWrite(led8, LOW);
      digitalWrite(led9, LOW);

      // ENCENDRE LLUMS ADEQUATS
      digitalWrite(led6, HIGH);
      digitalWrite(led9, HIGH);
      digitalWrite(led0, HIGH);
      digitalWrite(led5, HIGH);

      delay (3000);

      //PAMPALLUGUES VIANANTS A VERD
      digitalWrite(led6, LOW);
      
      delay (250);

      digitalWrite(led6, HIGH);
      
      delay (250);

      digitalWrite(led6, LOW);
      
      delay (250);

      digitalWrite(led6, HIGH);
      
      delay (250);

      digitalWrite(led6, LOW);
      
      delay (250);

      digitalWrite(led6, HIGH);
      
      delay (250);

      digitalWrite(led6, LOW);
      
      delay (250);

      digitalWrite(led6, HIGH);
      
      delay (250);
 }
 //PAS VIANANTS B PREMUT
 if (buttonState3 == 1 && buttonState2 == 0){

      b--;
  
      //RESET TOTS ELS LLUMS
      digitalWrite(led0, LOW);
      digitalWrite(led1, LOW);     
      digitalWrite(led2, LOW);    
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);     
      digitalWrite(led5, LOW);    
      digitalWrite(led6, LOW);
      digitalWrite(led7, LOW);
      digitalWrite(led8, LOW);
      digitalWrite(led9, LOW);

      // ENCENDRE LLUMS ADEQUATS
      digitalWrite(led8, HIGH);
      digitalWrite(led7, HIGH);
      digitalWrite(led3, HIGH);
      digitalWrite(led2, HIGH);

      delay (3000);

      //PAMPALLUGUES VIANANTS B VERD
      digitalWrite(led8, LOW);
      
      delay (250);

      digitalWrite(led8, HIGH);
      
      delay (250);

      digitalWrite(led8, LOW);
      
      delay (250);

      digitalWrite(led8, HIGH);
      
      delay (250);

      digitalWrite(led8, LOW);
      
      delay (250);

      digitalWrite(led8, HIGH);
      
      delay (250);

      digitalWrite(led8, LOW);
      
      delay (250);

      digitalWrite(led8, HIGH);
      
      delay (250);
 }
 
 //CAP PAS VIANANTS RECLAMAT --> SEQUENCIA A
 if (a == 0 && x == 0 && buttonState2 == 0 && buttonState3 == 0){
      
      x++; // INCREMENT

      Serial.print("X val:  ");
      Serial.println (x);

      // RESET LEDS
      digitalWrite(led0, LOW);     
      digitalWrite(led1, LOW);    
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
      digitalWrite(led5, LOW);
      digitalWrite(led6, LOW);     
      digitalWrite(led7, LOW);    
      digitalWrite(led8, LOW);
      digitalWrite(led9, LOW);
      
 
      //ENCENEM LEDS ADEQUATS
      digitalWrite(led7, HIGH);     // semafor vianant A vermell
      digitalWrite(led9, HIGH);     // semafor vianant B vermell
      digitalWrite(led0, HIGH);     
      digitalWrite(led3, HIGH);     
      
      delay(temps);
      
      digitalWrite(led3, LOW);     
      digitalWrite(led5, HIGH);     
      
      delay(temps); 
      
      delay(temps);   
      
      delay(temps);   
      
      delay(temps);

      digitalWrite(led5, LOW);     
      digitalWrite(led4, HIGH);     
      
      delay(temps);

      digitalWrite(led4, LOW);         
      
      delay(temps);

      digitalWrite(led4, HIGH);         
      
      delay(temps);

      digitalWrite(led4, LOW);     
    
      
      delay(temps);

      digitalWrite(led4, HIGH);    
      
      delay(temps);

     
  }
  //CAP PAS VIANANTS RECLAMAT --> SEQUENCIA B
  if (b == 0 && x == 1 && buttonState2 == 0 && buttonState3 == 0){
            
      x--; //"RESET" VARIABLE PER TORNAR A COMENÇAR EL CICLE A
      Serial.print("X val:  ");
      Serial.println (x);

      // RESET LEDS
      digitalWrite(led0, LOW);     
      digitalWrite(led1, LOW);    
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
      digitalWrite(led5, LOW);
      digitalWrite(led6, LOW);     
      digitalWrite(led7, LOW);    
      digitalWrite(led8, LOW);
      digitalWrite(led9, LOW);
      
 
      //ENCENEM LEDS ADEQUATS
      digitalWrite(led7, HIGH);     // semafor vianant A vermell
      digitalWrite(led9, HIGH);     // semafor vianant B vermell
      digitalWrite(led0, HIGH);     
      digitalWrite(led3, HIGH);       
      
      delay(temps);
      
      digitalWrite(led0, LOW);     
      digitalWrite(led2, HIGH);     
      
      delay(temps);
      
      delay(temps);     
      
      delay(temps);

      delay(temps);

      digitalWrite(led2, LOW); 
      digitalWrite(led1, HIGH);             
      
      delay(temps);

      digitalWrite(led1, LOW);     
      
      delay(temps);

      digitalWrite(led1, HIGH);       
             
      delay(temps);

      digitalWrite(led1, LOW);           
      
      delay(temps);
      
      digitalWrite(led1, HIGH);           
      
      delay(temps);
      
      digitalWrite(led1, LOW);           
      digitalWrite(led0, HIGH);
      
      delay(temps);
  }
}


//********** Funcions ************************************************************* 
