#ifndef LED_H
#define LED_H

class LED 
{
  private:
    int pin;

  public:
    LED(int piedino); 
    
    void accendi();
    void accendi(int durata); 

    void spegni(); 
    void spegni(int ritardo);

    void lampeggio(int nrLampeggi, int durata);

    void test(int numeroTest);

};
#endif
