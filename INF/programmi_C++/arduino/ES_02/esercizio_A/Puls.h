#ifndef PULS_H
#define PULS_H

class Pulsante 
{
  private:
    int pin;

  public:
    Pulsante(int piedino);

    bool premi();

};
#endif