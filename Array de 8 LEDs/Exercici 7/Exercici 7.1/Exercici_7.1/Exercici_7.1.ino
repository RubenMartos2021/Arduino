/**********************************************************************
**                                                                   **
**                               TÍTOL:                              **
**                      LL06_Rubén_Martos_ARDUINO                    **
**                                                                   **
**  NOM: Rubén Martos Gutiérrez                     Data: 15/12/2021 **
**********************************************************************/
//************************** INCLUDE **********************************


//************************ VARIABLES **********************************
const byte led3 = 8;          // donar nom al pin 8 de l’Arduino
int LED = 29;
//************************** SETUP ************************************

void setup()  // ho fa un cop quan el programa s'inicia
{
  pinMode(led3, OUTPUT);     // definir el pin 8 com una sortida
  for (int i=0; i <= LED; i++)
  {
    digitalWrite(led3, HIGH);
    delay (300);
    digitalWrite(led3, LOW);
    delay (300);
  }
}

//************************** LOOP *************************************
void loop()      //we need this to be here even though its empty
{
}

//************************** FUNCIONS  *********************************
