/**********************************************************************
**                                                                   **
**                               TÍTOL:                              **
**                      LL04_Rubén_Martos_ARDUINO                    **
**                                                                   **
**  NOM: Rubén Martos Gutiérrez                     Data: 29/11/2021 **
**********************************************************************/
//************************** INCLUDE **********************************


//************************ VARIABLES **********************************
float qualifEnergetica = 43.2;

//************************** SETUP ************************************

void setup()  // ho fa un cop quan el programa s'inicia
{
  Serial.begin(9600);
  
}

//************************** LOOP *************************************
void loop()      //we need this to be here even though its empty
{
  while (Serial.available() > 0)
  {  // if there's any serial available, read it
    qualifEnergetica = Serial.parseFloat();// look for valid int the incoming serial stream
    if (Serial.read() == '\n')
    { //look for newline. Is the end of your sentence
      Serial.print("Indicador KgCO2/m2 ");
      Serial.println(qualifEnergetica);
      if (qualifEnergetica > 0 && qualifEnergetica < 3.5)
      {
        Serial.println("A ");
      }
      
      else if (qualifEnergetica >= 3.5 && qualifEnergetica < 6.5)
      {
        Serial.println("B ");
      }
    
       else if (qualifEnergetica >= 6.5 && qualifEnergetica < 11.1)
      {
        Serial.println("C ");
      }
    
      else if (qualifEnergetica >= 11.1 && qualifEnergetica < 17.7)
      {
        Serial.println("D ");
      }
    
       else if (qualifEnergetica >= 17.7 && qualifEnergetica < 38.2)
      {
        Serial.println("E ");
      }
    
      else if (qualifEnergetica >= 38.2 && qualifEnergetica < 43.2)
      {
        Serial.println("F ");
      }
    
      else
      {
        Serial.println("G ");
      }
      
    }
  }
}

//************************** FUNCIONS  *********************************
