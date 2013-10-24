// onetoomany.h //

int onebrightnessR = 0;
int onebrightnessG = 0;
int onebrightnessB = 0;
int oneRup = 0;
int oneGup = 0;
int oneBup = 0;
int onefadeAmount = 5;
int onex = 1;

#define R 9
#define G 10
#define B 11

  void onetoomany() 
  { 
    
    tone(BUZZ, 97, 400);
    
    if(onex == 1)
    {
      if (onebrightnessR < 255 && oneRup == 0)  
      {
        onebrightnessR = onebrightnessR + onefadeAmount;
        //Serial.print("not 255 Rup 0: ");
        //Serial.println(onebrightnessR);
      }
      else if (onebrightnessR >= 255 && oneRup == 0)
      {
        oneRup = 1;
        onebrightnessR = onebrightnessR - onefadeAmount;
        //Serial.print("is 255 Rup 0: ");
        //Serial.println(onebrightnessR);
      }
      else if (onebrightnessR < 255 && oneRup == 1 && onebrightnessR >0)  
      {
        onebrightnessR = onebrightnessR - onefadeAmount;
        //Serial.print("not 255 Rup 1: ");
        //Serial.println(onebrightnessR);
      }
      else if (onebrightnessR <= 5 && oneRup == 1)
      {
        oneRup = 0;
        onex = 2;
        onebrightnessR = 0;
        //Serial.print("is 0 Rup 1: ");
        //Serial.println(onebrightnessR);
      }
    }
    
    
    
    else if(onex == 2)
    {
       if (onebrightnessG < 255 && oneGup == 0)  
      {
        onebrightnessG = onebrightnessG + onefadeAmount;
        //Serial.print("not 255 Gup 0: ");
        //Serial.println(onebrightnessG);
      }
      else if (onebrightnessG >= 255 && oneGup == 0)
      {
        oneGup = 1;
        onebrightnessG = onebrightnessG - onefadeAmount;
        //Serial.print("is 255 Gup 0: ");
        //Serial.println(onebrightnessG);
      }
      else if (onebrightnessG < 255 && oneGup == 1 && onebrightnessG >0)  
      {
        onebrightnessG = onebrightnessG - onefadeAmount;
        //Serial.print("not 255 Gup 1: ");
        //Serial.println(onebrightnessG);
      }
      else if (onebrightnessG <= 5 && oneGup == 1)
      {
        oneGup = 0;
        onex = 3;
        onebrightnessG = 0;
        //Serial.print("is 0 Gup 1: ");
        //Serial.println(onebrightnessG);
      }
    }
    
    else if(onex == 3)
    {
        if (onebrightnessB < 255 && oneBup == 0)  
      {
        onebrightnessB = onebrightnessB + onefadeAmount;
        //Serial.print("not 255 Bup 0: ");
        //Serial.println(onebrightnessB);
      }
      else if (onebrightnessB >= 255 && oneBup == 0)
      {
        oneBup = 1;
        onebrightnessB = onebrightnessB - onefadeAmount;
        //Serial.print("is 255 Bup 0: ");
        //Serial.println(onebrightnessB);
      }
      else if (onebrightnessB < 255 && oneBup == 1 && onebrightnessB >0)  
      {
        onebrightnessB = onebrightnessB - onefadeAmount;
        //Serial.print("not 255 Bup 1: ");
        //Serial.println(onebrightnessB);
      }
      else if (onebrightnessB <= 5 && oneBup == 1)
      {
        oneBup = 0;
        onex = 1;
        onebrightnessB = 0;
        //Serial.print("is 0 Bup 1: ");
        //Serial.println(onebrightnessB);
      }
    }
  }
