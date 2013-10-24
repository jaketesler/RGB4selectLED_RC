// scarymonster2.h //
//*not included*//

#define BUZZ 5
//frequencies
/*
#define 261.63 261.63
#define 293.66 293.66
#define 329.63 329.63
#define 349.23 349.23
#define 392.00 392.00
#define 440.00 440.00
#define 493.88 493.88
#define 523.25 523.25
#define 587.33 587.33
#define 659.26 659.26
#define 698.46 698.46
#define 783.99 783.99
#define 880.00 440.00
#define 987.77 987.77
#define 1046.50 1046.50
#define 1174.66 1174.66
#define 1318.51 1318.51
#define 1398.91 1396.91
#define 1567.98 1567.98

//delays
#define 115.385 230.769
#define 230.769 230.769
#define 346.154 346.154
#define 461.538 461.538
#define 923.076 923.076
#define 1846.154 1846.154
#define 1846.54 1846.54
*/
#define MBREAK 40//delay between notes where break should be
#define MBREAKSHORT 10 //delay between connected notes

//part 1
void scarymonsters5()
{
  tone(BUZZ, 0, 346.154);
  delay(346.154);
  tone(BUZZ, 783.99, 115.385);
  delay(115.385);
  delay(MBREAK);
  tone(BUZZ, 698.46, 230.769);
  delay(230.769);
  tone(BUZZ, 783.99, 230.769);
  delay(230.769);
  delay(MBREAK);
  tone(BUZZ, 987.77, 461.538);
  delay(461.538);
  delay(MBREAK);
  tone(BUZZ, 783.99, 230.769);
  delay(230.769);
  tone(BUZZ, 1174.66, 230.769);
  delay(230.769);
  delay(MBREAK);
  
  //
  
  tone(BUZZ, 1046.50, 230.769);
  delay(230.769);
  tone(BUZZ, 987.77, 230.769);
  delay(230.769);
  delay(MBREAK);
  tone(BUZZ, 349.23, 461.538);
  delay(461.538);
  delay(MBREAK);
  tone(BUZZ, 493.88, 230.769);
  delay(230.769);
  tone(BUZZ, 440.00, 230.769);
  delay(230.769);
  tone(BUZZ, 698.46, 230.769);
  delay(230.769);
  tone(BUZZ, 659.26, 230.769);
  delay(230.769);
  delay(MBREAK);
  
  //
  
  tone(BUZZ, 587.33, 230.769);
  delay(230.769);
  tone(BUZZ, 523.25, 230.769);
  delay(230.769);
  tone(BUZZ, 493.88, 230.769);
  delay(230.769);
  tone(BUZZ, 698.46, 230.769);
  delay(230.769);
  delay(MBREAK);
  tone(BUZZ, 493.88, 230.769);
  delay(230.769);
  tone(BUZZ, 392.00, 230.769);
  delay(230.769);
  tone(BUZZ, 493.88, 230.769);
  delay(230.769);
  tone(BUZZ, 587.33, 230.769);
  delay(230.769);
  delay(MBREAK);
  
  //
  
  tone(BUZZ, 1567.98, 230.769);
  delay(230.769);
  tone(BUZZ, 1174.66, 230.769);
  delay(230.769);
  tone(BUZZ, 987.77, 230.769);
  delay(230.769);
  tone(BUZZ, 783.99, 230.769);
  delay(230.769);
  delay(MBREAK);
  tone(BUZZ, 1398.91, 230.769);
  delay(230.769);
  tone(BUZZ, 987.77, 230.769);
  delay(230.769);
  tone(BUZZ, 783.99, 230.769);
  delay(230.769);
  tone(BUZZ, 698.46, 230.769);
  delay(230.769);
  delay(MBREAK);
  /*
  tone(BUZZ, 698.46, 461.538); //extended last note
  delay(461.538);
  delay(MBREAK);
  delay(1000);
  */
}

