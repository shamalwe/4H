#ifndef RETTANGOLO_H 
#define RETTANGOLO_H
#include "Quadrilatero.h"
#include <string>

class Rettangolo : public Quadrilatero {
    
private:
    string colore;
public:

    Rettangolo(int base,int altezza, string colore);
    int Perimetro();
    int Area();
    void stampa();
};

#endif