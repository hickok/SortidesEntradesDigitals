
void setup()
{
  pinMode(5, OUTPUT);     // definir el pin 5 com una sortida
  pinMode(6, OUTPUT);     // definir el pin 6 com una sortida
  pinMode(7, OUTPUT);     // definir el pin 7 com una sortida
  pinMode(led3, OUTPUT);     // definir el pin 8 com una sortida
  pinMode(led4, OUTPUT);     // definir el pin 9 com una sortida
  pinMode(led5, OUTPUT);     // definir el pin 10 com una sortida
  pinMode(led6, OUTPUT);     // definir el pin 11 com una sortida
  pinMode(led7, OUTPUT);     // definir el pin 12 com una sortida
}

//********** Loop *****************************************************************
void loop()
{
    
  digitalWrite(led0, LOW);    
  digitalWrite(led1, LOW);    
  digitalWrite(led2, LOW);   
  digitalWrite(led3, HIGH);     
  digitalWrite(led4, HIGH);  
  digitalWrite(led5, LOW);     
  digitalWrite(led6, LOW);    
  digitalWrite(led7, LOW);
  
  delay(100);                  // es queden leds pausa ms en aquest estat
  
  digitalWrite(led0, LOW);    
  digitalWrite(led1, LOW);    
  digitalWrite(led2, HIGH);   
  digitalWrite(led3, LOW);     
  digitalWrite(led4, LOW);  
  digitalWrite(led5, HIGH);     
  digitalWrite(led6, LOW);    
  digitalWrite(led7, LOW);
  
  delay(100);                  // es queden leds pausa ms en aquest estat
  
  digitalWrite(led0, LOW);    
  digitalWrite(led1, HIGH);    
  digitalWrite(led2, LOW);   
  digitalWrite(led3, LOW);     
  digitalWrite(led4, LOW);  
  digitalWrite(led5, LOW);     
  digitalWrite(led6, HIGH);    
  digitalWrite(led7, LOW);
  
  delay(100);                  // es queden leds pausa ms en aquest estat
  
  digitalWrite(led0, HIGH);    
  digitalWrite(led1, LOW);    
  digitalWrite(led2, LOW);   
  digitalWrite(led3, LOW);     
  digitalWrite(led4, LOW);  
  digitalWrite(led5, LOW);     
  digitalWrite(led6, LOW);    
  digitalWrite(led7, HIGH);
  
  delay(100);                  // es queden leds pausa ms en aquest estat
  
  digitalWrite(led0, LOW);    
  digitalWrite(led1, HIGH);    
  digitalWrite(led2, LOW);   
  digitalWrite(led3, LOW);     
  digitalWrite(led4, LOW);  
  digitalWrite(led5, LOW);     
  digitalWrite(led6, HIGH);    
  digitalWrite(led7, LOW);
  
  delay(100);                  // es queden leds pausa ms en aquest estat
  
  digitalWrite(led0, LOW);    
  digitalWrite(led1, LOW);    
  digitalWrite(led2, HIGH);   
  digitalWrite(led3, LOW);     
  digitalWrite(led4, LOW);  
  digitalWrite(led5, HIGH);     
  digitalWrite(led6, LOW);    
  digitalWrite(led7, LOW);
  
  delay(100);                  // es queden leds pausa ms en aquest estat
  
  
}