//part 2
void scarymonsters6()
{
  tone(BUZZ, 493.88, 461.538);
  delay(461.538);
  delay(MBREAK);
  tone(BUZZ, 493.88, 461.538);
  delay(461.538);
  delay(MBREAK);
  tone(BUZZ, 698.46, 923.077);
  delay(923.077);
  delay(MBREAK);
  
  //
  
  tone(BUZZ, 587.33, 461.538);
  delay(461.538);
  delay(MBREAK);
  tone(BUZZ, 587.33, 230.769);
  delay(230.769);
  tone(BUZZ, 587.33, 115.385);
  delay(115.385);
  tone(BUZZ, 587.33, 115.385);
  delay(115.385);
  delay(MBREAK);
  tone(BUZZ, 523.25, 230.769);
  delay(230.769);
  tone(BUZZ, 493.88, 230.769);
  delay(230.769);
  delay(MBREAK);
  tone(BUZZ, 493.88, 115.385);
  delay(115.385);
  tone(BUZZ, 523.25, 115.385);
  delay(115.385);
  tone(BUZZ, 587.33, 115.385);
  delay(115.385);
  tone(BUZZ, 659.26, 115.385);
  delay(115.385);
  delay(MBREAK);
  
  //
  
  tone(BUZZ, 587.33, 230.769);
  delay(230.769);
  tone(BUZZ, 349.23, 230.769);
  delay(230.769);
  tone(BUZZ, 493.88, 230.769);
  delay(230.769);
  tone(BUZZ, 493.88, 230.769);
  delay(230.769);
  delay(MBREAK);
  tone(BUZZ, 493.88, 230.769);
  delay(230.769);
  tone(BUZZ, 349.23, 230.769);
  delay(230.769);
  delay(MBREAK);
  tone(BUZZ, 493.88, 230.769);
  delay(230.769);
  tone(BUZZ, 493.88, 115.385);
  delay(115.385);
  tone(BUZZ, 493.88, 115.385);
  delay(115.385);
  delay(MBREAK);
  
  //
  
  tone(BUZZ, 698.46, 230.769);
  delay(230.769);
  tone(BUZZ, 493.88, 230.769);
  delay(230.769);
  delay(MBREAK);
  tone(BUZZ, 493.88, 230.769);
  delay(230.769);
  tone(BUZZ, 493.88, 115.385);
  delay(115.385);
  tone(BUZZ, 523.25, 115.385);
  delay(115.385);
  delay(MBREAK);
  tone(BUZZ, 493.88, 230.769);
  delay(230.769);
  tone(BUZZ, 440.00, 230.769);
  delay(230.769);
  tone(BUZZ, 392.00, 230.769);
  delay(230.769);
  tone(BUZZ, 349.23, 230.769);
  delay(230.769);
  delay(MBREAK);
  
  
  
  
  //
  
  
  
  
  tone(BUZZ, 493.88, 461.538);
  delay(461.538);
  delay(MBREAK);
  tone(BUZZ, 493.88, 461.538);
  delay(461.538);
  delay(MBREAK);
  tone(BUZZ, 698.46, 923.077);
  delay(923.077);
  delay(MBREAK);
  
  //
  
  tone(BUZZ, 587.33, 461.538);
  delay(461.538);
  delay(MBREAK);
  tone(BUZZ, 587.33, 230.769);
  delay(230.769);
  tone(BUZZ, 587.33, 115.385);
  delay(115.385);
  tone(BUZZ, 587.33, 115.385);
  delay(115.385);
  delay(MBREAK);
  tone(BUZZ, 523.25, 230.769);
  delay(230.769);
  tone(BUZZ, 493.88, 230.769);
  delay(230.769);
  delay(MBREAK);
  tone(BUZZ, 493.88, 115.385);
  delay(115.385);
  tone(BUZZ, 523.25, 115.385);
  delay(115.385);
  tone(BUZZ, 587.33, 115.385);
  delay(115.385);
  tone(BUZZ, 659.26, 115.385);
  delay(115.385);
  delay(MBREAK);
  
  //
  
  tone(BUZZ, 698.46, 230.769);
  delay(230.769);
  tone(BUZZ, 349.23, 230.769);
  delay(230.769);
  tone(BUZZ, 493.88, 230.769);
  delay(230.769);
  tone(BUZZ, 493.88, 230.769);
  delay(230.769);
  delay(MBREAK);
  tone(BUZZ, 493.88, 230.769);
  delay(230.769);
  tone(BUZZ, 349.23, 230.769);
  delay(230.769);
  delay(MBREAK);
  tone(BUZZ, 493.88, 230.769);
  delay(230.769);
  tone(BUZZ, 493.88, 115.385);
  delay(115.385);
  tone(BUZZ, 493.88, 115.385);
  delay(115.385);
  delay(MBREAK);
  
  //
  
  tone(BUZZ, 698.46, 230.769);
  delay(230.769);
  tone(BUZZ, 493.88, 230.769);
  delay(230.769);
  delay(MBREAK);
  tone(BUZZ, 493.88, 230.769);
  delay(230.769);
  tone(BUZZ, 493.88, 115.385);
  delay(115.385);
  tone(BUZZ, 523.25, 115.385);
  delay(115.385);
  delay(MBREAK);
  tone(BUZZ, 493.88, 230.769);
  delay(230.769);
  tone(BUZZ, 440.00, 230.769);
  delay(230.769);
  tone(BUZZ, 392.00, 230.769);
  delay(230.769);
  tone(BUZZ, 349.23, 230.769);
  delay(230.769);
  delay(MBREAK);
  
}


