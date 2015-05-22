/*************************************************************************
**                                                                      **
**                      Descripción programa                            **
**                                                                      **
*************************************************************************/

//******  Includes  ******************************************************


//******  Variables  *****************************************************

  int pausa = 1000;

//******  Setup  *********************************************************


  void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

  void loop()
{
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
  digitalWrite(10, HIGH);   //s'encén
  delay(pausa);
  digitalWrite(9, HIGH);
  digitalWrite(7, HIGH);
  delay(pausa);
  digitalWrite(4, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(8, HIGH);
  delay(pausa);
  digitalWrite(3, HIGH);
  digitalWrite(5, HIGH);
  delay(pausa);
  digitalWrite(2, HIGH);
  delay(pausa);  
  
  digitalWrite(2, LOW);   //s'apaga
  delay(pausa);  
  digitalWrite(3, LOW);
  digitalWrite(5, LOW);
  delay(pausa);
  digitalWrite(4, LOW);
  digitalWrite(6, LOW);
  digitalWrite(8, LOW);
  delay(pausa);
  digitalWrite(9, LOW);
  digitalWrite(7, LOW);
  delay(pausa);
  digitalWrite(10, LOW);
  
  delay(2000);
  
  digitalWrite(10, HIGH);   //s'encén i es va apagant
  delay(pausa);
  digitalWrite(10, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(7, HIGH);
  delay(pausa);
  digitalWrite(9, LOW);
  digitalWrite(7, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(8, HIGH);
  delay(pausa);
  digitalWrite(4, LOW);
  digitalWrite(6, LOW);
  digitalWrite(8, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(5, HIGH);
  delay(pausa);
  digitalWrite(3, LOW);
  digitalWrite(5, LOW);
  digitalWrite(2, HIGH);
  delay(pausa);  
  
  digitalWrite(2, LOW);   
  digitalWrite(3, HIGH);
  digitalWrite(5, HIGH);
  delay(pausa);  
  digitalWrite(3, LOW);
  digitalWrite(5, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(8, HIGH);
  
  delay(pausa);
  digitalWrite(4, LOW);
  digitalWrite(6, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(7, HIGH);
  delay(pausa);
  digitalWrite(9, LOW);
  digitalWrite(7, LOW);
  digitalWrite(10, HIGH);
  delay(pausa);
  digitalWrite(10, LOW);
  
  delay(2000);
  
  int pausa = 100;
  
  digitalWrite(10, HIGH);   // a s'encén i es va apagant ràpid de la C1 al C9
  delay(pausa);
  digitalWrite(10, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(7, HIGH);
  delay(pausa);
  digitalWrite(9, LOW);
  digitalWrite(7, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(8, HIGH);
  delay(pausa);
  digitalWrite(4, LOW);
  digitalWrite(6, LOW);
  digitalWrite(8, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(5, HIGH);
  delay(pausa);
  digitalWrite(3, LOW);
  digitalWrite(5, LOW);
  digitalWrite(2, HIGH);
  delay(pausa);  
  
  digitalWrite(2, LOW);   
  digitalWrite(3, HIGH);
  digitalWrite(5, HIGH);
  delay(pausa);  
  digitalWrite(3, LOW);
  digitalWrite(5, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(8, HIGH);  
  delay(pausa);
  digitalWrite(4, LOW);
  digitalWrite(6, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(7, HIGH);
  delay(pausa);
  digitalWrite(9, LOW);
  digitalWrite(7, LOW);
  digitalWrite(10, HIGH);
  delay(pausa);
  digitalWrite(10, LOW);
  
  delay(200);
  
  digitalWrite(10, HIGH);   ///repeteix de la C1 a C9
  delay(pausa);
  digitalWrite(10, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(7, HIGH);
  delay(pausa);
  digitalWrite(9, LOW);
  digitalWrite(7, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(8, HIGH);
  delay(pausa);
  digitalWrite(4, LOW);
  digitalWrite(6, LOW);
  digitalWrite(8, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(5, HIGH);
  delay(pausa);
  digitalWrite(3, LOW);
  digitalWrite(5, LOW);
  digitalWrite(2, HIGH);
  delay(pausa);  
  
  digitalWrite(2, LOW);   
  digitalWrite(3, HIGH);
  digitalWrite(5, HIGH);
  delay(pausa);  
  digitalWrite(3, LOW);
  digitalWrite(5, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(8, HIGH);  
  delay(pausa);
  digitalWrite(4, LOW);
  digitalWrite(6, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(7, HIGH);
  delay(pausa);
  digitalWrite(9, LOW);
  digitalWrite(7, LOW);
  digitalWrite(10, HIGH);
  delay(pausa);
  digitalWrite(10, LOW);
  
  delay(1000);
  
  digitalWrite(8, HIGH);   // b s'encén i es va apagant ràpid de la C3 A C7
  delay(pausa);
  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(5, HIGH);
  delay(pausa);
  digitalWrite(9, LOW);
  digitalWrite(5, LOW);
  digitalWrite(2, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(10, HIGH);
  delay(pausa);
  digitalWrite(2, LOW);
  digitalWrite(6, LOW);
  digitalWrite(10, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(7, HIGH);
  delay(pausa);
  digitalWrite(3, LOW);
  digitalWrite(7, LOW);
  digitalWrite(4, HIGH);
  delay(pausa);  
  
  digitalWrite(4, LOW);   
  digitalWrite(3, HIGH);
  digitalWrite(7, HIGH);
  delay(pausa);  
  digitalWrite(3, LOW);
  digitalWrite(7, LOW);
  digitalWrite(2, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(10, HIGH);  
  delay(pausa);
  digitalWrite(2, LOW);
  digitalWrite(6, LOW);
  digitalWrite(10, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(5, HIGH);
  delay(pausa);
  digitalWrite(9, LOW);
  digitalWrite(5, LOW);
  digitalWrite(8, HIGH);
  delay(pausa);
  digitalWrite(8, LOW);
  
  delay(200);
  
   digitalWrite(8, HIGH);   //repeteix de la C3 a la C7
  delay(pausa);
  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(5, HIGH);
  delay(pausa);
  digitalWrite(9, LOW);
  digitalWrite(5, LOW);
  digitalWrite(2, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(10, HIGH);
  delay(pausa);
  digitalWrite(2, LOW);
  digitalWrite(6, LOW);
  digitalWrite(10, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(7, HIGH);
  delay(pausa);
  digitalWrite(3, LOW);
  digitalWrite(7, LOW);
  digitalWrite(4, HIGH);
  delay(pausa);  
  
  digitalWrite(4, LOW);   
  digitalWrite(3, HIGH);
  digitalWrite(7, HIGH);
  delay(pausa);  
  digitalWrite(3, LOW);
  digitalWrite(7, LOW);
  digitalWrite(2, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(10, HIGH);  
  delay(pausa);
  digitalWrite(2, LOW);
  digitalWrite(6, LOW);
  digitalWrite(10, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(5, HIGH);
  delay(pausa);
  digitalWrite(9, LOW);
  digitalWrite(5, LOW);
  digitalWrite(8, HIGH);
  delay(pausa);
  digitalWrite(8, LOW);
  
  delay(1000);
  
  digitalWrite(2, HIGH);   // c s'encén i es va apagant ràpid de la C9 al C1
  delay(pausa); 
  digitalWrite(2, LOW);     
  digitalWrite(3, HIGH);
  digitalWrite(5, HIGH);
  delay(pausa);  
  digitalWrite(3, LOW);
  digitalWrite(5, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(8, HIGH);  
  delay(pausa);
  digitalWrite(4, LOW);
  digitalWrite(6, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(7, HIGH);
  delay(pausa);
  digitalWrite(9, LOW);
  digitalWrite(7, LOW);
  digitalWrite(10, HIGH);
  delay(pausa);
  digitalWrite(10, LOW);
  delay(pausa);
  
  
  digitalWrite(10, HIGH);   
  delay(pausa);
  digitalWrite(10, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(7, HIGH);
  delay(pausa);
  digitalWrite(9, LOW);
  digitalWrite(7, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(8, HIGH);
  delay(pausa);
  digitalWrite(4, LOW);
  digitalWrite(6, LOW);
  digitalWrite(8, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(5, HIGH);
  delay(pausa);
  digitalWrite(3, LOW);
  digitalWrite(5, LOW);
  digitalWrite(2, HIGH);
  delay(pausa);
  digitalWrite(2, LOW);
  
  delay(200);
  
  digitalWrite(2, HIGH);   //repeteix de la C9 a la C1
  delay(pausa);
  digitalWrite(2, LOW);      
  digitalWrite(3, HIGH);
  digitalWrite(5, HIGH);
  delay(pausa);  
  digitalWrite(3, LOW);
  digitalWrite(5, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(8, HIGH);  
  delay(pausa);
  digitalWrite(4, LOW);
  digitalWrite(6, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(7, HIGH);
  delay(pausa);
  digitalWrite(9, LOW);
  digitalWrite(7, LOW);
  digitalWrite(10, HIGH);
  delay(pausa);
  digitalWrite(10, LOW);
  delay(pausa);
  
  
  digitalWrite(10, HIGH);   
  delay(pausa);
  digitalWrite(10, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(7, HIGH);
  delay(pausa);
  digitalWrite(9, LOW);
  digitalWrite(7, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(8, HIGH);
  delay(pausa);
  digitalWrite(4, LOW);
  digitalWrite(6, LOW);
  digitalWrite(8, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(5, HIGH);
  delay(pausa);
  digitalWrite(3, LOW);
  digitalWrite(5, LOW);
  digitalWrite(2, HIGH);
  delay(pausa);
  digitalWrite(2, LOW);
  
  
  delay(1000);
  
  digitalWrite(4, HIGH);   // d s'encén i es va apagant ràpid de la C7 A C3
  delay(pausa);
  digitalWrite(4, LOW);   
  digitalWrite(3, HIGH);
  digitalWrite(7, HIGH);
  delay(pausa);  
  digitalWrite(3, LOW);
  digitalWrite(7, LOW);
  digitalWrite(2, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(10, HIGH);  
  delay(pausa);
  digitalWrite(2, LOW);
  digitalWrite(6, LOW);
  digitalWrite(10, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(5, HIGH);
  delay(pausa);
  digitalWrite(9, LOW);
  digitalWrite(5, LOW);
  digitalWrite(8, HIGH);
  delay(pausa);
  digitalWrite(8, LOW);
  delay(pausa);
  
  digitalWrite(8, HIGH);   
  delay(pausa);
  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(5, HIGH);
  delay(pausa);
  digitalWrite(9, LOW);
  digitalWrite(5, LOW);
  digitalWrite(2, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(10, HIGH);
  delay(pausa);
  digitalWrite(2, LOW);
  digitalWrite(6, LOW);
  digitalWrite(10, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(7, HIGH);
  delay(pausa);
  digitalWrite(3, LOW);
  digitalWrite(7, LOW);
  digitalWrite(4, HIGH);
  delay(pausa);
  digitalWrite(4, LOW);
  
  delay(200);
  
  digitalWrite(4, HIGH);   //repeteix C7 A C3
  delay(pausa);
  digitalWrite(4, LOW);   
  digitalWrite(3, HIGH);
  digitalWrite(7, HIGH);
  delay(pausa);  
  digitalWrite(3, LOW);
  digitalWrite(7, LOW);
  digitalWrite(2, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(10, HIGH);  
  delay(pausa);
  digitalWrite(2, LOW);
  digitalWrite(6, LOW);
  digitalWrite(10, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(5, HIGH);
  delay(pausa);
  digitalWrite(9, LOW);
  digitalWrite(5, LOW);
  digitalWrite(8, HIGH);
  delay(pausa);
  digitalWrite(8, LOW);
  delay(pausa);
  
  digitalWrite(8, HIGH);   
  delay(pausa);
  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(5, HIGH);
  delay(pausa);
  digitalWrite(9, LOW);
  digitalWrite(5, LOW);
  digitalWrite(2, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(10, HIGH);
  delay(pausa);
  digitalWrite(2, LOW);
  digitalWrite(6, LOW);
  digitalWrite(10, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(7, HIGH);
  delay(pausa);
  digitalWrite(3, LOW);
  digitalWrite(7, LOW);
  digitalWrite(4, HIGH);
  delay(pausa);
  digitalWrite(4, LOW);
  
  
  delay(4000);
  
  
 
}
