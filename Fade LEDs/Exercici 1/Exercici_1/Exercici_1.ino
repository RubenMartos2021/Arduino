/**********************************************************************
**                                                                   **
**                               TÍTOL:                              **
**                      LL08_Rubén_Martos_ARDUINO                    **
**                                                                   **
**  NOM: Rubén Martos Gutiérrez                     Data: 10/01/2022 **
**********************************************************************/
//************************** INCLUDE **********************************


//************************ VARIABLES **********************************
const byte led0 = 3;          // donar nom al pin 3 de l’Arduino
const byte led1 = 5;          // donar nom al pin 5 de l’Arduino
const byte led2 = 6;          // donar nom al pin 6 de l’Arduino
const byte led3 = 9;          // donar nom al pin 9 de l’Arduino
const byte led4 = 10;         // donar nom al pin 10 de l’Arduino
const byte led5 = 11;         // donar nom al pin 11 de l’Arduino
unsigned long velocitat = 500;         // velocitat de l'acció en ms

//************************** SETUP ************************************
void setup()
{
  pinMode(led0, OUTPUT);     // definir el pin 3 com una sortida
  pinMode(led1, OUTPUT);     // definir el pin 5 com una sortida
  pinMode(led2, OUTPUT);     // definir el pin 6 com una sortida
  pinMode(led3, OUTPUT);     // definir el pin 9 com una sortida
  pinMode(led4, OUTPUT);     // definir el pin 10 com una sortida
  pinMode(led5, OUTPUT);     // definir el pin 11 com una sortida
}

//************************** LOOP *************************************
void loop()
{
  analogWrite(led0, 0);     // posar PWM del pin 3 a 0
  analogWrite(led1, 0);     // posar PWM del pin 5 a 0
  analogWrite(led2, 0);     // posar PWM del pin 6 a 0
  analogWrite(led3, 0);     // posar PWM del pin 9 a 0
  analogWrite(led4, 0);     // posar PWM del pin 10 a 0
  analogWrite(led5, 0);     // posar PWM del pin 11 a 0
  
  delay(velocitat);          // es queden leds velocitat ms en aquest estat

  analogWrite(led0, 15);     // posar PWM del pin 3 a 60
  analogWrite(led1, 15);     // posar PWM del pin 5 a 60
  analogWrite(led2, 15);     // posar PWM del pin 6 a 60
  analogWrite(led3, 15);     // posar PWM del pin 9 a 60
  analogWrite(led4, 15);     // posar PWM del pin 10 a 60
  analogWrite(led5, 15);     // posar PWM del pin 11 a 60
  
  delay(velocitat);          // es queden leds velocitat ms en aquest estat
  
  analogWrite(led0, 80);    // posar PWM del pin 3 a 125
  analogWrite(led1, 80);    // posar PWM del pin 5 a 125
  analogWrite(led2, 80);    // posar PWM del pin 6 a 125
  analogWrite(led3, 80);    // posar PWM del pin 9 a 125
  analogWrite(led4, 80);    // posar PWM del pin 10 a 125
  analogWrite(led5, 80);    // posar PWM del pin 11 a 125
  
  delay(velocitat);           // es queden leds velocitat ms en aquest estat
  
  analogWrite(led0, 255);    // posar PWM del pin 3 a 255
  analogWrite(led1, 255);    // posar PWM del pin 5 a 255
  analogWrite(led2, 255);    // posar PWM del pin 6 a 255
  analogWrite(led3, 255);    // posar PWM del pin 9 a 255
  analogWrite(led4, 255);    // posar PWM del pin 10 a 255
  analogWrite(led5, 255);    // posar PWM del pin 11 a 255
   
  delay(velocitat);           // es queden leds velocitat ms en aquest estat
  
  analogWrite(led0, 80);    // posar PWM del pin 3 a 125
  analogWrite(led1, 80);    // posar PWM del pin 5 a 125
  analogWrite(led2, 80);    // posar PWM del pin 6 a 125
  analogWrite(led3, 80);    // posar PWM del pin 9 a 125
  analogWrite(led4, 80);    // posar PWM del pin 10 a 125
  analogWrite(led5, 80);    // posar PWM del pin 11 a 125
  
  delay(velocitat);           // es queden leds velocitat ms en aquest estat

  analogWrite(led0, 15);     // posar PWM del pin 3 a 60
  analogWrite(led1, 15);     // posar PWM del pin 5 a 60
  analogWrite(led2, 15);     // posar PWM del pin 6 a 60
  analogWrite(led3, 15);     // posar PWM del pin 9 a 60
  analogWrite(led4, 15);     // posar PWM del pin 10 a 60
  analogWrite(led5, 15);     // posar PWM del pin 11 a 60
  
  delay(velocitat);          // es queden leds velocitat ms en aquest estat
}
//************************** FUNCIONS  *********************************