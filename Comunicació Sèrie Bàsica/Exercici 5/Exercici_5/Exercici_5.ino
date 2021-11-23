/**********************************************************************
**                                                                   **
**                               TÍTOL:                              **
**                      LL02_Rubén_Martos_ARDUINO                    **
**                                                                   **
**  NOM: Rubén Martos Gutiérrez                     Data: 18/11/2021 **
**********************************************************************/
//************************** INCLUDE **********************************


//************************ VARIABLES **********************************
byte y1 = 0;
byte y2 = 100;
byte y3 = 200;
//************************** SETUP ************************************

void setup()                        
{                
  Serial.begin(9600);      
}
//************************** LOOP *************************************
void loop()   // run over and over again
{
  Serial.print(y1);
  Serial.print("\t"); // a space ' ' or  tab '\t' character is needed.
  Serial.print(y2);
  Serial.print("\t"); // a space ' ' or  tab '\t' character is needed.
  Serial.println(y3); // the last value is followed by a newline characters

  y1 = y1 + 5;
  y2 = y2 + 2;
  y3 = y3 + 1;

  delay(100);              
}
//************************** FUNCIONS **********************************
