/**********************************************************************
**                                                                   **
**                               TÍTOL:                              **
**                      LL04_Rubén_Martos_ARDUINO                    **
**                                                                   **
**  NOM: Rubén Martos Gutiérrez                     Data: 29/11/2021 **
**********************************************************************/
//************************** INCLUDE **********************************


//************************ VARIABLES **********************************
int tempAigua = 101;

//************************** SETUP ************************************

void setup()  // ho fa un cop quan el programa s'inicia
{
  Serial.begin(9600);

  if (tempAigua > 100)
  {
    Serial.print("Aigua supera els 100ºC, està bullint ");
  }
}

//************************** LOOP *************************************
void loop()      //we need this to be here even though its empty
{
}

//************************** FUNCIONS  *********************************
