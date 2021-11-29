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
long drive_mb, drive_kb, real_drive_mb, real_drive_kb, missing_drive_kb;

//************************** SETUP ************************************

void setup()  // ho fa un cop quan el programa s'inicia
{
  Serial.begin(9600);  
  
  Serial.print("Your HD is ");
  Serial.print(drive_gb);
  Serial.println(" GB large.");

  drive_mb = drive_gb;
  drive_mb = drive_mb * 1024;

   drive_kb = drive_gb;
  drive_kb = drive_kb * 1024 * 1024;

  Serial.print("In theory, it can store ");
  Serial.print(drive_mb);
  Serial.print(" Megabytes, ");
  Serial.print(drive_kb);
  Serial.println(" Kilobytes. ");

  real_drive_mb = drive_gb;
  real_drive_mb = real_drive_mb * 1000;

  real_drive_kb = drive_gb;
  real_drive_kb = real_drive_kb * 1000000;

  Serial.print("But it really only stores ");
  Serial.print(real_drive_mb);
  Serial.print(" Megabytes, ");
  Serial.print(real_drive_kb);
  Serial.println(" Kilobytes. ");

  missing_drive_kb = drive_kb - real_drive_kb;

   Serial.print("You are missing ");
   Serial.print(missing_drive_kb);
   Serial.print(" Kilobytes! ");
}

//************************** LOOP *************************************
void loop()      //we need this to be here even though its empty
{
}

//************************** FUNCIONS  *********************************
