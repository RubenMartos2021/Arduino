/**********************************************************************
**                                                                   **
**                               TÍTOL:                              **
**                      LL10_Rubén_Martos_ARDUINO                    **
**                                                                   **
**  NOM: Rubén Martos Gutiérrez                     Data: 17/01/2022 **
**********************************************************************/
//************************** INCLUDE **********************************


//************************ VARIABLES **********************************
const byte LedR = 4;        // donar nom al pin 5 de l’Arduino
const byte LedG = 10;         // donar nom al pin 6 de l’Arduino
const byte LedB = 12;         // donar nom al pin 7 de l’Arduino                 
const byte pot0 = A0;         // donar nom al pin A0 de l’Arduino
int valPot0;                 // guardar valor del potenciometre
const byte pot1 = A1;         // donar nom al pin A1 de l’Arduino
int valPot1;                 // guardar valor del potenciometre
const byte pot2 = A2;         // donar nom al pin A2 de l’Arduino
int valPot2;                 // guardar valor del potenciometre  

//************************** SETUP ************************************

void setup()  // ho fa un cop quan el programa s'inicia
{
 pinMode(LedR, OUTPUT);   // definir el pin 5 com una sortida
 pinMode(LedG, OUTPUT);   // definir el pin 6 com una sortida
 pinMode(LedB, OUTPUT);   // definir el pin 7 com una sortida
 pinMode(pot0, INPUT);   // definir el pin A0 com una entrada
 pinMode(pot1, INPUT);   // definir el pin A1 com una entrada
 pinMode(pot2, INPUT);   // definir el pin A2 com una entrada
 Serial.begin(9600);
}

//************************** LOOP *************************************
void loop()      //we need this to be here even though its empty
{
  valPot0 = analogRead(pot0);    // llegir valor potenciòmetre
  Serial.println(valPot0);
  valPot1 = analogRead(pot1);    // llegir valor potenciòmetre 
  Serial.println(valPot1);
  valPot2 = analogRead(pot2);    // llegir valor potenciòmetre 
  Serial.println(valPot2);

  valPot0 = map(valPot0, 0, 1023, 0, 255);
  valPot1 = map(valPot1, 0, 1023, 0, 255);
  valPot2 = map(valPot2, 0, 1023, 0, 255);
  delay(500);

  analogWrite(LedR, valPot0);
  analogWrite(LedG, valPot1);
  analogWrite(LedB, valPot2);            
}

//************************** FUNCIONS  *********************************