//part 3
void scarymonsters7()
{
  tone(BUZZ, 392.00, 230.769);
  delay(230.769);
  tone(BUZZ, 440.00, 230.769);
  delay(230.769);
  tone(BUZZ, 440.00, 230.769);
  delay(230.769);
  tone(BUZZ, 493.88, 230.769);
  delay(230.769);
  tone(BUZZ, 493.88, 230.769);
  delay(230.769);
  tone(BUZZ, 349.23, 230.769);
  delay(230.769);
  tone(BUZZ, 349.23, 230.769);
  delay(230.769);
  tone(BUZZ, 349.23, 230.769);
  delay(230.769);
  //
  tone(BUZZ, 349.23, 1846.154);
  delay(1846.154);
  delay(MBREAK);
  
  //
  
  tone(BUZZ, 392.00, 230.769);
  delay(230.769);
  tone(BUZZ, 493.88, 230.769);
  delay(230.769);
  tone(BUZZ, 493.88, 230.769);
  delay(230.769);
  tone(BUZZ, 293.66, 230.769);
  delay(230.769);
  tone(BUZZ, 293.66, 230.769);
  delay(230.769);
  tone(BUZZ, 493.88, 230.769);
  delay(230.769);
  tone(BUZZ, 493.88, 230.769);
  delay(230.769);
  //
  tone(BUZZ, 493.88, 230.769);
  delay(230.769);
  delay(MBREAK);
  
  //
  
  tone(BUZZ, 392.00, 230.769);
  delay(230.769);
  tone(BUZZ, 440.00, 230.769);
  delay(230.769);
  tone(BUZZ, 440.00, 230.769);
  delay(230.769);
  tone(BUZZ, 493.88, 230.769);
  delay(230.769);
  tone(BUZZ, 493.88, 230.769);
  delay(230.769);
  tone(BUZZ, 349.23, 230.769);
  delay(230.769);
  tone(BUZZ, 349.23, 230.769);
  delay(230.769);
  tone(BUZZ, 349.23, 230.769);
  delay(230.769);
  
  //
  
  tone(BUZZ, 349.23, 230.769);
  delay(230.769);
  tone(BUZZ, 523.25, 230.769);
  delay(230.769);
  tone(BUZZ, 523.25, 230.769);
  delay(230.769);
  tone(BUZZ, 493.88, 230.769);
  delay(230.769);
  tone(BUZZ, 493.88, 461.538);
  delay(461.538);
  delay(MBREAK);
  tone(BUZZ, 00, 230.769);
  delay(230.769);
  delay(MBREAK);
  tone(BUZZ, 523.25, 230.769);
  delay(230.769);
  delay(MBREAK);
  
  //
  
  tone(BUZZ, 293.66, 230.769);
  delay(230.769);
  tone(BUZZ, 261.63, 230.769);
  delay(230.769);
  tone(BUZZ, 261.63, 230.769);
  delay(230.769);
  tone(BUZZ, 293.66, 230.769);
  delay(230.769);
  tone(BUZZ, 293.66, 230.769);
  delay(230.769);
  tone(BUZZ, 293.66, 230.769);
  delay(230.769);
  delay(MBREAK);
  tone(BUZZ, 698.46, 461.538);
  delay(461.538);//no mbreak
  
  //
  
  tone(BUZZ, 698.46, 230.769);
  delay(230.769);
  tone(BUZZ, 493.88, 230.769);
  delay(230.769);
  tone(BUZZ, 493.88, 1384.614);
  delay(1384.614);
  delay(MBREAK);
  
}


