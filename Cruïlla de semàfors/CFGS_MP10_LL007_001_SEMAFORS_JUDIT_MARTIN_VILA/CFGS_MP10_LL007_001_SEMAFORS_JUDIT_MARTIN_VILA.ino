/**********************************************************************************
**                                                                               **
**                              Semafors                                       **
**                                                                               **
** NOM: JUDIT MARTIN                                          DATA: 27/03/2021   **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
//ASSIGNAR PINS
const int led0 = 7; // VERMELL A
const int led1 = 8; // AMBAR A
const int led2 = 9; // VERD A
const int led3 = 10; // VERMELL B
const int led4 = 11; // AMBAR B
const int led5 = 12; //VERD B
int temps = 300;
          
//********** Setup ****************************************************************
void setup()
{
  Serial.begin(9600);
  //DEFINIR SORTIDES
  pinMode(led0, OUTPUT);     
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT); 
  pinMode(led3, OUTPUT); 
  pinMode(led4, OUTPUT); 
  pinMode(led5, OUTPUT); 
  
}
//********** Loop *****************************************************************
void loop()
{
      //SEQUENCIA A
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

      //SEQUENCIA B
      delay(temps);

      digitalWrite(led4, LOW);   
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
//********** Funcions ************************************************************* 
