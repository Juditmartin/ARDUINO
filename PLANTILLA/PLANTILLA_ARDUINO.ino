/****************************************************************
** 
**                         TÍTOL:                              **
**                      Del 0 al 11                            **
**                                                             **
**  NOM: Judit Martin                         DATA: 22/03/2021 **
****************************************************************/
//************************ INCLUDE ******************************


//*********************** VARIABLES *****************************

int comptar = 11;
int i = 0;

//************************* SETUP *******************************

void setup()               // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps
  Serial.print("Ara comptare de 0 a ");
  Serial.println(comptar);  
  while(i <= comptar)
  {
    Serial.print(i);
    Serial.print("-");
    i++;
  } 
}


//************************** LOOP *******************************

void loop() {                // Inicia el bucle del programa
  

}

//************************* FUNCIONS ****************************