//part 4
void scarymonsters8()
{
  tone(BUZZ, 783.99, 230.769);
  delay(230.769);
  tone(BUZZ, 987.77, 230.769);
  delay(230.769);
  tone(BUZZ, 880.00, 230.769);
  delay(230.769);
  tone(BUZZ, 987.77, 230.769);
  delay(230.769);
  delay(MBREAK);
  tone(BUZZ, 987.77, 230.769);
  delay(230.769);
  tone(BUZZ, 987.77, 230.769);
  delay(230.769);
  tone(BUZZ, 523.25, 230.769);
  delay(230.769);
  tone(BUZZ, 987.77, 230.769);
  delay(230.769);
  delay(MBREAK);
  
  //
  
  tone(BUZZ, 1046.50, 230.769);
  delay(230.769);
  tone(BUZZ, 987.77, 230.769);
  delay(230.769);
  tone(BUZZ, 1046.50, 230.769);
  delay(230.769);
  tone(BUZZ, 987.77, 230.769);
  delay(230.769);
  delay(MBREAK);
  tone(BUZZ, 1174.66, 230.769);
  delay(230.769);
  tone(BUZZ, 987.77, 230.769);
  delay(230.769);
  tone(BUZZ, 1046.50, 230.769);
  delay(230.769);
  tone(BUZZ, 1174.66, 230.769);
  delay(230.769);
  delay(MBREAK);
  
  //
  
  tone(BUZZ, 783.99, 230.769);
  delay(230.769);
  tone(BUZZ, 880.00, 230.769);
  delay(230.769);
  tone(BUZZ, 987.77, 230.769);
  delay(230.769);
  tone(BUZZ, 698.46, 230.769);
  delay(230.769);
  delay(MBREAK);
  tone(BUZZ, 987.77, 230.769);
  delay(230.769);
  tone(BUZZ, 698.46, 230.769);
  delay(230.769);
  tone(BUZZ, 659.26, 230.769);
  delay(230.769);
  tone(BUZZ, 587.33, 230.769);
  delay(230.769);
  delay(MBREAK);
  
  //
  
  tone(BUZZ, 523.25, 230.769);
  delay(230.769);
  tone(BUZZ, 493.88, 230.769);
  delay(230.769);
  tone(BUZZ, 1046.50, 230.769);
  delay(230.769);
  tone(BUZZ, 783.99, 230.769);
  delay(230.769);
  delay(MBREAK);
  tone(BUZZ, 1174.66, 230.769);
  delay(230.769);
  tone(BUZZ, 698.46, 230.769);
  delay(230.769);
  tone(BUZZ, 1046.50, 230.769);
  delay(230.769);
  tone(BUZZ, 783.99, 230.769);
  delay(230.769);
  delay(MBREAK);
  
}


