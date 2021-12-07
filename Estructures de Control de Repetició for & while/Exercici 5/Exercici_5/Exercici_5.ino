/**********************************************************************
**                                                                   **
**                               TÍTOL:                              **
**                      LL05_Rubén_Martos_ARDUINO                    **
**                                                                   **
**  NOM: Rubén Martos Gutiérrez                     Data: 04/12/2021 **
**********************************************************************/
//************************** INCLUDE **********************************


//************************ VARIABLES **********************************
int taula = 2; 
int taula1 = 3; 
int taula2 = 4; 
int taula3 = 5; 
int taula4 = 6; 
int taula5 = 7; 
int taula6 = 8; 
int taula7 = 9; 
int taula8 = 10;
//************************** SETUP ************************************

void setup()  // ho fa un cop quan el programa s'inicia
{
  Serial.begin(9600);
  Serial.print("Taula de multiplicar del ");
  Serial.println(taula);
  for (int i=0; i <= 10; i++)
  {
    delay(100);
    Serial.print(taula);
    Serial.print(" x ");
    Serial.print(i);
    Serial.print(" = ");
    Serial.println(taula*i);
  }

  Serial.println();
  Serial.print("Taula de multiplicar del ");
  Serial.println(taula1);
  for (int i=0; i <= 10; i++)
  {
    delay(100);
    Serial.print(taula1);
    Serial.print(" x ");
    Serial.print(i);
    Serial.print(" = ");
    Serial.println(taula1*i);
  }

  Serial.println();
  Serial.print("Taula de multiplicar del ");
  Serial.println(taula2);
  for (int i=0; i <= 10; i++)
  {
    delay(100);
    Serial.print(taula2);
    Serial.print(" x ");
    Serial.print(i);
    Serial.print(" = ");
    Serial.println(taula2*i);
  }

  Serial.println();
  Serial.print("Taula de multiplicar del ");
  Serial.println(taula3);
  for (int i=0; i <= 10; i++)
  {
    delay(100);
    Serial.print(taula3);
    Serial.print(" x ");
    Serial.print(i);
    Serial.print(" = ");
    Serial.println(taula3*i);
  }

  Serial.println();
  Serial.print("Taula de multiplicar del ");
  Serial.println(taula4);
  for (int i=0; i <= 10; i++)
  {
    delay(100);
    Serial.print(taula4);
    Serial.print(" x ");
    Serial.print(i);
    Serial.print(" = ");
    Serial.println(taula4*i);
  }

  Serial.println();
  Serial.print("Taula de multiplicar del ");
  Serial.println(taula5);
  for (int i=0; i <= 10; i++)
  {
    delay(100);
    Serial.print(taula5);
    Serial.print(" x ");
    Serial.print(i);
    Serial.print(" = ");
    Serial.println(taula5*i);
  }

  Serial.println();
  Serial.print("Taula de multiplicar del ");
  Serial.println(taula6);
  for (int i=0; i <= 10; i++)
  {
    delay(100);
    Serial.print(taula6);
    Serial.print(" x ");
    Serial.print(i);
    Serial.print(" = ");
    Serial.println(taula6*i);
  }

  Serial.println();
  Serial.print("Taula de multiplicar del ");
  Serial.println(taula7);
  for (int i=0; i <= 10; i++)
  {
    delay(100);
    Serial.print(taula7);
    Serial.print(" x ");
    Serial.print(i);
    Serial.print(" = ");
    Serial.println(taula7*i);
  }

  Serial.println();
  Serial.print("Taula de multiplicar del ");
  Serial.println(taula8);
  for (int i=0; i <= 10; i++)
  {
    delay(100);
    Serial.print(taula8);
    Serial.print(" x ");
    Serial.print(i);
    Serial.print(" = ");
    Serial.println(taula8*i);
  }
}

//************************** LOOP *************************************
void loop()      //we need this to be here even though its empty
{
}

//************************** FUNCIONS  *********************************
