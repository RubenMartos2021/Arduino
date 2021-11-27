/**********************************************************************
**                                                                   **
**                               TÍTOL:                              **
**                      LL03_Rubén_Martos_ARDUINO                    **
**                                                                   **
**  NOM: Rubén Martos Gutiérrez                     Data: 27/11/2021 **
**********************************************************************/
//************************** INCLUDE **********************************


//************************ VARIABLES **********************************

int test = 32767;  

//************************** SETUP ************************************

void setup()  // ho fa un cop quan el programa s'inicia
{
  Serial.begin(9600);  
  Serial.print("Test value is: ");
  Serial.println(test);

  test = test + 1;
  
  Serial.print("Now it is: ");
  Serial.println(test);
}

//************************** LOOP *************************************

void loop()  // we need this to be here even though its empty
{
}

//************************** FUNCIONS  *********************************
