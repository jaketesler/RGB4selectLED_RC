// futuremoose.h //

#define BUZZ 5
#define R 9
#define G 10
#define B 11
#define L 13



void futuremoose2()
{
  
  digitalWrite(R, LOW);
  digitalWrite(G, HIGH);
  digitalWrite(B, LOW);
  tone(BUZZ, 82.4, 267.5);
  digitalWrite(L, LOW); //
  delay(150);
  
  digitalWrite(R, HIGH);
  digitalWrite(G, LOW);
  digitalWrite(B, LOW);
  digitalWrite(L, HIGH); //
  delay(332.5);
  //delay(166.5);
  
  tone(BUZZ, 82.4, 267.5);
  delay(.5);
  
  digitalWrite(R, LOW);
  digitalWrite(G, HIGH);
  digitalWrite(B, LOW);
  delay(167); //333 if not for L
  
  digitalWrite(L, LOW); //
  delay(166);

  digitalWrite(R, LOW);
  digitalWrite(G, LOW);
  digitalWrite(B, HIGH);
  delay(309);
  //delay(166.5);
  
  tone(BUZZ, 110, 165);
  delay(24);
  
  digitalWrite(R, HIGH);
  digitalWrite(G, HIGH);
  digitalWrite(B, HIGH);
  
  delay(1);
  digitalWrite(L, HIGH); //
  
  delay(149);

  digitalWrite(R, LOW);
  digitalWrite(G, LOW);
  digitalWrite(B, LOW);
  delay(108.5);

  tone(BUZZ, 110, 180);  
  delay(41.5);
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
  delay(128.5);

  
  tone(BUZZ, 73.4, 275);
  delay(21.5);
  
  
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
  delay(168.5);
 
  
  tone(BUZZ, 73.4, 275);
  delay(32.5);
  
  
  digitalWrite(L, LOW);
  delay(250);
  
  digitalWrite(L, HIGH); //
  delay(250);
  
  digitalWrite(L, LOW); //
  delay(97.5);
  
  ////
  tone(BUZZ, 98, 200);
  delay(152.5);
  
  digitalWrite(L, HIGH);
  delay(49);
  digitalWrite(L, LOW);
  
  delay(38.5);
  
  tone(BUZZ, 98, 235);
  delay(250);
  
  tone(BUZZ, 92.5, 235);
  delay(252.5);
  //tone(BUZZ, 88, 250);
  
  
  tone(BUZZ, 82.4, 540);
  
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
  
  analogWrite(R, 0);
  analogWrite(G, 0);
  analogWrite(B, 0);
  delay(400);

  analogWrite(R, 255);
  analogWrite(G, 255);
  analogWrite(B, 255);
  delay(400);

  analogWrite(R, 0);
  analogWrite(G, 0);
  analogWrite(B, 0);
  //delay(625);
  delay(1625);
  
  //delay(810);
  
}

void futuremoosequiet()
{
  
  digitalWrite(R, LOW);
  digitalWrite(G, LOW);
  digitalWrite(B, LOW);
  //tone(BUZZ, 82.4, 267.5);
  digitalWrite(L, LOW); //
  delay(150);
  
  digitalWrite(R, HIGH);
  digitalWrite(G, LOW);
  digitalWrite(B, LOW);
  digitalWrite(L, HIGH); //
  delay(332.5);
  //delay(166.5);
  
  //tone(BUZZ, 82.4, 267.5);
  delay(.5);
  
  digitalWrite(R, LOW);
  digitalWrite(G, HIGH);
  digitalWrite(B, LOW);
  delay(167); //333 if not for L
  
  digitalWrite(L, LOW); //
  delay(166);

  digitalWrite(R, LOW);
  digitalWrite(G, LOW);
  digitalWrite(B, HIGH);
  delay(309);
  //delay(166.5);
  
  //tone(BUZZ, 110, 165);
  delay(24);
  
  digitalWrite(R, HIGH);
  digitalWrite(G, HIGH);
  digitalWrite(B, HIGH);
  
  delay(1);
  digitalWrite(L, HIGH); //
  
  delay(149);

  digitalWrite(R, LOW);
  digitalWrite(G, LOW);
  digitalWrite(B, LOW);
  delay(108.5);

  //tone(BUZZ, 110, 180);  
  delay(41.5);
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
  delay(128.5);

  
  //tone(BUZZ, 73.4, 275);
  delay(21.5);
  
  
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
  delay(168.5);
 
  
  //tone(BUZZ, 73.4, 275);
  delay(32.5);
  
  
  digitalWrite(L, LOW);
  delay(250);
  
  digitalWrite(L, HIGH); //
  delay(250);
  
  digitalWrite(L, LOW); //
  delay(97.5);
  
  ////
  //tone(BUZZ, 98, 200);
  delay(152.5);
  
  digitalWrite(L, HIGH);
  delay(49);
  digitalWrite(L, LOW);
  
  delay(38.5);
  
  //tone(BUZZ, 98, 235);
                      //delay(250);
  
  //tone(BUZZ, 92.5, 235);
                      //delay(252.5);
  ////tone(BUZZ, 88, 250);
  
  
  //tone(BUZZ, 82.4, 540);
  
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
  
  analogWrite(R, 0);
  analogWrite(G, 0);
  analogWrite(B, 0);
  delay(400);

  analogWrite(R, 255);
  analogWrite(G, 255);
  analogWrite(B, 255);
  delay(400);

  analogWrite(R, 0);
  analogWrite(G, 0);
  analogWrite(B, 0);
  //delay(625);
  delay(1625);
  
  //delay(810);
  
}


void futurama()
{
        digitalWrite(R, LOW);
        tone(BUZZ, 82.4, 267.5);
        digitalWrite(G, HIGH);
        digitalWrite(B, LOW);
        delay(482.5);
        tone(BUZZ, 82.4, 267.5);
        digitalWrite(G, LOW);
        digitalWrite(B, HIGH);
        delay(642.5);
     
      //tone(BUZZ, 82.4, 227.5);
      //delay(442.5);
      //tone(BUZZ, 82.4, 227.5);
      //delay(582.5);
 
      tone(BUZZ, 110, 165);
        digitalWrite(G, HIGH);
        digitalWrite(B, LOW);
      delay(282.5);
      tone(BUZZ, 110, 180);
        digitalWrite(G, LOW);
        digitalWrite(B, HIGH);
      delay(470);
    
      tone(BUZZ, 73.4, 275);
        digitalWrite(G, HIGH);
        digitalWrite(B, LOW);
      //delay(425);
      delay(490);
      tone(BUZZ, 73.4, 275);
        digitalWrite(G, LOW);
        digitalWrite(B, HIGH);
      //delay(525);
      delay(630);
   
      tone(BUZZ, 98, 200);
        digitalWrite(G, HIGH);
        digitalWrite(B, LOW);
      delay(240);
      tone(BUZZ, 98, 235);
        digitalWrite(G, LOW);
        digitalWrite(B, HIGH);
      delay(250);
      tone(BUZZ, 92.5, 235);
        digitalWrite(G, LOW);
        digitalWrite(B, LOW);
      delay(252.5);
      //tone(BUZZ, 88, 250);
      tone(BUZZ, 82.4, 540);
        digitalWrite(G, HIGH);
        digitalWrite(B, HIGH);
      delay(810);
      
      delay(270);
}
