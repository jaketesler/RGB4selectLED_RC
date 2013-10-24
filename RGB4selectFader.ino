// RGB4selectFader //
// Written in C //

// ***** Coded by Jake Tesler ***** //

/* ************************************************************************
 *   ********* READ THESE INSTRUCTIONS! *********
 *  Wire Switch 1 to Digital pin 3, S2 to D4, S3 to D5, and S4 to D6. 
 *  Wire the potentiometer to Analog 1, and the corresponding button to D8. 
 *  Blue wire goes to D11, Green wire goes to D10, and Red wire goes to D9. 
 *  Sensor-Shields: Buzzer goes to A5, Button goes to A3
 *
 *  Connect the switches to ground. This will make their default value 0.
 *  Breaking their connection to ground (via any means) will
 *  set their value to 1. 
 *
 *  For our purposes, when the switch is pressed (ON), 
 *  its value for digitalRead is 0.
 *  When a switch isn't pressed (OFF), 
 *  its value for digitalRead is 1. 
 *  So, when programming, if the trip for something
 *  is for a switch to be pressed, the value for it being pressed
 *  is 0. Otherwise, for "OFF" put 1. 
 *
 *  At the moment, DP1 is in use as an interrupt assist. 
 *  Serial capability will conflict with this (RX0/TX1).
 *  For reference, grounding D1(*TX*) puts the Arduino to sleep, and grounding D2 wakes it up. 
 *  If serial is enabled, we most likely could power on the Arduino (wake it up by grounding D2),
 *  but we wouldn't be able to re-interrupt it because that would require D1. 
 *  ****OR**** powering on would interrupt the Arduino because of signals on D1, 
 *  and we would be locked in a loop of interrupts, unable to power on. 
 *  A variable has been created (serialenable). Use this for de/activation of Serial from now on. 
 *
 *  NOTE: Ignition by AButton was replaced with interrupts
 *
 * ************************************************************************
 */

//#include "wiring.h"
//#include "WProgram.h"
#include "Arduino.h"
//#include <math.h>
//#include <EEPROM.h>
#include <avr/sleep.h>
#include <avr/power.h>
//////////#include <Tone.h>
#include "splashblow.h"
#include "bootseq.h"
//#include "scarymonster2.h" //now in futuremoose.h
#include "buttonignition.h" //defunct at this point
#include "set000.h"
#include "set0110.h"
#include "set0111.h"
#include "set101.h"
#include "set1101.h"
#include "set111.h"
#include "moose.h"
#include "futuremoose.h"
#include "onetoomany.h"
#include "supermario.h"
#include "iamscary.h"

#define BD 1
#define S1 3
#define S2 4
#define S3 5
#define S4 6
#define PBUTTON 8
#define R 9
#define G 10
#define B 11
#define L 13
#define POTENT 1
#define BUTTON 3 
#define BUZZ A5
//#define BUZZMARIO A5



