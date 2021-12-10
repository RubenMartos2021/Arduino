/**********************************************************************
**                                                                   **
**                               TÍTOL:                              **
**                      LL05_Rubén_Martos_ARDUINO                    **
**                                                                   **
**  NOM: Rubén Martos Gutiérrez                     Data: 04/12/2021 **
**********************************************************************/
//************************** INCLUDE **********************************


//************************ VARIABLES **********************************
int comptar = 11;
int i = 0;
//************************** SETUP ************************************

void setup()  // ho fa un cop quan el programa s'inicia
{
  Serial.begin(9600);
  Serial.print("Ara comptare de 0 a ");
  Serial.println(comptar);
  while (i <= comptar)
  {
    Serial.print(i);
    Serial.print("-");
    i++;
  }
}

//************************** LOOP *************************************
void loop()      //we need this to be here even though its empty
{
}

//************************** FUNCIONS  *********************************
