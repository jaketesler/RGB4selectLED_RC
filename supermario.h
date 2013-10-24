// supermario.h //

#define R 9
#define G 10
#define B 11
#define L 13
#define BUZZ A5
// mario //


//for mario
//int audioPWM = 11;
int MtempoSlow = 120;
int MtempoFast = 50;



// note values for two octave scale
// divide them by powers of two to generate other octaves
float MA     = 14080 ;
float MAS    = 14917.2 ;
float MBa     = 15804.3 ;
float MC     = 16744;
float MCS    = 17739.7;
float MD     = 18794.5;
float MDS    = 19912.1;
float MEE2   = 21096.2;
float MF     = 22350.6;
float MFS    = 23679.6;
float MGa     = 25087.7;
float MGS    = 26579.5;
float MA2a   = 28160;
float MA2aS  = 29834.5;
float MB2    = 31608.5;
float MC2    = 33488.1;
float MC2S   = 35479.4;
float MD2    = 37589.1;
float MD2S   = 39824.3;
float ME2    = 42192.3;
float MF2    = 44701.2;
float MF2S   = 47359.3;
float MG2    = 50175.4;
float MG2S   = 53159;
float MA3a   = 56320;
float MAS3   = 59669;
float MB3    = 63217;
float MC3    = 66976.2;

float MREST  = 0;


void freqout(int freq, int t)  // freq in hz, t in ms
{  
  // Added special handling for rests (avoids pops)
  if (freq == 0)
  {
    delay(t);
    return;
  }
 
  int hperiod;                               //calculate 1/2 period in us
  long cycles, i;

  pinMode(BUZZ, OUTPUT);                   // turn on output pin //already declared above
  
  hperiod = (500000 / freq) - 7;             // subtract 7 us to make up for digitalWrite overhead
  cycles = ((long)freq * (long)t) / 1000;    // calculate cycles
  
  for (i=0; i<= cycles; i++)
  {
      // play note for t ms 
      //digitalWrite(BUZZMARIO, HIGH);
      digitalWrite(BUZZ, HIGH); 
      delayMicroseconds(hperiod);
      digitalWrite(BUZZ, LOW); 
      //digitalWrite(BUZZMARIO, LOW); 
      delayMicroseconds(hperiod - 1);     // - 1 to make up for digitaWrite overhead
  }
  // pinMode(BUZZMARIO, INPUT);                // shut off pin to avoid noise from other operations       //NOOOOOOOOOOO!!!!!
}

float EIGHTH = 1;
float DOTTED_EIGHTH = 1.5;
float QUARTER = 2;
float DOTTED_QUARTER =3;
float HALF = 4;
float WHOLE = 8;
float ETERNITY =-1;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// My Mario Music
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

int cNumSongs = 8;

float song0[] = 
  {
    ME2,EIGHTH, ME2,QUARTER, ME2,EIGHTH, MREST,EIGHTH, MC2,EIGHTH, ME2,QUARTER, MG2,HALF, MGa,HALF, 
    MREST,ETERNITY
  };
float song1[] = 
  {
    MC2,DOTTED_QUARTER, MGa,EIGHTH, MREST,QUARTER, MEE2,QUARTER, MREST,EIGHTH, MA2a,QUARTER, MB2,EIGHTH, MREST,EIGHTH, MA2aS,EIGHTH, MA2a,QUARTER,
    MGa,DOTTED_EIGHTH, ME2,DOTTED_EIGHTH, MG2,EIGHTH, MA3a,QUARTER, MF2,EIGHTH, MG2,EIGHTH, MREST,EIGHTH, ME2,QUARTER, MC2,EIGHTH, MD2,EIGHTH, MB2,DOTTED_QUARTER,
    MREST,ETERNITY  
  };
