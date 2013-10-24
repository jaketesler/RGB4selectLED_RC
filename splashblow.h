// splashblow.h //

#define R 9
#define G 10
#define B 11
#define L 13


void splasher()
{
  digitalWrite(R, LOW);
  digitalWrite(G, LOW);
  digitalWrite(B, LOW);
  digitalWrite(L, LOW);
  delay(100);
  
  digitalWrite(R, HIGH);
  digitalWrite(G, LOW);
  digitalWrite(B, LOW);
  digitalWrite(L, HIGH);
  delay(100);
  
  digitalWrite(R, LOW);
  digitalWrite(G, LOW);
  digitalWrite(B, LOW);
  delay(200);
  
  digitalWrite(R, LOW);
  digitalWrite(G, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(L, LOW);
  delay(100);
  
  digitalWrite(R, LOW);
  digitalWrite(G, LOW);
  digitalWrite(B, LOW);
  delay(200);
  
  digitalWrite(R, LOW);
  digitalWrite(G, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(L, HIGH);
  delay(100);
  
  digitalWrite(R, LOW);
  digitalWrite(G, LOW);
  digitalWrite(B, LOW);
  delay(200);
  
  digitalWrite(R, HIGH);
  digitalWrite(G, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(L, LOW);
  delay(100);
  
  digitalWrite(R, LOW);
  digitalWrite(G, LOW);
  digitalWrite(B, LOW);
  digitalWrite(L, LOW);
  delay(200);
}

void splasherserial()
{
  digitalWrite(R, LOW);
  digitalWrite(G, LOW);
  digitalWrite(B, LOW);
  digitalWrite(L, LOW);
  delay(100);
  
  digitalWrite(L, HIGH);
  delay(200);
  
  digitalWrite(L, LOW);
  delay(200);
  
  digitalWrite(L, HIGH);
  delay(200);
  
  digitalWrite(L, LOW);
  delay(200);
  
  digitalWrite(L, HIGH);
  delay(200);
  
  digitalWrite(L, LOW);
  delay(200);
  
  digitalWrite(L, HIGH);
  delay(200);
  
  digitalWrite(L, LOW);
  delay(200);
  
  digitalWrite(L, HIGH);
  delay(200);
  
  digitalWrite(L, LOW);
  delay(300);
  
}