/*
Tone tone1;
#define OCTAVE_OFFSET 0
int notes[] = { 0,
NOTE_C4, NOTE_CS4, NOTE_D4, NOTE_DS4, NOTE_E4, NOTE_F4, NOTE_FS4, NOTE_G4, NOTE_GS4, NOTE_A4, NOTE_AS4, NOTE_B4,
NOTE_C5, NOTE_CS5, NOTE_D5, NOTE_DS5, NOTE_E5, NOTE_F5, NOTE_FS5, NOTE_G5, NOTE_GS5, NOTE_A5, NOTE_AS5, NOTE_B5,
NOTE_C6, NOTE_CS6, NOTE_D6, NOTE_DS6, NOTE_E6, NOTE_F6, NOTE_FS6, NOTE_G6, NOTE_GS6, NOTE_A6, NOTE_AS6, NOTE_B6,
NOTE_C7, NOTE_CS7, NOTE_D7, NOTE_DS7, NOTE_E7, NOTE_F7, NOTE_FS7, NOTE_G7, NOTE_GS7, NOTE_A7, NOTE_AS7, NOTE_B7
};
//char *song = "The Simpsons:d=4,o=5,b=160:c.6,e6,f#6,8a6,g.6,e6,c6,8a,8f#,8f#,8f#,2g,8p,8p,8f#,8f#,8f#,8g,a#.,8c6,8c6,8c6,c6";
//char *song = "Indiana:d=4,o=5,b=250:e,8p,8f,8g,8p,1c6,8p.,d,8p,8e,1f,p.,g,8p,8a,8b,8p,1f6,p,a,8p,8b,2c6,2d6,2e6,e,8p,8f,8g,8p,1c6,p,d6,8p,8e6,1f.6,g,8p,8g,e.6,8p,d6,8p,8g,e.6,8p,d6,8p,8g,f.6,8p,e6,8p,8d6,2c6";
//char *song = "TakeOnMe:d=4,o=4,b=160:8f#5,8f#5,8f#5,8d5,8p,8b,8p,8e5,8p,8e5,8p,8e5,8g#5,8g#5,8a5,8b5,8a5,8a5,8a5,8e5,8p,8d5,8p,8f#5,8p,8f#5,8p,8f#5,8e5,8e5,8f#5,8e5,8f#5,8f#5,8f#5,8d5,8p,8b,8p,8e5,8p,8e5,8p,8e5,8g#5,8g#5,8a5,8b5,8a5,8a5,8a5,8e5,8p,8d5,8p,8f#5,8p,8f#5,8p,8f#5,8e5,8e5";
//char *song = "Entertainer:d=4,o=5,b=140:8d,8d#,8e,c6,8e,c6,8e,2c.6,8c6,8d6,8d#6,8e6,8c6,8d6,e6,8b,d6,2c6,p,8d,8d#,8e,c6,8e,c6,8e,2c.6,8p,8a,8g,8f#,8a,8c6,e6,8d6,8c6,8a,2d6";
//char *song = "Muppets:d=4,o=5,b=250:c6,c6,a,b,8a,b,g,p,c6,c6,a,8b,8a,8p,g.,p,e,e,g,f,8e,f,8c6,8c,8d,e,8e,8e,8p,8e,g,2p,c6,c6,a,b,8a,b,g,p,c6,c6,a,8b,a,g.,p,e,e,g,f,8e,f,8c6,8c,8d,e,8e,d,8d,c";
//char *song = "Xfiles:d=4,o=5,b=125:e,b,a,b,d6,2b.,1p,e,b,a,b,e6,2b.,1p,g6,f#6,e6,d6,e6,2b.,1p,g6,f#6,e6,d6,f#6,2b.,1p,e,b,a,b,d6,2b.,1p,e,b,a,b,e6,2b.,1p,e6,2b.";
//char *song = "Looney:d=4,o=5,b=140:32p,c6,8f6,8e6,8d6,8c6,a.,8c6,8f6,8e6,8d6,8d#6,e.6,8e6,8e6,8c6,8d6,8c6,8e6,8c6,8d6,8a,8c6,8g,8a#,8a,8f";
//char *song = "20thCenFox:d=16,o=5,b=140:b,8p,b,b,2b,p,c6,32p,b,32p,c6,32p,b,32p,c6,32p,b,8p,b,b,b,32p,b,32p,b,32p,b,32p,b,32p,b,32p,b,32p,g#,32p,a,32p,b,8p,b,b,2b,4p,8e,8g#,8b,1c#6,8f#,8a,8c#6,1e6,8a,8c#6,8e6,1e6,8b,8g#,8a,2b";
//char *song = "Bond:d=4,o=5,b=80:32p,16c#6,32d#6,32d#6,16d#6,8d#6,16c#6,16c#6,16c#6,16c#6,32e6,32e6,16e6,8e6,16d#6,16d#6,16d#6,16c#6,32d#6,32d#6,16d#6,8d#6,16c#6,16c#6,16c#6,16c#6,32e6,32e6,16e6,8e6,16d#6,16d6,16c#6,16c#7,c.7,16g#6,16f#6,g#.6";
//char *song = "MASH:d=8,o=5,b=140:4a,4g,f#,g,p,f#,p,g,p,f#,p,2e.,p,f#,e,4f#,e,f#,p,e,p,4d.,p,f#,4e,d,e,p,d,p,e,p,d,p,2c#.,p,d,c#,4d,c#,d,p,e,p,4f#,p,a,p,4b,a,b,p,a,p,b,p,2a.,4p,a,b,a,4b,a,b,p,2a.,a,4f#,a,b,p,d6,p,4e.6,d6,b,p,a,p,2b";
//char *song = "StarWars:d=4,o=5,b=45:32p,32f#,32f#,32f#,8b.,8f#.6,32e6,32d#6,32c#6,8b.6,16f#.6,32e6,32d#6,32c#6,8b.6,16f#.6,32e6,32d#6,32e6,8c#.6,32f#,32f#,32f#,8b.,8f#.6,32e6,32d#6,32c#6,8b.6,16f#.6,32e6,32d#6,32c#6,8b.6,16f#.6,32e6,32d#6,32e6,8c#6";
//char *song = "GoodBad:d=4,o=5,b=56:32p,32a#,32d#6,32a#,32d#6,8a#.,16f#.,16g#.,d#,32a#,32d#6,32a#,32d#6,8a#.,16f#.,16g#.,c#6,32a#,32d#6,32a#,32d#6,8a#.,16f#.,32f.,32d#.,c#,32a#,32d#6,32a#,32d#6,8a#.,16g#.,d#";
//char *song = "TopGun:d=4,o=4,b=31:32p,16c#,16g#,16g#,32f#,32f,32f#,32f,16d#,16d#,32c#,32d#,16f,32d#,32f,16f#,32f,32c#,16f,d#,16c#,16g#,16g#,32f#,32f,32f#,32f,16d#,16d#,32c#,32d#,16f,32d#,32f,16f#,32f,32c#,g#";
//char *song = "A-Team:d=8,o=5,b=125:4d#6,a#,2d#6,16p,g#,4a#,4d#.,p,16g,16a#,d#6,a#,f6,2d#6,16p,c#.6,16c6,16a#,g#.,2a#";
//char *song = "Flinstones:d=4,o=5,b=40:32p,16f6,16a#,16a#6,32g6,16f6,16a#.,16f6,32d#6,32d6,32d6,32d#6,32f6,16a#,16c6,d6,16f6,16a#.,16a#6,32g6,16f6,16a#.,32f6,32f6,32d#6,32d6,32d6,32d#6,32f6,16a#,16c6,a#,16a6,16d.6,16a#6,32a6,32a6,32g6,32f#6,32a6,8g6,16g6,16c.6,32a6,32a6,32g6,32g6,32f6,32e6,32g6,8f6,16f6,16a#.,16a#6,32g6,16f6,16a#.,16f6,32d#6,32d6,32d6,32d#6,32f6,16a#,16c.6,32d6,32d#6,32f6,16a#,16c.6,32d6,32d#6,32f6,16a#6,16c7,8a#.6";
//char *song = "Jeopardy:d=4,o=6,b=125:c,f,c,f5,c,f,2c,c,f,c,f,a.,8g,8f,8e,8d,8c#,c,f,c,f5,c,f,2c,f.,8d,c,a#5,a5,g5,f5,p,d#,g#,d#,g#5,d#,g#,2d#,d#,g#,d#,g#,c.7,8a#,8g#,8g,8f,8e,d#,g#,d#,g#5,d#,g#,2d#,g#.,8f,d#,c#,c,p,a#5,p,g#.5,d#,g#";
//char *song = "Gadget:d=16,o=5,b=50:32d#,32f,32f#,32g#,a#,f#,a,f,g#,f#,32d#,32f,32f#,32g#,a#,d#6,4d6,32d#,32f,32f#,32g#,a#,f#,a,f,g#,f#,8d#";
//char *song = "Smurfs:d=32,o=5,b=200:4c#6,16p,4f#6,p,16c#6,p,8d#6,p,8b,p,4g#,16p,4c#6,p,16a#,p,8f#,p,8a#,p,4g#,4p,g#,p,a#,p,b,p,c6,p,4c#6,16p,4f#6,p,16c#6,p,8d#6,p,8b,p,4g#,16p,4c#6,p,16a#,p,8b,p,8f,p,4f#";
//char *song = "MahnaMahna:d=16,o=6,b=125:c#,c.,b5,8a#.5,8f.,4g#,a#,g.,4d#,8p,c#,c.,b5,8a#.5,8f.,g#.,8a#.,4g,8p,c#,c.,b5,8a#.5,8f.,4g#,f,g.,8d#.,f,g.,8d#.,f,8g,8d#.,f,8g,d#,8c,a#5,8d#.,8d#.,4d#,8d#.";
//char *song = "LeisureSuit:d=16,o=6,b=56:f.5,f#.5,g.5,g#5,32a#5,f5,g#.5,a#.5,32f5,g#5,32a#5,g#5,8c#.,a#5,32c#,a5,a#.5,c#.,32a5,a#5,32c#,d#,8e,c#.,f.,f.,f.,f.,f,32e,d#,8d,a#.5,e,32f,e,32f,c#,d#.,c#";
//char *song = "MissionImp:d=16,o=6,b=95:32d,32d#,32d,32d#,32d,32d#,32d,32d#,32d,32d,32d#,32e,32f,32f#,32g,g,8p,g,8p,a#,p,c7,p,g,8p,g,8p,f,p,f#,p,g,8p,g,8p,a#,p,c7,p,g,8p,g,8p,f,p,f#,p,a#,g,2d,32p,a#,g,2c#,32p,a#,g,2c,a#5,8c,2p,32p,a#5,g5,2f#,32p,a#5,g5,2f,32p,a#5,g5,2e,d#,8d";
//char *song = "SMBUndergr:d=16,o=6,b=100:c,c5,a5,a,a#5,a#,2p,8p,c,c5,a5,a,a#5,a#,2p,8p,f5,f,d5,d,d#5,d#,2p,8p,f5,f,d5,d,d#5,d#,2p,32d#,d,32c#,c,p,d#,p,d,p,g#5,p,g5,p,c#,p,32c,f#,32f,32e,a#,32a,g#,32p,d#,b5,32p,a#5,32p,a5,g#5";
//char *song = "SMBWater:d=8,o=6,b=225:4d5,4e5,4f#5,4g5,4a5,4a#5,b5,b5,b5,p,b5,p,2b5,p,g5,2e.,2d#.,2e.,p,g5,a5,b5,c,d,2e.,2d#,4f,2e.,2p,p,g5,2d.,2c#.,2d.,p,g5,a5,b5,c,c#,2d.,2g5,4f,2e.,2p,p,g5,2g.,2g.,2g.,4g,4a,p,g,2f.,2f.,2f.,4f,4g,p,f,2e.,4a5,4b5,4f,e,e,4e.,b5,2c.";
//char *song = "smbdeath:d=4,o=5,b=90:32c6,32c6,32c6,8p,16b,16f6,16p,16f6,16f.6,16e.6,16d6,16c6,16p,16e,16p,16c";
char *song = "smb:d=4,o=5,b=100:16e6,16e6,32p,8e6,16c6,8e6,8g6,8p,8g,8p,8c6,16p,8g,16p,8e,16p,8a,8b,16a#,8a,16g.,16e6,16g6,8a6,16f6,8g6,8e6,16c6,16d6,8b,16p,8c6,16p,8g,16p,8e,16p,8a,8b,16a#,8a,16g.,16e6,16g6,8a6,16f6,8g6,8e6,16c6,16d6,8b,8p,16g6,16f#6,16f6,16d#6,16p,16e6,16p,16g#,16a,16c6,16p,16a,16c6,16d6,8p,16g6,16f#6,16f6,16d#6,16p,16e6,16p,16c7,16p,16c7,16c7,p,16g6,16f#6,16f6,16d#6,16p,16e6,16p,16g#,16a,16c6,16p,16a,16c6,16d6,8p,16d#6,8p,16d6,8p,16c6";


*/




