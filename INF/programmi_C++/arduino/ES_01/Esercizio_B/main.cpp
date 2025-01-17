#include "Led.h"
#include "Pulsante.h"

LED ledGreen(12);
LED ledBlue(13);
Pulsante pulsante(2);

void setup() {}

void loop() 
{
    
  if (pulsante.premi()) 
  {
    ledGreen.spegni();
    ledBlue.accendi();
  } 
  else 
  {
    ledGreen.accendi();
    ledBlue.spegni();
  }
}