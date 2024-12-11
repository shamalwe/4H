// Classe LED
class LED {
  private:
    int pin; // Pin del LED
    int stato; // stato del LED

  public:
    // Costruttore: imposta la modalità del pin del LED come output
    LED(int p) {
      pin = p;
      pinMode(pin, OUTPUT);
    }

    // Metodo per accendere il LED
    void accendi() {
      digitalWrite(pin, HIGH);
      stato= 1;
    }

    // Metodo per spegnere il LED
    void spegni() {
      digitalWrite(pin, LOW);
      stato= 0;
    }

    //Metodo per invertire lo stato del LED
    void inverti() {
      if(stato==1) {
        spegni();
      }
      else {
        accendi();
      }
    }

    //Metodo per fare lampeggiare quante volte voglio io
    void lampeggio(int nrLampeggi) {
      for(int i=0; i<nrLampeggi; i++) {
        accendi();
        delay(500);
        spegni();
        delay(500);
      }
    } 

    //Metodo per implementare tutte le altre funzionalità
    void test(int numeroTest) {
      accendi();  // Accendi il LED
      delay(3000);    
      //inverti(); // Inverti lo stato del LED
      //delay(500);
      spegni();   // Spegni il LED
      delay(3000);  
      lampeggio(5);
    }
    
};

// Crea un oggetto LED sulla porta 11
LED led(11);

void setup() {
  // Non c'è nulla da fare qui
}

void loop() {
  led.test(1);
  delay(8000);
}