//TO USE SERIAL, JUST CHANGE THE BELOW VALUE FROM 0(ZERO) TO 1(ONE).
//TO DISABLE SERIAL, CHANGE THE VALUE BACK TO 0(ZERO).
const int serialenable = 0;

int onetoomanyx = 0 ;
int startvar = 0 ;
int errorvar = 0 ;
int ignition = 0 ;

int switch1 = 0;
int switch2 = 0;
int switch3 = 0;
int switch4 = 0;
int button1 = 0;
int buttond = 0;

int currentpotent = 0;
int tempset = 0;
int p4up = 0;
int pbuttonstatus = 0;

/*
int set000brightnessR = 0;
int set000brightnessG = 0;
int set000brightnessB = 0;
int set000Rup = 0;
int set000Gup = 0;
int set000Bup = 0;
int set000fadeAmount = 5;
int set000x = 1;
*/
int set000delay = 5;

int mariotrap = 0 ;

int fadeAmount = 5;

int set110fadeAmount = 1;

int onedelay = 5;


void setup()
{
  
  /*   In order to use serial functionality, change the associated
   *   variable above to (1). This will enable serial and disable        
   *   all conflicting components associated with it.
   */
  
    if(serialenable == 1) { Serial.begin(9600); } //enable serial above using variable
    
  pinMode(1, INPUT);
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(5, INPUT);
  pinMode(6, INPUT);
  pinMode(8, INPUT); 
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(A1, INPUT);
  pinMode(A3, INPUT);
  pinMode(A5, OUTPUT);
  
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(8, HIGH); 
  
  //tone1.begin(A5);
  
  if(serialenable == 0) //sleeper ignition feature { systemkiller(); }
  {
    splasher(); //initial boot seq. testing
    systemkiller(); //ignition
  }
  
  if(serialenable == 1) { splasherserial(); } //initial serial boot seq. testing
  
  
 if(startvar == 0) //this is the startup LED sequence (pick one by un/commenting below)
  {                 //it can be disabled if necessary
    switch1 = digitalRead(S1);
    switch2 = digitalRead(S2);
    switch3 = digitalRead(S3); // could put { dunk(); } here if prefered
    switch4 = digitalRead(S4); //
    //moose() ;
    //futuresound() ;
    //if(switch4 == 0 && switch3 == 1) futuremoosequiet() ;
    if(switch4 == 0) { systemkiller() ; } //s4 on --> interrupt sequence
    
    if(switch3 == 0 && switch1 == 1) shortmoose() ; //s3 on, s1 off
    if(switch3 == 1 && switch1 == 1) futuremoosequiet() ; //s3 off, s1 off
    
    //futuremoose (future with sound launcher) removed due to stall bug
    
    if(switch1 == 1 && switch2 == 1) //s1 off, s2 off 
    {
      smblaunchlong() ; 
      smblaunchcalloff() ;
    }
    else if(switch1 == 1 && switch2 == 0) //s1 off, s2 on
    {
      smblaunch() ;
      smblaunchcalloff() ;
    }
    
    //delay(3199);
    startvar = 1;
  }
  
  //buttonignition1(); //***defunct***
  
  dunk(); //BC Calc...
}


