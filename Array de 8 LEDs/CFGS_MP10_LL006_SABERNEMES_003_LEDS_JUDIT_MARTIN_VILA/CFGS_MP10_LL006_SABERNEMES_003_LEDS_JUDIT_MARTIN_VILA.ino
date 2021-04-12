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
const int led5 = 10;         // donar nom al pin 10 de l’Arduino
const int led6 = 11;         // donar nom al pin 11 de l’Arduino
const int led7 = 12;         // donar nom al pin 12 de l’Arduino

//********** Setup ****************************************************************
void setup()
{
  Serial.begin(9600);
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
  digitalWrite(led1, HIGH);        
  digitalWrite(led7, LOW); 
 
  delay(400);    
             
  digitalWrite(led2, HIGH); 
  digitalWrite(led0, LOW); 
     
  delay(350);                  
     
  digitalWrite(led3, HIGH);    
  digitalWrite(led1, LOW);
  
  delay(300);                
        
  digitalWrite(led4, HIGH); 
  digitalWrite(led2, LOW);    
  
  delay(250);                  
        
  digitalWrite(led5, HIGH); 
  digitalWrite(led3, LOW);  

  delay(200);                  
  
  digitalWrite(led6, HIGH);       
  digitalWrite(led4, LOW);    
    
  
  delay(150);                  
          
  digitalWrite(led7, HIGH);
  digitalWrite(led5, LOW);    
   
  
  delay(100);   
   
  digitalWrite(led0, HIGH);           
  digitalWrite(led6, LOW);

      
  delay(50);                         
}

//********** Funcions *************************************************************
