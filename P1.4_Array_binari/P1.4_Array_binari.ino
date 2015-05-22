/*************************************************************************
**                                                                      **
**                      Descripción programa                            **
**                                                                      **
*************************************************************************/

//******  Includes  ******************************************************


//******  Variables  *****************************************************

int t=1000;

//******  Setup  *********************************************************


void setup()
{
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
 
}

  void loop()
{
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  
 
  delay(t);
  
  digitalWrite(5, HIGH);  //1
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  
 
  delay(t);
  
  digitalWrite(5, LOW);  //2
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  
  
  delay(t);
  
  digitalWrite(5, HIGH);  //3
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  
  
  delay(t);
  
  digitalWrite(5, LOW);  //4
  digitalWrite(6, LOW);
  digitalWrite(7, HIGH);
  digitalWrite(8, LOW);
  
  
  delay(t);
  
  digitalWrite(5, HIGH);  //5
  digitalWrite(6, LOW);
  digitalWrite(7, HIGH);
  digitalWrite(8, LOW);
  
 
  delay(t);
  
  digitalWrite(5, LOW);  //6
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, LOW);
  
  
  delay(t);
  
  digitalWrite(5, HIGH);  //7
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, LOW);
   
   
  delay(t);

  digitalWrite(5, LOW);  //8
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, HIGH);
   
   
  delay(t);
  
  digitalWrite(5, HIGH);  //9
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, HIGH);
   
   
  delay(t);
  
  digitalWrite(5, LOW);  //10
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW);
  digitalWrite(8, HIGH);
   
   
  delay(t);
  
  digitalWrite(5, HIGH);  //11
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW);
  digitalWrite(8, HIGH);
   
   
  delay(t);
  
  digitalWrite(5, LOW);  //12
  digitalWrite(6, LOW);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
   
   
  delay(t);
  
  digitalWrite(5, HIGH);  //13
  digitalWrite(6, LOW);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
   
   
  delay(t);
  
  digitalWrite(5, LOW);  //14
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
   
   
  delay(t);
  
  digitalWrite(5, HIGH);  //15
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
   
  delay(t);
  
  digitalWrite(5, LOW);  
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  
  delay(3000);
  

}
