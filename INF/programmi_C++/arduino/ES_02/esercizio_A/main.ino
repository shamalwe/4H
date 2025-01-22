#include "Led.h"
#include "Puls.h"
#include <Arduino.h>

LED ledRed(13);
LED ledYellow(11);
LED ledGreen(9);
LED ledBlue(7);
Pulsante pulsRed(12);
Pulsante pulsYellow(10);
Pulsante pulsGreen(8);
Pulsante pulsBlue(6);

void setup() {
 /* if(pulsBlue.premi())
  {
    ledBlue.test(1);
  }
  */

}

void loop() 
{
    
  if (pulsBlue.premi()) 
  {
    ledBlue.accendi();
  } 
  else
  {
    ledBlue.spegni();
  }
  if (pulsGreen.premi()) 
  {
    ledGreen.accendi(2000);
  } 
  else
  {
    ledGreen.spegni();
  }
  if (pulsRed.premi()) 
  {
    ledRed.accendi();
  } 
  else
  {
    ledRed.spegni(2000);
  }
  if (pulsYellow.premi()) 
  {
    ledYellow.accendi(2000);
  } 
  else
  {
    ledYellow.spegni(2000);
  }

}
