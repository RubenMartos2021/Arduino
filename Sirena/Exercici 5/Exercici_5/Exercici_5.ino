/**********************************************************************
**                                                                   **
**                               TÍTOL:                              **
**                      LL09_Rubén_Martos_ARDUINO                    **
**                                                                   **
**  NOM: Rubén Martos Gutiérrez                     Data: 12/01/2022 **
**********************************************************************/
//************************** INCLUDE **********************************


//************************ VARIABLES **********************************
const byte sirena = 9;        // donar nom al pin 9 de l’Arduino
const byte pot0 = A0;         // donar nom al pin A0 de l’Arduino
int valPot0;                 // guardar valor del potenciometre  
const byte pot1 = A1;         // donar nom al pin A1 de l’Arduino
int valPot1;                 // guardar valor del potenciometre  

//************************** SETUP ************************************

void setup()  // ho fa un cop quan el programa s'inicia
{
 pinMode(sirena, OUTPUT);   // definir el pin 9 com una sortida
 pinMode(pot0, INPUT);   // definir el pin 9 com una sortida
 pinMode(pot1, INPUT);   // definir el pin 9 com una sortida

}

//************************** LOOP *************************************
void loop()      //we need this to be here even though its empty
{
  valPot0 = analogRead(pot0);    // llegir valor potenciòmetre
  valPot1 = analogRead(pot1);    // llegir valor potenciòmetre 

  tone(sirena, 1000, valPot0);    // xiulet de durada valPot0
  delay(valPot0 + valPot1);              // esperar valPot0 del xiulet + valPot0 silenci             
}

//************************** FUNCIONS  *********************************
