/**********************************************************************************
**                                                                               **
**                          Projecte 2. Cruïlla de semàfors                      **
**                                                                               **
**                                 Programa2                                     **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************

const int verd1 = 7;          // donar nom al pin 7 de l’Arduino
const int groc1 = 8;          // donar nom al pin 8 de l’Arduino
const int vermell1 = 9;          // donar nom al pin 9 de l’Arduino
const int verd2 = 10;         // donar nom al pin 10 de l’Arduino
const int groc2 = 11;         // donar nom al pin 11 de l’Arduino
const int vermell2 = 12;         // donar nom al pin 12 de l’Arduino

//********** Setup ****************************************************************

void setup()
{
  pinMode(verd1, OUTPUT);     // definir el pin 7 com una sortida
  pinMode(groc1, OUTPUT);     // definir el pin 8 com una sortida
  pinMode(vermell1, OUTPUT);     // definir el pin 9 com una sortida
  pinMode(verd2, OUTPUT);     // definir el pin 10 com una sortida
  pinMode(groc2, OUTPUT);     // definir el pin 11 com una sortida
  pinMode(vermell2, OUTPUT);     // definir el pin 12 com una sortida
}

//********** Loop *****************************************************************
void loop()
{
  digitalWrite(verd1, HIGH);    // posar a 5V el pin 5
  digitalWrite(groc1, HIGH);    // posar a 5V el pin 6
  digitalWrite(vermell1, HIGH);    // posar a 5V el pin 7
  digitalWrite(verd2, HIGH);    // posar a 5V el pin 8
  digitalWrite(groc2, HIGH);    // posar a 5V el pin 9
  digitalWrite(vermell2, HIGH);    // posar a 5V el pin 10
 
  delay(500);                  // es queden leds 500ms encesos
  
  digitalWrite(verd1, LOW);     // posar a 0V el pin 5
  digitalWrite(groc1, LOW);     // posar a 0V el pin 6
  digitalWrite(vermell1, LOW);     // posar a 0V el pin 7
  digitalWrite(verd2, LOW);     // posar a 0V el pin 8
  digitalWrite(groc2, LOW);     // posar a 0V el pin 9
  digitalWrite(vermell2, LOW);     // posar a 0V el pin 10
 
  delay(500);                  // es queden leds 500ms apagats
}

//********** Funcions *************************************************************