void loop()
{
  
  /*              *written in by systemkiller();
  //sleep
  set_sleep_mode(SLEEP_MODE_PWR_DOWN);
  interrupts();
  attachInterrupt(1, sleepHandler, CHANGE);
  */
  
  buttond = digitalRead(BD);
  
  if(serialenable == 0)
  {
  // for reference, grounding D1 puts the Arduino to sleep, and grounding D2 wakes it up. 
  while(buttond == 0) { systemkiller(); }
  //end sleep
  }
  
//if(errorvar == 0)
{
  
  
  // ****** ZERO means ON ****** ONE means OFF ******
  
  
  switch1 = digitalRead(S1);
  switch2 = digitalRead(S2);
  switch3 = digitalRead(S3);
  switch4 = digitalRead(S4);
  button1 = analogRead(BUTTON);
  buttond = digitalRead(BD);
  
  //dunk();    //this is the same thing as the above 6(six) lines, 
               //so you can comment if you choose
  
  /*
  //testing purposes
  switch1 = 1; 
  switch2 = 1;
  switch3 = 0;
  switch4 = 1;
  */
  Serial.print("outside: ");
  Serial.println(button1);
  
  /*
  if(button1 < 500 && ignition == 1) //button
  {
    button1 = analogRead(BUTTON);
    onetoomanyx = 1 ;
    delay(500);
    
    tone(BUZZ, 97, 400);
    digitalWrite(L, HIGH);
    digitalWrite(R, HIGH);
    digitalWrite(G, LOW);
    digitalWrite(B, LOW);
    delay(500);
    
    digitalWrite(L, LOW);
    digitalWrite(R, LOW);
    delay(1500);
  
    while(onetoomanyx == 1)
    {
      button1 = analogRead(BUTTON);
      analogWrite(R, onebrightnessR);
      analogWrite(G, onebrightnessG);
      analogWrite(B, onebrightnessB);
      onetoomany();
      delay(onedelay);
      button1 = analogRead(BUTTON);
    }
    */
  
  /*if(switch1 == 0 && switch2 == 0 && switch3 == 0 && switch4 == 0) //1111
  {
    Serial.println("//1111");
    digitalWrite(R, LOW);
    digitalWrite(G, LOW);
    digitalWrite(B, LOW);
    delay(2000);
  }
  
  */
  
  if(switch1 == 0 && switch2 == 0 && switch3 == 0 && switch4 == 0) //1111
  {
    mariotrap = 1 ;
    mariowhiletrap() ;
  }
  
  if(switch1 == 1 && switch2 == 1 && switch3 == 1 && switch4 == 1) //0000
  {
    Serial.println("//0000");
    analogWrite(R, set000brightnessR);
    analogWrite(G, set000brightnessG);
    analogWrite(B, set000brightnessB);
    set000();
    delay(set000delay);
}
  
  
  if(switch1 == 0 && switch2 == 1 && switch3 == 1 && switch4 == 1) //1000
  {
    Serial.println("//1000");
    digitalWrite(R, HIGH);
    digitalWrite(G, LOW);
    digitalWrite(B, LOW);
    delay(500);
    digitalWrite(R, LOW);
    digitalWrite(G, HIGH);
    digitalWrite(B, LOW);
    delay(500);
    digitalWrite(R, LOW);
    digitalWrite(G, LOW);
    digitalWrite(B, HIGH);
    delay(500);
    digitalWrite(R, HIGH);
    digitalWrite(G, HIGH);
    digitalWrite(B, HIGH);
    delay(500); 
  }
  
  if(switch1 == 1 && switch2 == 0 && switch3 == 1 && switch4 == 1) //0100
  {
    Serial.println("//0010");
    set000x = 1;
    digitalWrite(R, HIGH);
    digitalWrite(G, LOW);
    digitalWrite(B, LOW);
    delay(500);
    digitalWrite(R, HIGH);
    digitalWrite(G, HIGH);
    digitalWrite(B, LOW);
    delay(500);
    digitalWrite(R, LOW);
    digitalWrite(G, HIGH);
    digitalWrite(B, LOW);
    delay(500);
    digitalWrite(R, LOW);
    digitalWrite(G, HIGH);
    digitalWrite(B, HIGH);
    delay(500);
    digitalWrite(R, LOW);
    digitalWrite(G, LOW);
    digitalWrite(B, HIGH);
    delay(500);
    digitalWrite(R, HIGH);
    digitalWrite(G, LOW);
    digitalWrite(B, HIGH);
    delay(500);
  }
  
  if(switch1 == 0 && switch2 == 0 && switch3 == 1 && switch4 == 1) //1100
  {
    Serial.println("//1100");
      int r, g, b;
     
      // fade from blue to violet
      for (r = 0; r < 256; r++) { 
        analogWrite(R, r);
        delay(set110fadeAmount);
      } 
      // fade from violet to red
      for (b = 255; b > 0; b--) { 
        analogWrite(B, b);
        delay(set110fadeAmount);
      } 
      // fade from red to yellow
      for (g = 0; g < 256; g++) { 
        analogWrite(G, g);
        delay(set110fadeAmount);
      } 
      // fade from yellow to green
      for (r = 255; r > 0; r--) { 
        analogWrite(R, r);
        delay(set110fadeAmount);
      } 
      // fade from green to teal
      for (b = 0; b < 256; b++) { 
        analogWrite(B, b);
        delay(set110fadeAmount);
      } 
      // fade from teal to blue
      for (g = 255; g > 0; g--) { 
        analogWrite(G, g);
        delay(set110fadeAmount);
      } 
  }
  
  if(switch1 == 1 && switch2 == 1 && switch3 == 0 && switch4 == 1) //0010
  {
    Serial.println("//0010");
    digitalWrite(R, HIGH);
    digitalWrite(G, HIGH);
    digitalWrite(B, HIGH);
    delay(500);
    digitalWrite(R, LOW);
    digitalWrite(G, LOW);
    digitalWrite(B, LOW);
    delay(500);
  }
  
  if(switch1 == 0 && switch2 == 1 && switch3 == 0 && switch4 == 1) //1010
  {
    Serial.println("//1010");
    set101();
  }
    
  if(switch1 == 1 && switch2 == 0 && switch3 == 0 && switch4 == 1) //0110
  {
    Serial.println("//0110");
    set0110();
  }
  
  if(switch1 == 0 && switch2 == 0 && switch3 == 0 && switch4 == 1) //1110
  {
    Serial.println("//1110");
    set111();
  }
  
  
  if(switch1 == 0 && switch2 == 1 && switch3 == 0 && switch4 == 0) //1011
  {
    Serial.println("//1011");
    digitalWrite(R, HIGH);
    digitalWrite(G, LOW);
    digitalWrite(B, LOW);
    delay(350);
    digitalWrite(R, LOW);
    digitalWrite(G, HIGH);
    digitalWrite(B, LOW);
    delay(350);
    digitalWrite(R, LOW);
    digitalWrite(G, LOW);
    digitalWrite(B, HIGH);
    delay(350);
  }
  
  if(switch1 == 0 && switch2 == 1 && switch3 == 1 && switch4 == 0) //1001
  {
    Serial.println("//1001");
    digitalWrite(R, HIGH);
    digitalWrite(B, LOW);
    digitalWrite(G, LOW);
    delay(200);
  }
  
  if(switch1 == 1 && switch2 == 0 && switch3 == 1 && switch4 == 0) //0101
  {
    Serial.println("//0101");
    digitalWrite(R, LOW);
    digitalWrite(G, HIGH);
    digitalWrite(B, LOW);
    delay(200);
  }
  
  if(switch1 == 1 && switch2 == 1 && switch3 == 0 && switch4 == 0) //0011
  {
    Serial.println("//0011");
    digitalWrite(R, LOW);
    digitalWrite(G, LOW);
    digitalWrite(B, HIGH);
    delay(200);
  }
  
  if(switch1 == 1 && switch2 == 0 && switch3 == 0 && switch4 == 0) //0111
  {
    Serial.println("//0111");
    set0111();
  }
  
  if(switch1 == 0 && switch2 == 0 && switch3 == 1 && switch4 == 0) //1101
  {
    Serial.println("//1101");
    set1101();
  }
  
  //this setting (0001) would otherwise be the potentiometer settings, 
  //but those have been nullified in favor of a different color scheme mode
  if(switch1 == 1 && switch2 == 1 && switch3 == 1 && switch4 == 0) //0001
  {
    Serial.println("//0001");
    digitalWrite(R, HIGH);
    digitalWrite(G, HIGH);
    digitalWrite(B, HIGH);
    delay(200);
  }
  
  if(button1 > 20)
  {
    if(switch4 == 1 && switch3 == 0) //s3 on, s4 off
    {
      futurama();
    }
    else if(switch4 == 0 && switch3 == 0) //s3 on, s4 on
    {
     // scarymonstershort();
    }
    if(switch3 == 1) //s3 off
    {
      smbplayer();
    }
  }
  
  mariotrap = 0 ;
  
  /* this was disabled in favor of more light sequences, plus we didn't have time to implement in hardware
  // below this line are the potentiometer settings
  
  // this is the first R-fade G-fade B-fade repeat sequence
  if(switch1 == 1 && switch2 == 1 && switch3 == 1 && switch4 == 0) //0001
  {
    currentpotent = analogRead(POTENT);
    pbuttonstatus = digitalRead(PBUTTON);
    analogWrite(R, tempset);
    
    if(tempset < 255 && p4up == 0)  
      {
        tempset = tempset + set000fadeAmount;
        Serial.print("not 255 Rup 0: ");
        Serial.println(tempset);
      }
      else if(tempset >= 255 && p4up == 0)
      {
        p4up = 1;
        tempset = tempset - set000fadeAmount;
        Serial.print("is 255 Rup 0: ");
        Serial.println(tempset);
      }
      else if(tempset < 255 && p4up == 1 && tempset >0)  
      {
        tempset = tempset - set000fadeAmount;
        Serial.print("not 255 Rup 1: ");
        Serial.println(tempset);
      }
      else if(tempset <= 5 && p4up == 1)
      {
        p4up = 0;
        tempset = 0;
        Serial.print("is 0 Rup 1: ");
        Serial.println(tempset);
      }
      delay(currentpotent);
    Serial.print("potent: ");
    Serial.println(currentpotent);  
    
    if(pbuttonstatus == 0) //which really means (1), 
    {                      //but the value for pressed reads 0 
      set000delay = currentpotent ;
      digitalWrite(R, HIGH);
      delay(350);
      digitalWrite(R, LOW);
      delay(350);
      digitalWrite(R, HIGH);
      delay(350);
      digitalWrite(R, LOW);
      delay(350);
      digitalWrite(R, HIGH);
      delay(350);
      digitalWrite(R, LOW);
      delay(350);
      digitalWrite(R, HIGH);
      delay(350);
      digitalWrite(R, LOW);
      delay(350);
    }
    
  }
  */
} 
  
  /*
  else //errorvar precautionary
  {
    Serial.println("sayonce");
    sayonce();
  }
  */
  
}

