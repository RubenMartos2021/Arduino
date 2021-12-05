/**********************************************************************
**                                                                   **
**                               TÍTOL:                              **
**                      LL05_Rubén_Martos_ARDUINO                    **
**                                                                   **
**  NOM: Rubén Martos Gutiérrez                     Data: 04/12/2021 **
**********************************************************************/
//************************** INCLUDE **********************************


//************************ VARIABLES **********************************
int num = 10;

//************************** SETUP ************************************

void setup()  // ho fa un cop quan el programa s'inicia
{
  Serial.begin(9600);
  Serial.println("Ara faré el compte enrere per l'explosió:");
  for (int i=0; i <= 10; i++)
  {
    delay(1000);
    Serial.println(num);
    num = num - 1;
  }
    Serial.println(" B O O O M !!! ");
}

//************************** LOOP *************************************
void loop()      //we need this to be here even though its empty
{
}

//************************** FUNCIONS  *********************************
