/**********************************************************************
**                                                                   **
**                               TÍTOL:                              **
**                      LL07_Rubén_Martos_ARDUINO                    **
**                                                                   **
**  NOM: Rubén Martos Gutiérrez                     Data: 20/12/2021 **
**********************************************************************/
//************************** INCLUDE **********************************


//************************ VARIABLES **********************************
const byte segA = 5;          // donar nom al pin 5 de l’Arduino
const byte segB = 6;          
const byte segC = 7;          
const byte segD = 8;          
const byte segE = 9;          
const byte segF = 10;         
const byte segG = 11;   
//************************** SETUP ************************************

void setup()  // ho fa un cop quan el programa s'inicia
{
  pinMode(segA, OUTPUT);     // definir el pin 5 com una sortida
  pinMode(segB, OUTPUT);     // definir el pin 6 com una sortida
  pinMode(segC, OUTPUT);     // definir el pin 7 com una sortida
  pinMode(segD, OUTPUT);     // definir el pin 8 com una sortida
  pinMode(segE, OUTPUT);     // definir el pin 9 com una sortida
  pinMode(segF, OUTPUT);     // definir el pin 10 com una sortida
  pinMode(segG, OUTPUT);     // definir el pin 11 com una sortida
}

//************************** LOOP *************************************
void loop()      //we need this to be here even though its empty
{
   digitalWrite(segA, HIGH);
 digitalWrite(segB, HIGH);
 digitalWrite(segC, HIGH);
 digitalWrite(segD, HIGH);
 digitalWrite(segE, HIGH);
 digitalWrite(segF, HIGH);
 digitalWrite(segG, LOW);

  delay(300);

  digitalWrite(segA, LOW);
 digitalWrite(segB, HIGH);
 digitalWrite(segC, HIGH);
 digitalWrite(segD, LOW);
 digitalWrite(segE, LOW);
 digitalWrite(segF, LOW);
 digitalWrite(segG, LOW);

  delay(300);

 digitalWrite(segA, HIGH);
 digitalWrite(segB, HIGH);
 digitalWrite(segC, LOW);
 digitalWrite(segD, HIGH);
 digitalWrite(segE, HIGH);
 digitalWrite(segF, LOW);
 digitalWrite(segG, HIGH);

  delay(300);

 digitalWrite(segA, HIGH);
 digitalWrite(segB, HIGH);
 digitalWrite(segC, HIGH);
 digitalWrite(segD, HIGH);
 digitalWrite(segE, LOW);
 digitalWrite(segF, LOW);
 digitalWrite(segG, HIGH);

  delay(300);

 digitalWrite(segA, LOW);
 digitalWrite(segB, HIGH);
 digitalWrite(segC, HIGH);
 digitalWrite(segD, LOW);
 digitalWrite(segE, LOW);
 digitalWrite(segF, HIGH);
 digitalWrite(segG, HIGH);

  delay(300);

  digitalWrite(segA, HIGH);
 digitalWrite(segB, LOW);
 digitalWrite(segC, HIGH);
 digitalWrite(segD, HIGH);
 digitalWrite(segE, LOW);
 digitalWrite(segF, HIGH);
 digitalWrite(segG, HIGH);

  delay(300);

   digitalWrite(segA, LOW);
 digitalWrite(segB, LOW);
 digitalWrite(segC, HIGH);
 digitalWrite(segD, HIGH);
 digitalWrite(segE, HIGH);
 digitalWrite(segF, HIGH);
 digitalWrite(segG, HIGH);

  delay(300);

     digitalWrite(segA, HIGH);
 digitalWrite(segB, HIGH);
 digitalWrite(segC, HIGH);
 digitalWrite(segD, LOW);
 digitalWrite(segE, LOW);
 digitalWrite(segF, LOW);
 digitalWrite(segG, LOW);

  delay(300);

 digitalWrite(segA, HIGH);
 digitalWrite(segB, HIGH);
 digitalWrite(segC, HIGH);
 digitalWrite(segD, HIGH);
 digitalWrite(segE, HIGH);
 digitalWrite(segF, HIGH);
 digitalWrite(segG, HIGH);

  delay(300);

  digitalWrite(segA, HIGH);
 digitalWrite(segB, HIGH);
 digitalWrite(segC, HIGH);
 digitalWrite(segD, LOW);
 digitalWrite(segE, LOW);
 digitalWrite(segF, HIGH);
 digitalWrite(segG, HIGH);

  delay(300);
}

//************************** FUNCIONS  *********************************
