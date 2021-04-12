/**********************************************************************************
**                                                                               **
**                                  De 0 a 9                                     **
**                                                                               **
** NOM: JUDIT MARTIN                                          DATA: 27/03/2021   **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
const int A = 5;
const int B = 6;
const int C = 7;
const int D = 8;
const int E = 9;
const int F = 10;
const int G = 11;
const int N = 7;
const int SEGMENTS[N] = {A,B,C,D,E,F,G};
int temps = 500;

//********** Setup ****************************************************************
void setup()
{
  Serial.begin(9600);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);      
  
}
//********** Loop *****************************************************************
void loop()
{
      //0
      digitalWrite(G, LOW);
      digitalWrite(A, HIGH);
      digitalWrite(B, HIGH);
      digitalWrite(C, HIGH);
      digitalWrite(D, HIGH);
      digitalWrite(E, HIGH);
      digitalWrite(F, HIGH);

      delay(temps);

      //1
      digitalWrite(A, LOW);
      digitalWrite(D, LOW);
      digitalWrite(E, LOW);
      digitalWrite(F, LOW);
      digitalWrite(G, LOW);

      delay(temps);

      //2
      digitalWrite(A, HIGH);
      digitalWrite(C, LOW);
      digitalWrite(D, HIGH);
      digitalWrite(E, HIGH);
      digitalWrite(G, HIGH);

      delay(temps);

      //3
      digitalWrite(E, LOW);
      digitalWrite(C, HIGH);

      delay(temps);

      //4
      digitalWrite(A, LOW);
      digitalWrite(D, LOW);
      digitalWrite(F, HIGH);

      delay(temps);

      //5
      digitalWrite(B, LOW);
      digitalWrite(A, HIGH);
      digitalWrite(D, HIGH);

      delay(temps);

      //6
      digitalWrite(E, HIGH);

      delay(temps);

      //7
      digitalWrite(A, HIGH);
      digitalWrite(B, HIGH);
      digitalWrite(D, LOW);
      digitalWrite(E, LOW);
      digitalWrite(F, LOW);
      digitalWrite(G, LOW);

      delay(temps);

      //8
      digitalWrite(D, HIGH);
      digitalWrite(E, HIGH);
      digitalWrite(F, HIGH);
      digitalWrite(G, HIGH);

      delay(temps);

      //9
      digitalWrite(D, LOW);
      digitalWrite(E, LOW);

      delay(temps);
      
}
//********** Funcions ************************************************************* 
