/**********************************************************************
**                                                                   **
**                               TÍTOL:                              **
**                      LL04_Rubén_Martos_ARDUINO                    **
**                                                                   **
**  NOM: Rubén Martos Gutiérrez                     Data: 29/11/2021 **
**********************************************************************/
//************************** INCLUDE **********************************


//************************ VARIABLES **********************************
float qualifEnergetica = 47.2;

//************************** SETUP ************************************

void setup()  // ho fa un cop quan el programa s'inicia
{
  Serial.begin(9600);
  Serial.println("Indicador KgCO2/m2 ");

  if (qualifEnergetica > 0 && qualifEnergetica < 3.5)
  {
    Serial.print("A ");
  }
  
  else if (qualifEnergetica >= 3.5 && qualifEnergetica < 6.5)
  {
    Serial.print("B ");
  }

   else if (qualifEnergetica >= 6.5 && qualifEnergetica < 11.1)
  {
    Serial.print("C ");
  }

  else if (qualifEnergetica >= 11.1 && qualifEnergetica < 17.7)
  {
    Serial.print("D ");
  }

   else if (qualifEnergetica >= 17.7 && qualifEnergetica < 38.2)
  {
    Serial.print("E ");
  }

  else if (qualifEnergetica >= 38.2 && qualifEnergetica < 43.2)
  {
    Serial.print("F ");
  }

  else
  {
    Serial.print("G ");
  }
}

//************************** LOOP *************************************
void loop()      //we need this to be here even though its empty
{
}

//************************** FUNCIONS  *********************************
