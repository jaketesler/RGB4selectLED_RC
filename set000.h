// set000.h //

int set000brightnessR = 0;
int set000brightnessG = 0;
int set000brightnessB = 0;
int set000Rup = 0;
int set000Gup = 0;
int set000Bup = 0;
int set000fadeAmount = 5;
int set000x = 1;

#define R 9
#define G 10
#define B 11

  void set000() 
  { 
    if(set000x == 1)
    {
      if (set000brightnessR < 255 && set000Rup == 0)  
      {
        set000brightnessR = set000brightnessR + set000fadeAmount;
        //Serial.print("not 255 Rup 0: ");
        //Serial.println(set000brightnessR);
      }
      else if (set000brightnessR >= 255 && set000Rup == 0)
      {
        set000Rup = 1;
        set000brightnessR = set000brightnessR - set000fadeAmount;
        //Serial.print("is 255 Rup 0: ");
        //Serial.println(set000brightnessR);
      }
      else if (set000brightnessR < 255 && set000Rup == 1 && set000brightnessR >0)  
      {
        set000brightnessR = set000brightnessR - set000fadeAmount;
        //Serial.print("not 255 Rup 1: ");
        //Serial.println(set000brightnessR);
      }
      else if (set000brightnessR <= 5 && set000Rup == 1)
      {
        set000Rup = 0;
        set000x = 2;
        set000brightnessR = 0;
        //Serial.print("is 0 Rup 1: ");
        //Serial.println(set000brightnessR);
      }
    }
    
    
    
    else if(set000x == 2)
    {
       if (set000brightnessG < 255 && set000Gup == 0)  
      {
        set000brightnessG = set000brightnessG + set000fadeAmount;
        //Serial.print("not 255 Gup 0: ");
        //Serial.println(set000brightnessG);
      }
      else if (set000brightnessG >= 255 && set000Gup == 0)
      {
        set000Gup = 1;
        set000brightnessG = set000brightnessG - set000fadeAmount;
        //Serial.print("is 255 Gup 0: ");
        //Serial.println(set000brightnessG);
      }
      else if (set000brightnessG < 255 && set000Gup == 1 && set000brightnessG >0)  
      {
        set000brightnessG = set000brightnessG - set000fadeAmount;
        //Serial.print("not 255 Gup 1: ");
        //Serial.println(set000brightnessG);
      }
      else if (set000brightnessG <= 5 && set000Gup == 1)
      {
        set000Gup = 0;
        set000x = 3;
        set000brightnessG = 0;
        //Serial.print("is 0 Gup 1: ");
        //Serial.println(set000brightnessG);
      }
    }
    
    else if(set000x == 3)
    {
        if (set000brightnessB < 255 && set000Bup == 0)  
      {
        set000brightnessB = set000brightnessB + set000fadeAmount;
        //Serial.print("not 255 Bup 0: ");
        //Serial.println(set000brightnessB);
      }
      else if (set000brightnessB >= 255 && set000Bup == 0)
      {
        set000Bup = 1;
        set000brightnessB = set000brightnessB - set000fadeAmount;
        //Serial.print("is 255 Bup 0: ");
        //Serial.println(set000brightnessB);
      }
      else if (set000brightnessB < 255 && set000Bup == 1 && set000brightnessB >0)  
      {
        set000brightnessB = set000brightnessB - set000fadeAmount;
        //Serial.print("not 255 Bup 1: ");
        //Serial.println(set000brightnessB);
      }
      else if (set000brightnessB <= 5 && set000Bup == 1)
      {
        set000Bup = 0;
        set000x = 1;
        set000brightnessB = 0;
        //Serial.print("is 0 Bup 1: ");
        //Serial.println(set000brightnessB);
      }
    }
  }
