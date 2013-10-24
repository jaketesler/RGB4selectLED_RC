// moose.h //
// sayonce.h //
// mashup.h //

#define R 9
#define G 10
#define B 11
#define L 13

int jello = 0;

void moose()
{

  digitalWrite(R, LOW);
  digitalWrite(G, LOW);
  digitalWrite(B, LOW);
  digitalWrite(L, LOW); //
  delay(150);
  
  digitalWrite(R, HIGH);
  digitalWrite(G, LOW);
  digitalWrite(B, LOW);
  digitalWrite(L, HIGH); //
  delay(333);
  //delay(166.5);
  
  digitalWrite(R, LOW);
  digitalWrite(G, HIGH);
  digitalWrite(B, LOW);
  delay(167); //333 if not for L
  
  digitalWrite(L, LOW); //
  delay(166);

  digitalWrite(R, LOW);
  digitalWrite(G, LOW);
  digitalWrite(B, HIGH);
  delay(333);
  //delay(166.5);
  
  
  digitalWrite(R, HIGH);
  digitalWrite(G, HIGH);
  digitalWrite(B, HIGH);
  
  delay(1);
  digitalWrite(L, HIGH); //
  
  delay(149);

  digitalWrite(R, LOW);
  digitalWrite(G, LOW);
  digitalWrite(B, LOW);
  delay(150);
  //delay(75);
  
  digitalWrite(R, HIGH);
  digitalWrite(G, HIGH);
  digitalWrite(B, HIGH);
  delay(150);
  //delay(75);
  
  digitalWrite(R, LOW);
  digitalWrite(G, LOW);
  digitalWrite(B, LOW);
  delay(51);
  
  digitalWrite(L, LOW); //
  delay(99);
  
  digitalWrite(R, HIGH);
  digitalWrite(G, HIGH);
  digitalWrite(B, HIGH);
  delay(150);
  
  digitalWrite(R, LOW);
  digitalWrite(G, LOW);
  digitalWrite(B, LOW);
  delay(150);
  
  digitalWrite(R, HIGH);
  digitalWrite(G, HIGH);
  digitalWrite(B, HIGH);
  delay(101);
  
  digitalWrite(L, HIGH); //
  delay(49);
  
  digitalWrite(R, LOW);
  digitalWrite(G, LOW);
  digitalWrite(B, LOW);
  delay(201);
  
  
  digitalWrite(L, LOW);
  delay(250);
  
  
  
  digitalWrite(L, HIGH); //
  delay(250);
  
  digitalWrite(L, LOW); //
  delay(250);
  
  digitalWrite(L, HIGH);
  delay(49);
  digitalWrite(L, LOW);
  
  digitalWrite(R, HIGH);
  digitalWrite(G, LOW);
  digitalWrite(B, LOW);
  delay(83.3);
  
  digitalWrite(R, LOW);
  digitalWrite(G, HIGH);
  digitalWrite(B, LOW);
  delay(83.3);
  
  digitalWrite(R, LOW);
  digitalWrite(G, LOW);
  digitalWrite(B, HIGH);
  delay(83.3);
  
  //
  digitalWrite(R, HIGH);
  digitalWrite(G, LOW);
  digitalWrite(B, LOW);
  delay(83.3);
  
  digitalWrite(R, LOW);
  digitalWrite(G, HIGH);
  digitalWrite(B, LOW);
  delay(83.3);
  
  digitalWrite(R, LOW);
  digitalWrite(G, LOW);
  digitalWrite(B, HIGH);
  delay(83.3);
  
  
  digitalWrite(R, HIGH);
  digitalWrite(G, LOW);
  digitalWrite(B, LOW);
  delay(83.3);
  
  digitalWrite(R, LOW);
  digitalWrite(G, HIGH);
  digitalWrite(B, LOW);
  delay(83.3);
  
  digitalWrite(R, LOW);
  digitalWrite(G, LOW);
  digitalWrite(B, HIGH);
  delay(83.3);
  
  delay(500);
  
}

void shortmoose()
{
  digitalWrite(R, LOW);
  digitalWrite(G, LOW);
  digitalWrite(B, LOW);
  digitalWrite(L, LOW); //
  delay(150);
  
  digitalWrite(R, HIGH);
  digitalWrite(G, LOW);
  digitalWrite(B, LOW);
  digitalWrite(L, HIGH); //
  delay(333);
  //delay(166.5);
  
  digitalWrite(R, LOW);
  digitalWrite(G, HIGH);
  digitalWrite(B, LOW);
  delay(167); //333 if not for L
  
  digitalWrite(L, LOW); //
  delay(166);

  digitalWrite(R, LOW);
  digitalWrite(G, LOW);
  digitalWrite(B, HIGH);
  delay(333);
  //delay(166.5);
  
  
  digitalWrite(R, HIGH);
  digitalWrite(G, HIGH);
  digitalWrite(B, HIGH);
  
  delay(1);
  digitalWrite(L, HIGH); //
  
  delay(149);

  digitalWrite(R, LOW);
  digitalWrite(G, LOW);
  digitalWrite(B, LOW);
  delay(150);
  //delay(75);
  
  digitalWrite(R, HIGH);
  digitalWrite(G, HIGH);
  digitalWrite(B, HIGH);
  delay(150);
  //delay(75);
  
  digitalWrite(R, LOW);
  digitalWrite(G, LOW);
  digitalWrite(B, LOW);
  delay(51);
  
  digitalWrite(L, LOW); //
  delay(99);
  
  digitalWrite(R, HIGH);
  digitalWrite(G, HIGH);
  digitalWrite(B, HIGH);
  delay(150);
  
  digitalWrite(R, LOW);
  digitalWrite(G, LOW);
  digitalWrite(B, LOW);
  delay(150);
  
  digitalWrite(R, HIGH);
  digitalWrite(G, HIGH);
  digitalWrite(B, HIGH);
  delay(101);
  
  digitalWrite(L, HIGH); //
  delay(49);
  
  digitalWrite(R, LOW);
  digitalWrite(G, LOW);
  digitalWrite(B, LOW);
  delay(201);
  
  
  digitalWrite(L, LOW);
  delay(250);
  
  
  
  digitalWrite(L, HIGH); //
  delay(250);
  
  digitalWrite(L, LOW); //
  delay(250);
  
  digitalWrite(L, HIGH);
  delay(49);
  digitalWrite(L, LOW);
  
  delay(350);
}

void sayonce()
{
  digitalWrite(L, HIGH);
  delay(750);
  digitalWrite(L, LOW);
  delay(750);
}
