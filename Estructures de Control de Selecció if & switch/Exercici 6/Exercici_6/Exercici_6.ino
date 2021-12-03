/**********************************************************************
**                                                                   **
**                               TÍTOL:                              **
**                      LL04_Rubén_Martos_ARDUINO                    **
**                                                                   **
**  NOM: Rubén Martos Gutiérrez                     Data: 29/11/2021 **
**********************************************************************/
//************************** INCLUDE **********************************


//************************ VARIABLES **********************************
int sensorReading = 4;

//************************** SETUP ************************************

void setup()  // ho fa un cop quan el programa s'inicia
{
  Serial.begin(9600);
  Serial.print("The day is ");

  switch (sensorReading){
  case 0:
    Serial.println("dark ");
    break;
  case 1:
    Serial.println("dim ");
    break;
  case 2:
    Serial.println("medium ");
    break;
  case 3:
   Serial.println("bright ");
    break;
  default:
    Serial.println("... I don't know!!!");
  }  
 }

//************************** LOOP *************************************
void loop()      //we need this to be here even though its empty
{
}

//************************** FUNCIONS  *********************************
