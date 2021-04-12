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
const int buttonPin = 2;
int buttonState = 0;
const int SEGMENTS[7] = {5,6,7,8,9,10,11};  // li assignem a la posició 0 el pin 5 (lletra a)
                                            // a la posició 1 el pin 6 (lletra b) .. i aixi fins al 11
int temps = 500;
const byte numbersDisplayCatode[10] = {
                          // en aquestes linies li diem les posicions del segment que s'han d'encendre
                          // amb un 1 i le sque no amb un 0.
                          0b0111111,          //0
                          0b0000110,          //1
                          0b1011011,          //2
                          0b1001111,          //3
                          0b1100110,          //4
                          0b1101101,          //5
                          0b1111101,          //6
                          0b0000111,          //7
                          0b1111111,          //8
                          0b1101111};         //9

          
//********** Setup ****************************************************************
void setup()
{
  Serial.begin(9600);

  // Amb un for, li indiquem que totes les posicions de l'array seran sortides.
  // Fem un for de 7 posicions perqu etenim 7 segments
  for(int i = 0; i <= 6; i++) {
  pinMode(SEGMENTS[i], OUTPUT);  
  }
}
//********** Loop *****************************************************************
void loop()
{
  // fem un loop de 9 posicions ja que volem arribar del 0 fins al 9
  for(int i = 0; i <=9; i++) {
    //imprimim el que ens envia la funcio "SEGMENTSON"
    SEGMENTSON(i);
    delay(1000);
  }
}

// Amb la funcio "SEGMENTSON" creem un bucle per generar els diferents numeros
void SEGMENTSON(int numero) {
  byte numberBit = numbersDisplayCatode[numero];
  for (int i = 0; i <= 6; i++)  {
    int bit = bitRead(numberBit, i);
    digitalWrite(SEGMENTS[i], bit);
  }
}
//********** Funcions ************************************************************* 
