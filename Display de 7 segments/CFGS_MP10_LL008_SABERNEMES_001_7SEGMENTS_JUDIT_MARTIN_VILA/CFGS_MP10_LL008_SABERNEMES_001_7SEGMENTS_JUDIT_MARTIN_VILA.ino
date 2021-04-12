/**********************************************************************************
**                                                                               **
**                                Numeros i lletres                              **
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
int inici = 1;
byte caracter;

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
if (inici == 1){
  inici++;
  Serial.println("Escriu una lletra o número: ");
}
  if (Serial.available()> 0){
    
      byte caracter = Serial.read();
      
      digitalWrite(A, LOW);
      digitalWrite(B, LOW);
      digitalWrite(C, LOW);
      digitalWrite(D, LOW);
      digitalWrite(E, LOW);
      digitalWrite(F, LOW);
      digitalWrite(G, LOW);
 
   switch (caracter){

   // CASOS MINUSCULES
   case 'a':
      digitalWrite(G, HIGH);
      digitalWrite(A, HIGH);
      digitalWrite(B, HIGH);
      digitalWrite(C, HIGH);
      digitalWrite(E, HIGH);
      digitalWrite(F, HIGH);
      delay (500);
      break;

   case 'b':
      digitalWrite(C, HIGH);
      digitalWrite(D, HIGH);
      digitalWrite(E, HIGH);
      digitalWrite(F, HIGH);
      digitalWrite(G, HIGH);
      delay (500);
      break;
      
   case 'c':
      digitalWrite(A, HIGH);
      digitalWrite(D, HIGH);
      digitalWrite(E, HIGH);
      digitalWrite(F, HIGH);
      delay (500);
      break;

   case 'd':
      digitalWrite(B, HIGH);
      digitalWrite(C, HIGH);
      digitalWrite(D, HIGH);
      digitalWrite(E, HIGH);
      digitalWrite(G, HIGH);
      delay (500);
      break;
         
    case 'e':
      digitalWrite(A, HIGH);
      digitalWrite(D, HIGH);
      digitalWrite(E, HIGH);
      digitalWrite(F, HIGH);
      digitalWrite(G, HIGH);
      delay (500);
      break;

    case 'f':
      digitalWrite(A, HIGH);
      digitalWrite(E, HIGH);
      digitalWrite(F, HIGH);
      digitalWrite(G, HIGH);
      delay (500);
      break;

    case 'g':
      digitalWrite(A, HIGH);
      digitalWrite(B, HIGH);
      digitalWrite(C, HIGH);
      digitalWrite(D, HIGH);
      digitalWrite(F, HIGH);
      digitalWrite(G, HIGH);
      delay (500);
      break;

    case 'h':
      digitalWrite(B, HIGH);
      digitalWrite(C, HIGH);
      digitalWrite(E, HIGH);
      digitalWrite(F, HIGH);
      digitalWrite(G, HIGH);
      delay (500);
      break;

    case 'i':
      digitalWrite(E, HIGH);
      digitalWrite(F, HIGH);
      delay (500);
      break;

    case 'j':
      digitalWrite(B, HIGH);
      digitalWrite(C, HIGH);
      digitalWrite(D, HIGH);
      digitalWrite(E, HIGH);
      delay (500);
      break;

    case 'k':
      digitalWrite(B, HIGH);
      digitalWrite(C, HIGH);
      digitalWrite(E, HIGH);
      digitalWrite(F, HIGH);
      digitalWrite(G, HIGH);
      delay (500);
      break;

    case 'l':
      digitalWrite(D, HIGH);
      digitalWrite(E, HIGH);
      digitalWrite(F, HIGH);
      delay (500);
      break;

    case 'm':
      digitalWrite(A, HIGH);
      digitalWrite(C, HIGH);
      digitalWrite(E, HIGH);
      delay (500);
      break;

    case 'n':
      digitalWrite(G, HIGH);
      digitalWrite(C, HIGH);
      digitalWrite(E, HIGH);
      delay (500);
      break;

    case 'o':
      digitalWrite(A, HIGH);
      digitalWrite(B, HIGH);
      digitalWrite(C, HIGH);
      digitalWrite(D, HIGH);
      digitalWrite(E, HIGH);
      digitalWrite(F, HIGH);
      delay (500);
      break;

    case 'p':
      digitalWrite(A, HIGH);
      digitalWrite(B, HIGH);
      digitalWrite(E, HIGH);
      digitalWrite(F, HIGH);
      digitalWrite(G, HIGH);
      delay (500);
      break;

    case 'q':
      digitalWrite(A, HIGH);
      digitalWrite(B, HIGH);
      digitalWrite(C, HIGH);
      digitalWrite(F, HIGH);
      digitalWrite(G, HIGH);
      delay (500);
      break;

    case 'r':
      digitalWrite(E, HIGH);
      digitalWrite(G, HIGH);
      delay (500);
      break;

    case 's':
      digitalWrite(A, HIGH);
      digitalWrite(C, HIGH);
      digitalWrite(D, HIGH);
      digitalWrite(F, HIGH);
      digitalWrite(G, HIGH);
      delay (500);
      break;

    case 't':
      digitalWrite(D, HIGH);
      digitalWrite(E, HIGH);
      digitalWrite(F, HIGH);
      digitalWrite(G, HIGH);
      delay (500);
      break;

    case 'u':
      digitalWrite(B, HIGH);
      digitalWrite(C, HIGH);
      digitalWrite(D, HIGH);
      digitalWrite(E, HIGH);
      digitalWrite(F, HIGH);
      delay (500);
      break;

    case 'v':
      digitalWrite(C, HIGH);
      digitalWrite(D, HIGH);
      digitalWrite(E, HIGH);
      delay (500);
      break;

    case 'w':
      digitalWrite(B, HIGH);
      digitalWrite(D, HIGH);
      digitalWrite(F, HIGH);
      delay (500);
      break;

    case 'x':
      digitalWrite(B, HIGH);
      digitalWrite(C, HIGH);
      digitalWrite(E, HIGH);
      digitalWrite(F, HIGH);
      digitalWrite(G, HIGH);
      delay (500);
      break;

    case 'y':
      digitalWrite(B, HIGH);
      digitalWrite(C, HIGH);
      digitalWrite(D, HIGH);
      digitalWrite(F, HIGH);
      digitalWrite(G, HIGH);
      delay (500);
      break;

// CASOS MAJUSCULES
   case 'A':
      digitalWrite(G, HIGH);
      digitalWrite(A, HIGH);
      digitalWrite(B, HIGH);
      digitalWrite(C, HIGH);
      digitalWrite(E, HIGH);
      digitalWrite(F, HIGH);
      delay (500);
      break;

   case 'B':
      digitalWrite(C, HIGH);
      digitalWrite(D, HIGH);
      digitalWrite(E, HIGH);
      digitalWrite(F, HIGH);
      digitalWrite(G, HIGH);
      delay (500);
      break;
      
   case 'C':
      digitalWrite(A, HIGH);
      digitalWrite(D, HIGH);
      digitalWrite(E, HIGH);
      digitalWrite(F, HIGH);
      delay (500);
      break;

   case 'D':
      digitalWrite(B, HIGH);
      digitalWrite(C, HIGH);
      digitalWrite(D, HIGH);
      digitalWrite(E, HIGH);
      digitalWrite(G, HIGH);
      delay (500);
      break;
         
    case 'E':
      digitalWrite(A, HIGH);
      digitalWrite(D, HIGH);
      digitalWrite(E, HIGH);
      digitalWrite(F, HIGH);
      digitalWrite(G, HIGH);
      delay (500);
      break;

    case 'F':
      digitalWrite(A, HIGH);
      digitalWrite(E, HIGH);
      digitalWrite(F, HIGH);
      digitalWrite(G, HIGH);
      delay (500);
      break;

    case 'G':
      digitalWrite(A, HIGH);
      digitalWrite(B, HIGH);
      digitalWrite(C, HIGH);
      digitalWrite(D, HIGH);
      digitalWrite(F, HIGH);
      digitalWrite(G, HIGH);
      delay (500);
      break;

    case 'H':
      digitalWrite(B, HIGH);
      digitalWrite(C, HIGH);
      digitalWrite(E, HIGH);
      digitalWrite(F, HIGH);
      digitalWrite(G, HIGH);
      delay (500);
      break;

    case 'I':
      digitalWrite(E, HIGH);
      digitalWrite(F, HIGH);
      delay (500);
      break;

    case 'J':
      digitalWrite(B, HIGH);
      digitalWrite(C, HIGH);
      digitalWrite(D, HIGH);
      digitalWrite(E, HIGH);
      delay (500);
      break;

    case 'K':
      digitalWrite(B, HIGH);
      digitalWrite(C, HIGH);
      digitalWrite(E, HIGH);
      digitalWrite(F, HIGH);
      digitalWrite(G, HIGH);
      delay (500);
      break;

    case 'L':
      digitalWrite(D, HIGH);
      digitalWrite(E, HIGH);
      digitalWrite(F, HIGH);
      delay (500);
      break;

    case 'M':
      digitalWrite(A, HIGH);
      digitalWrite(C, HIGH);
      digitalWrite(E, HIGH);
      delay (500);
      break;

    case 'N':
      digitalWrite(G, HIGH);
      digitalWrite(C, HIGH);
      digitalWrite(E, HIGH);
      delay (500);
      break;

    case 'O':
      digitalWrite(A, HIGH);
      digitalWrite(B, HIGH);
      digitalWrite(C, HIGH);
      digitalWrite(D, HIGH);
      digitalWrite(E, HIGH);
      digitalWrite(F, HIGH);
      delay (500);
      break;

    case 'P':
      digitalWrite(A, HIGH);
      digitalWrite(B, HIGH);
      digitalWrite(E, HIGH);
      digitalWrite(F, HIGH);
      digitalWrite(G, HIGH);
      delay (500);
      break;

    case 'Q':
      digitalWrite(A, HIGH);
      digitalWrite(B, HIGH);
      digitalWrite(C, HIGH);
      digitalWrite(F, HIGH);
      digitalWrite(G, HIGH);
      delay (500);
      break;

    case 'R':
      digitalWrite(E, HIGH);
      digitalWrite(G, HIGH);
      delay (500);
      break;

    case 'S':
      digitalWrite(A, HIGH);
      digitalWrite(C, HIGH);
      digitalWrite(D, HIGH);
      digitalWrite(F, HIGH);
      digitalWrite(G, HIGH);
      delay (500);
      break;

    case 'T':
      digitalWrite(D, HIGH);
      digitalWrite(E, HIGH);
      digitalWrite(F, HIGH);
      digitalWrite(G, HIGH);
      delay (500);
      break;

    case 'U':
      digitalWrite(B, HIGH);
      digitalWrite(C, HIGH);
      digitalWrite(D, HIGH);
      digitalWrite(E, HIGH);
      digitalWrite(F, HIGH);
      delay (500);
      break;

    case 'V':
      digitalWrite(C, HIGH);
      digitalWrite(D, HIGH);
      digitalWrite(E, HIGH);
      delay (500);
      break;

    case 'W':
      digitalWrite(B, HIGH);
      digitalWrite(D, HIGH);
      digitalWrite(F, HIGH);
      delay (500);
      break;

    case 'X':
      digitalWrite(B, HIGH);
      digitalWrite(C, HIGH);
      digitalWrite(E, HIGH);
      digitalWrite(F, HIGH);
      digitalWrite(G, HIGH);
      delay (500);
      break;

    case 'Y':
      digitalWrite(B, HIGH);
      digitalWrite(C, HIGH);
      digitalWrite(D, HIGH);
      digitalWrite(F, HIGH);
      digitalWrite(G, HIGH);
      delay (500);
      break;

    case 'Z':
      digitalWrite(A, HIGH);
      digitalWrite(B, HIGH);
      digitalWrite(D, HIGH);
      digitalWrite(E, HIGH);
      digitalWrite(G, HIGH);
      delay (500);
      break;

    // NUMEROS

    //nuemro 0
    case 48:
      digitalWrite(A, HIGH);
      digitalWrite(B, HIGH);
      digitalWrite(C, HIGH);
      digitalWrite(D, HIGH);
      digitalWrite(E, HIGH);
      digitalWrite(F, HIGH);
      delay (500);
      break;

    //numero 1
    case 49:
      digitalWrite(B, HIGH);
      digitalWrite(C, HIGH);
      delay (500);
      break;

    //numero 2
    case 50:
      digitalWrite(A, HIGH);
      digitalWrite(B, HIGH);
      digitalWrite(D, HIGH);
      digitalWrite(E, HIGH);
      digitalWrite(G, HIGH);
      delay (500);
      break;

    //numero 3
    case 51:
      digitalWrite(A, HIGH);
      digitalWrite(B, HIGH);
      digitalWrite(C, HIGH);
      digitalWrite(D, HIGH);
      digitalWrite(G, HIGH);
      delay (500);
      break;

    //numero 4
    case 52:
      digitalWrite(B, HIGH);
      digitalWrite(C, HIGH);
      digitalWrite(F, HIGH);
      digitalWrite(G, HIGH);
      delay (500);
      break;

    //numero 5
    case 53:
      digitalWrite(A, HIGH);
      digitalWrite(C, HIGH);
      digitalWrite(D, HIGH);
      digitalWrite(F, HIGH);
      digitalWrite(G, HIGH);
      delay (500);
      break;

    //numero 6
    case 54:
      digitalWrite(A, HIGH);
      digitalWrite(C, HIGH);
      digitalWrite(D, HIGH);
      digitalWrite(E, HIGH);
      digitalWrite(F, HIGH);
      digitalWrite(G, HIGH);
      delay (500);
      break;

    //numero 7
    case 55:
      digitalWrite(A, HIGH);
      digitalWrite(B, HIGH);
      digitalWrite(C, HIGH);
      delay (500);
      break;

    //numero 8
    case 56:
      digitalWrite(A, HIGH);
      digitalWrite(B, HIGH);
      digitalWrite(C, HIGH);
      digitalWrite(D, HIGH);
      digitalWrite(E, HIGH);
      digitalWrite(F, HIGH);
      digitalWrite(G, HIGH);
      delay (500);
      break;

    //numero 9
    case 57:
      digitalWrite(A, HIGH);
      digitalWrite(B, HIGH);
      digitalWrite(C, HIGH);
      digitalWrite(F, HIGH);
      digitalWrite(G, HIGH);
      delay (500);
      break;

      }
   }

}
//********** Funcions ************************************************************* 
