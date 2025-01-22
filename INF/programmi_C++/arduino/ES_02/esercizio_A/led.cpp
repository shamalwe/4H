#include "Led.h"
#include <Arduino.h>

    LED::LED(int piedino) 
    {
      pin = piedino;
      pinMode(pin, OUTPUT);
    }

    void LED::accendi() 
    {
      digitalWrite(pin, HIGH);
    }

    void LED::accendi(int durata) 
    {
      digitalWrite(pin, HIGH);
      delay(durata);
    }

    void LED::spegni() 
    {
      digitalWrite(pin, LOW);
    }

    void LED::spegni(int ritardo) 
    {
      digitalWrite(pin, LOW);
      delay(ritardo);
    }

    void LED::lampeggio(int nrLampeggi, int durata) {
      for(int i=0; i<nrLampeggi; i++) {
        accendi(durata);
        delay(500);
        spegni();
        delay(500);
      }
    } 

    void LED::test(int numeroTest) {
      accendi();  // Accendi il LED
      delay(3000);    
      spegni();   // Spegni il LED
      delay(3000);  
      lampeggio(5, 500);
    }