//full song
void scarymonstersfull2()
{
  scarymonsters5();
  scarymonsters5();
  scarymonsters6();
  scarymonsters5();
  scarymonsters5();
  scarymonsters6();
  scarymonsters7();
  scarymonsters7();
  scarymonsters8();
  scarymonsters8();
  scarymonsters8();
  scarymonsters8();
}


// *************** NOTES *************** //
/*
// scarymonsternotes.h //

/*

#1

00 .75/1
g5 .25/1
f5 .5/1-
g5 .5/1 |
b5 1/1
g5 .5/1-
d6 .5/1 |

c6 .5/1-
b5 .5/1 |
f4 1/1
b4 .5/1-
a4 .5/1-
f5 .5/1-
e5 .5/1 |

d5 .5/1-
c5 .5/1-
b4 .5/1-
f5 .5/1 |
b4 .5/1-
g4 .5/1-
b4 .5/1-
d5 .5/1 |

g6 .5/1-
d6 .5/1-
b5 .5/1-
g5.5/1 |
f6 .5/1-
b5 .5/1-
g5 .5/1-
f5 .5/1 |

57.69225 per ”.25”
115.3845 per ”.5”
173.077 per ”.75”
230.769ms per ”1”

461.538
923.077ms per set (measure or ”4”)

---------------------

#2

b4 1
b4 1
f5 2

d5 1
d5 .5-
d5 .25-
d5 .25 |
c5 .5-
b4 .5 |
b4 .25-
c5 .25-
d5 .25-
e5 .25 |

d5 .5-
f4 .5-
b4 .5-
b4 .5 |
b4 .5-
f4 .5 |
b4 .5-
b4 .25-
b4 .25 |

f5 .5-
b4 .5 |
b4 .5-
b4 .25-
c5 .25 |
b4 .5-
a4 .5-
g4 .5-
f4 .5 |

b4 1
b4 1
f5 2

d5 1
d5 .5-
d5 .25-
d5 .25 |
c5 .5-
b4 .5 |
b4 .25-
c5 .25-
d5 .25-
e5 .25 |

f5 .5-
f4 .5-
b4 .5-
b4 .5 |
b4 .5-
f4 .5 |
b4 .5-
b4 .25-
b4 .25 |

f5 .5-
b4 .5 |
b4 .5-
b4 .25-
c5 .25 |
b4 .5-
a4 .5-
g4 .5-
f4 .5 |



57.69225 per ”.25”
115.3845 per ”.5”
173.077 per ”.75”
230.769ms per ”1”
461.538ms per ”2”

923.077ms per set (measure or ”4”)

---------------------

#3

g4 .5-
a4 .5--
a4 .5-
b4 .5--
b4 .5-
f4 .5--
f4 .5-
f4 .5--

f4 4 |

g4 .5-
b4 .5--
b4 .5-
d5 .5--
d5 .5-
b4 .5--
b4 .5-

b4 4 |

g4 .5-
a4 .5--
a4 .5-
b4 .5--
b4 .5-
f4 .5--
f4 .5-
f4 .5--

f4 .5-
c5 .5--
c5 .5-
b4 .5--
b4 1 |
00 .5
c5 .5

d5 .5-
c5 .5--
c5 .5-
d5 .5--
d5 .5-
d5 .5 |
f5 1--

f5 .5-
b4 .5--
b4 3 |

	




57.69225 per ”.25”
115.3845 per ”.5”
173.077 per ”.75”
230.769ms per ”1”
461.538ms per ”2”
923.077ms per set (measure or ”4”)



---------------------


#4

g5 .5-
b5 .5-
a5 .5-
b5 .5 |
b5 .5-
b5 .5-
c6 .5-
b5 .5 |

c6 .5-
b5 .5-
c6 .5-
b5 .5 |
d6 .5-
b5 .5-
c6 .5-
d6 .5 |

g5 .5-
a5 .5-
b5 .5-
f5 .5 |
b5 .5-
f5 .5-
e5 .5-
d5 .5 |

c5 .5-
b4 .5-
c6 .5-
g5 .5 |
d6 .5-
f5 .5-
c6 .5-
g5 .5 |

*/