float song2[] = 
  {
    MC2,DOTTED_QUARTER, MGa,EIGHTH, MREST,QUARTER, MEE2,QUARTER, MREST,EIGHTH, MA2a,QUARTER, MB2,EIGHTH, MREST,EIGHTH, MA2aS,EIGHTH, MA2a,QUARTER,
    MGa,DOTTED_EIGHTH, ME2,DOTTED_EIGHTH, MG2,EIGHTH, MA3a,QUARTER, MF2,EIGHTH, MG2,EIGHTH, MREST,EIGHTH, ME2,QUARTER, MC2,EIGHTH, MD2,EIGHTH, MB2,DOTTED_QUARTER,
    MREST,ETERNITY  
  };
float song3[] = 
  {
    MREST,QUARTER, MG2,EIGHTH, MF2S,EIGHTH, MF2,EIGHTH, MD2S,QUARTER, ME2,EIGHTH, MREST,EIGHTH, MGS,EIGHTH, MA2a,EIGHTH, MC2,EIGHTH, MREST,EIGHTH, MA2a,EIGHTH, MC2,EIGHTH, MD2,EIGHTH,
    MREST,QUARTER, MG2,EIGHTH, MF2S,EIGHTH, MF2,EIGHTH, MD2S,QUARTER, ME2,EIGHTH, MREST,EIGHTH, MC3,QUARTER, MC3,EIGHTH, MC3,HALF,
    MREST,ETERNITY  
  };
float song4[] = 
  {
    MREST,QUARTER, MG2,EIGHTH, MF2S,EIGHTH, MF2,EIGHTH, MD2S,QUARTER, ME2,EIGHTH, MREST,EIGHTH, MGS,EIGHTH, MA2a,EIGHTH, MC2,EIGHTH, MREST,EIGHTH, MA2a,EIGHTH, MC2,EIGHTH, MD2,EIGHTH,
    MREST,QUARTER, MD2S,QUARTER, MREST,EIGHTH, MD2,DOTTED_QUARTER, MC2,HALF, MREST,HALF,
    MREST,ETERNITY  
  };
float song5[] = 
  {
    MC2,EIGHTH, MC2,QUARTER, MC2,EIGHTH, MREST,EIGHTH, MC2,EIGHTH, MD2,QUARTER, ME2,EIGHTH, MC2,QUARTER, MA2a,EIGHTH, MGa,HALF,
    MC2,EIGHTH, MC2,QUARTER, MC2,EIGHTH, MREST,EIGHTH, MC2,EIGHTH, MD2,EIGHTH, ME2,QUARTER, MREST,HALF, MREST,EIGHTH, 
    MREST,ETERNITY  
  };
float song6[] = 
{
    MC2,EIGHTH, MC2,QUARTER, MC2,EIGHTH, MREST,EIGHTH, MC2,EIGHTH, MD2,QUARTER, ME2,EIGHTH, MC2,QUARTER, MA2a,EIGHTH, MGa,HALF,
    ME2,EIGHTH, ME2,QUARTER, ME2,EIGHTH, MREST,EIGHTH, MC2,EIGHTH, ME2,QUARTER, MG2,QUARTER, MREST, QUARTER, MGa,QUARTER, MREST, QUARTER, 
    MREST,ETERNITY  
};

float song7[] = 
  {
    MC2,DOTTED_QUARTER, MGa,EIGHTH, MREST,QUARTER, MEE2,QUARTER, MREST,EIGHTH, MA2a,QUARTER, MB2,EIGHTH, MREST,EIGHTH, MA2aS,EIGHTH, MA2a,QUARTER,
    MGa,DOTTED_EIGHTH, ME2,DOTTED_EIGHTH, MG2,EIGHTH, MA3a,QUARTER, MF2,EIGHTH, MG2,EIGHTH, MREST,EIGHTH, ME2,QUARTER, MC2,EIGHTH, MD2,EIGHTH, MB2,DOTTED_QUARTER,
    MC2,DOTTED_QUARTER, MREST,ETERNITY  
  };

