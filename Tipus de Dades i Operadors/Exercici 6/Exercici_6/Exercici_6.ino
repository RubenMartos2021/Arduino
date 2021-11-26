/**********************************************************************
**                                                                   **
**                               TÍTOL:                              **
**                      LL01_Rubén_Martos_ARDUINO                    **
**                                                                   **
**  NOM: Rubén Martos Gutiérrez                     Data: 18/11/2021 **
**********************************************************************/
//************************** INCLUDE **********************************


//************************ VARIABLES **********************************

int drive_gb = 5;
int drive_mb = 0;

//************************** SETUP ************************************

void setup()  // run once when the sketch starts
{
  Serial.begin(9600);  // set up Serial library at 9600 bps
  Serial.print("Your HD is ");
  Serial.print(drive_gb);
  Serial.println(" GB large. ");

  drive_mb = 1024 * drive_gb;

  Serial.print("It can store ");
  Serial.print(drive_mb);
  Serial.println(" Megabytes!");
}

//************************** LOOP *************************************

void loop()  // we need this to be here even though its empty
{                 
}
