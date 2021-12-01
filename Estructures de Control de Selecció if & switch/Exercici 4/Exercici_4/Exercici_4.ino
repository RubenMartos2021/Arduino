/**********************************************************************
**                                                                   **
**                               TÍTOL:                              **
**                      LL04_Rubén_Martos_ARDUINO                    **
**                                                                   **
**  NOM: Rubén Martos Gutiérrez                     Data: 29/11/2021 **
**********************************************************************/
//************************** INCLUDE **********************************


//************************ VARIABLES **********************************
int tempAigua = 89;

//************************** SETUP ************************************

void setup()  // ho fa un cop quan el programa s'inicia
{
  Serial.begin(9600);

  if (tempAigua < 90)
  {
    Serial.print("Aigua encara no bull ");
  }
  
  else if (tempAigua >= 90 && tempAigua <= 99)
  {
    Serial.print("Aigua a punt de bullir ");
  }

   else if (tempAigua == 100)
  {
    Serial.print("Aigua a 100ºC ");
  }

  else
  {
    Serial.print("Aigua bullint ");
  }
}

//************************** LOOP *************************************
void loop()      //we need this to be here even though its empty
{
}

//************************** FUNCIONS  *********************************