float* songs[] = 
{
  song0,
  song1,
  song2,
  song3,
  song4,
  song5,
  song6,
  song7,
};


/////////////////////////////////////////////////////////////////////////////////////////////////////////////
// PlaySong()
//
// Just a little function to play  music and light LED's
//
void PlaySong(int songIndex, int tempo)
{
  
  if (songIndex < 0 || songIndex >= cNumSongs)
  {
    return;
  }
  
//  Serial.println("PlaySong");
  
  float* song = songs[songIndex];
  
  int x;
  for(x= 0; x<10000; x=x+2)
  {
    int noteval = (int)(song[x] / 64.0f);
    int dur = (int)((float)tempo * song[x+1]);
    
    if(dur < 0)
      break;
    
    freqout(noteval, dur);
 
    /*
    for (int i=0; i<6; i++)
    {
      boolean ledOn = (i == (millis() % 6));
      //digitalWrite(regionLEDs[i], ledOn ? HIGH : LOW);
    }
    */

    delay(10);
  }
}


void smbplayer()
{
  digitalWrite(R, HIGH);
  digitalWrite(G, LOW);
  digitalWrite(B, LOW);
  digitalWrite(L, HIGH);
  PlaySong(0, MtempoSlow);
  
  digitalWrite(R, LOW);
  digitalWrite(G, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(L, LOW);
  PlaySong(1, MtempoSlow);
  
  digitalWrite(R, LOW);
  digitalWrite(G, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(L, HIGH);
  PlaySong(2, MtempoSlow);
  
  digitalWrite(R, LOW);
  digitalWrite(G, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(L, LOW);
  PlaySong(3, MtempoSlow);
  
  digitalWrite(R, HIGH);
  digitalWrite(G, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(L, HIGH);
  PlaySong(4, MtempoSlow);
  
  digitalWrite(R, HIGH);
  digitalWrite(G, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(L, LOW);
  PlaySong(5, MtempoSlow);
  
  digitalWrite(R, LOW);
  digitalWrite(G, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(L, HIGH);
  PlaySong(6, MtempoSlow);
  
  digitalWrite(R, LOW);
  digitalWrite(G, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(L, LOW);
  PlaySong(1, MtempoSlow);
  
  digitalWrite(R, HIGH);
  digitalWrite(G, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(L, HIGH);
  PlaySong(7, MtempoSlow);

  digitalWrite(R, LOW);
  digitalWrite(G, LOW);
  digitalWrite(B, LOW);
  digitalWrite(L, LOW);
}



void smblaunch()
{
  digitalWrite(R, HIGH);
  digitalWrite(G, LOW);
  digitalWrite(B, LOW);
  digitalWrite(L, LOW);
  PlaySong(0, MtempoSlow);
  
  digitalWrite(R, LOW);
  digitalWrite(G, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(L, HIGH);
  PlaySong(7, MtempoSlow); 
}

void smblaunchlong()
{
  digitalWrite(R, HIGH);
  digitalWrite(G, LOW);
  digitalWrite(B, LOW);
  digitalWrite(L, LOW);
  PlaySong(0, MtempoSlow);
  
  digitalWrite(R, LOW);
  digitalWrite(G, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(L, HIGH);
  PlaySong(2, MtempoSlow); 
  
  digitalWrite(R, HIGH);
  digitalWrite(G, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(L, HIGH);
  PlaySong(3, MtempoSlow); 
  
  digitalWrite(R, LOW);
  digitalWrite(G, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(L, HIGH);
  PlaySong(4, MtempoSlow); 
  
  digitalWrite(R, LOW);
  digitalWrite(G, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(L, HIGH);
  PlaySong(6, MtempoSlow);
  
  digitalWrite(R, HIGH);
  digitalWrite(G, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(L, HIGH);
  PlaySong(7, MtempoSlow);
}

void smblaunchcalloff()
{
  delay(1250);
  digitalWrite(R, LOW);
  digitalWrite(G, LOW);
  digitalWrite(B, LOW);
  digitalWrite(L, LOW);
}

void smbplayercalloff()
{
  delay(1625);
  digitalWrite(R, LOW);
  digitalWrite(G, LOW);
  digitalWrite(B, LOW);
  digitalWrite(L, LOW);
}


/* RTTTL FAIL */

/*
#define isdigit(n) (n >= '0' && n <= '9')

void play_rtttl(char *p)
{
  // Absolutely no error checking in here

  byte default_dur = 4;
  byte default_oct = 6;
  int bpm = 63;
  int num;
  long wholenote;
  long duration;
  byte note;
  byte scale;

  // format: d=N,o=N,b=NNN:
  // find the start (skip name, etc)

  while(*p != ':') p++;    // ignore name
  p++;                     // skip ':'

  // get default duration
  if(*p == 'd')
  {
    p++; p++;              // skip "d="
    num = 0;
    while(isdigit(*p))
    {
      num = (num * 10) + (*p++ - '0');
    }
    if(num > 0) default_dur = num;
    p++;                   // skip comma
  }

  Serial.print("ddur: "); Serial.println(default_dur, 10);

  // get default octave
  if(*p == 'o')
  {
    p++; p++;              // skip "o="
    num = *p++ - '0';
    if(num >= 3 && num <=7) default_oct = num;
    p++;                   // skip comma
  }

  Serial.print("doct: "); Serial.println(default_oct, 10);

  // get BPM
  if(*p == 'b')
  {
    p++; p++;              // skip "b="
    num = 0;
    while(isdigit(*p))
    {
      num = (num * 10) + (*p++ - '0');
    }
    bpm = num;
    p++;                   // skip colon
  }

  Serial.print("bpm: "); Serial.println(bpm, 10);

  // BPM usually expresses the number of quarter notes per minute
  wholenote = (60 * 1000L / bpm) * 4;  // this is the time for whole note (in milliseconds)

  Serial.print("wn: "); Serial.println(wholenote, 10);


  // now begin note loop
  while(*p)
  {
    // first, get note duration, if available
    num = 0;
    while(isdigit(*p))
    {
      num = (num * 10) + (*p++ - '0');
    }
    
    if(num) duration = wholenote / num;
    else duration = wholenote / default_dur;  // we will need to check if we are a dotted note after

    // now get the note
    note = 0;

    switch(*p)
    {
      case 'c':
        note = 1;
        break;
      case 'd':
        note = 3;
        break;
      case 'e':
        note = 5;
        break;
      case 'f':
        note = 6;
        break;
      case 'g':
        note = 8;
        break;
      case 'a':
        note = 10;
        break;
      case 'b':
        note = 12;
        break;
      case 'p':
      default:
        note = 0;
    }
    p++;

    // now, get optional '#' sharp
    if(*p == '#')
    {
      note++;
      p++;
    }

    // now, get optional '.' dotted note
    if(*p == '.')
    {
      duration += duration/2;
      p++;
    }
  
    // now, get scale
    if(isdigit(*p))
    {
      scale = *p - '0';
      p++;
    }
    else
    {
      scale = default_oct;
    }

    scale += OCTAVE_OFFSET;

    if(*p == ',')
      p++;       // skip comma for next note (or we may be at the end)
 
    // now play the note

    if(note)
    {
      Serial.print("Playing: ");
      Serial.print(scale, 10); Serial.print(' ');
      Serial.print(note, 10); Serial.print(" (");
      Serial.print(notes[(scale - 4) * 12 + note], 10);
      Serial.print(") ");
      Serial.println(duration, 10);
      tone1.play(notes[(scale - 4) * 12 + note]);
      delay(duration);
      tone1.stop();
    }
    else
    {
      Serial.print("Pausing: ");
      Serial.println(duration, 10);
      delay(duration);
    }
  }
}

*/

