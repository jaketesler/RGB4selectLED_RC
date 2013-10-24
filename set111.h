// set111.h //

int set111lightlow = 55;
int set111blastdelay = 950;
int set111flatdelay = 225;

void set111()
{  
  
  /*
  digitalWrite(R, LOW);
  digitalWrite(G, LOW);
  digitalWrite(B, LOW);
  delay(set111flatdelay);
  */
  
  digitalWrite(R, HIGH);
  analogWrite(G, set111lightlow);
  analogWrite(B, set111lightlow);
  delay(set111blastdelay);
  
  analogWrite(R, set111lightlow);
  analogWrite(G, set111lightlow);
  analogWrite(B, set111lightlow);
  delay(set111flatdelay);
  
  analogWrite(R, set111lightlow);
  digitalWrite(G, HIGH);
  analogWrite(B, set111lightlow);
  delay(set111blastdelay);
  
  analogWrite(R, set111lightlow);
  analogWrite(G, set111lightlow);
  analogWrite(B, set111lightlow);
  delay(set111flatdelay);
  
  analogWrite(R, set111lightlow);
  analogWrite(G, set111lightlow);
  digitalWrite(B, HIGH);
  delay(set111blastdelay);
  
  analogWrite(R, set111lightlow);
  analogWrite(G, set111lightlow);
  analogWrite(B, set111lightlow);
  delay(set111flatdelay);
  
  analogWrite(R, set111lightlow);
  digitalWrite(G, HIGH);
  analogWrite(B, set111lightlow);
  delay(set111blastdelay);
  
  analogWrite(R, set111lightlow);
  analogWrite(G, set111lightlow);
  analogWrite(B, set111lightlow);
  delay(set111flatdelay);
  
  analogWrite(R, set111lightlow);
  analogWrite(G, set111lightlow);
  digitalWrite(B, HIGH);
  delay(set111blastdelay);
  
  analogWrite(R, set111lightlow);
  analogWrite(G, set111lightlow);
  analogWrite(B, set111lightlow);
  delay(set111flatdelay);
  
  analogWrite(R, set111lightlow);
  digitalWrite(G, HIGH);
  analogWrite(B, set111lightlow);
  delay(set111blastdelay);
  
  analogWrite(R, set111lightlow);
  analogWrite(G, set111lightlow);
  analogWrite(B, set111lightlow);
  delay(set111flatdelay);
  
  digitalWrite(R, HIGH);
  analogWrite(G, set111lightlow);
  analogWrite(B, set111lightlow);
  delay(set111blastdelay);
  
  analogWrite(R, set111lightlow);
  analogWrite(G, set111lightlow);
  analogWrite(B, set111lightlow);
  delay(set111flatdelay);
  
  digitalWrite(R, HIGH);
  digitalWrite(G, HIGH);
  digitalWrite(B, HIGH);
  delay(set111blastdelay);
  
  analogWrite(R, set111lightlow);
  analogWrite(G, set111lightlow);
  analogWrite(B, set111lightlow);
  delay(set111flatdelay);
  
}
  