/*********************************/

void pin3Interrupt(void)
{
  /* This will bring us back from sleep. */
  
  /* We detach the interrupt to stop it from 
   * continuously firing while the interrupt pin
   * is low (V=Ground).
   */
  detachInterrupt(0);
}


void sleepHandler() { //this is the defunct sleeper agent
}

void dunk()
{
  switch1 = digitalRead(S1);
  switch2 = digitalRead(S2);
  switch3 = digitalRead(S3);
  switch4 = digitalRead(S4);
  button1 = analogRead(BUTTON);
  buttond = digitalRead(BD);
}


void systemkiller()
{
  if(serialenable == 0) //safety
  {
    
  dunk();
  //sleep
  set_sleep_mode(SLEEP_MODE_PWR_DOWN);
  //interrupts();
  attachInterrupt(0, pin3Interrupt, LOW);
  digitalWrite(R, LOW);
  digitalWrite(G, LOW);
  digitalWrite(B, LOW);
  digitalWrite(L, HIGH);
  delay(50);
  digitalWrite(L, LOW);
  delay(50);
  digitalWrite(L, HIGH);
  delay(50);
  digitalWrite(L, LOW);
  delay(50);
  digitalWrite(L, HIGH);
  delay(50);
  digitalWrite(L, LOW);
  delay(50);
  digitalWrite(L, HIGH);
  delay(50);
  digitalWrite(L, LOW);
  delay(50);
  digitalWrite(L, HIGH);
  dunk();
  sleep_enable();
  sleep_mode();  //sleep now
  //--------------- ZZZZZZ sleeping here
  dunk();
  //} //should we end here?
  digitalWrite(L, LOW);
  dunk();
  sleep_disable(); //fully awake now
  digitalWrite(L, LOW);
  detachInterrupt(1);
  dunk();

  }
}


void mariowhiletrap()
{
  while(mariotrap == 1)
  {
    smbplayer() ;
    delay(10);
    digitalWrite(R, LOW);
    digitalWrite(G, HIGH);
    digitalWrite(B, HIGH);
    
    dunk();
    if(switch1 == 0 && switch2 == 0 && switch3 == 0 && switch4 == 0) //1111
    {
      delay(2375);
      dunk();
      if(switch1 == 0 && switch2 == 0 && switch3 == 0 && switch4 == 0) //1111
      {
        smbplayercalloff() ;
      }
      else
      {
        smbplayercalloff() ;
        mariotrap = 0 ;
      }
    }
    else
    {
      smbplayercalloff() ;
      mariotrap = 0 ;
    }
    
  }
}

