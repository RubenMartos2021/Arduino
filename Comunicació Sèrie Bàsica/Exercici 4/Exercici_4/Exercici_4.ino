/**********************************************************************
**                                                                   **
**                               TÍTOL:                              **
**                      LL02_Rubén_Martos_ARDUINO                    **
**                                                                   **
**  NOM: Rubén Martos Gutiérrez                     Data: 18/11/2021 **
**********************************************************************/
//************************** INCLUDE **********************************


//************************ VARIABLES **********************************



//************************** SETUP ************************************

void setup()             // run once, when the sketch starts            
{                
  Serial.begin(9600);   // set up Serial library at 9600 bps
  Serial.println("Escull el número de l'operacio que vols realitzar?");
  delay(1000);
  Serial.println("  1. Comprovar número de tarjeta de credit");
  delay(1000);
  Serial.println("  2. Comprovar número de compte bancari");
  delay(1000);
  Serial.println("  3. Buscar un digit perdut de tarjeta de credit");    
}

//************************** LOOP *************************************
void loop()   // run over and over again
{                 
              // do nothing
}

//************************** FUNCIONS **********************************
