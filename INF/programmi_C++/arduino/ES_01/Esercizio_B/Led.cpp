#include "Led.h"

    LED::LED(int piedino) 
    {
      pin = piedino;
      pinMode(pin, OUTPUT);
    }

    void LED::accendi() 
    {
      digitalWrite(pin, HIGH);
    }

    void LED::spegni() 
    {
      digitalWrite(pin, LOW);
    }