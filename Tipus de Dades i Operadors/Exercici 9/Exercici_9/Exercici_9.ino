/**********************************************************************
**                                                                   **
**                               TÍTOL:                              **
**                      LL03_Rubén_Martos_ARDUINO                    **
**                                                                   **
**  NOM: Rubén Martos Gutiérrez                     Data: 27/11/2021 **
**********************************************************************/
//************************** INCLUDE **********************************


//************************ VARIABLES **********************************

int drive_gb = 100;
long drive_mb;  

//************************** SETUP ************************************

void setup()  // ho fa un cop quan el programa s'inicia
{
  Serial.begin(9600);  
  
  Serial.print("Your HD is ");
  Serial.print(drive_gb);
  Serial.println(" GB large. ");

  drive_mb = drive_gb;
  drive_mb = drive_mb * 1024;

  Serial.print("It can store ");
  Serial.print(drive_mb);
  Serial.println(" Megabytes!");
}

//************************** LOOP *************************************

void loop()  // we need this to be here even though its empty
{
}

//************************** FUNCIONS  *********************************
