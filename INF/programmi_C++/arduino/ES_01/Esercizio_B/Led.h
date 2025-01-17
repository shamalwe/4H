#ifndef LED_H
#define LED_H

class LED 
{
  private:
    int pin;

  public:
    LED(int piedino); 
    
    void accendi(); 

    void spegni(); 

};
#endif