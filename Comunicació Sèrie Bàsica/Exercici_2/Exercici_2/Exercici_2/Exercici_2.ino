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

void setup()                 
{                
  Serial.begin(9600);       
}

//************************** LOOP *************************************
void loop()   // run over and over again
{                 
  Serial.print ("Hello world!");   // prints Hello world!         
  delay(1000);
}

//************************** FUNCIONS **********************************
