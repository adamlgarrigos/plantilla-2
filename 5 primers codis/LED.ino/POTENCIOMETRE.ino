/**********************************************************************************
**                                                                               **
**                               POTENCIOMETRE                                   **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************

//********** Setup ****************************************************************
void setup()
{
  Serial.begin(9600);
}

//********** Loop *****************************************************************
void loop()
{
  Serial.println(analogRead(A0)); 
}

//********** Funcions *************************************************************

