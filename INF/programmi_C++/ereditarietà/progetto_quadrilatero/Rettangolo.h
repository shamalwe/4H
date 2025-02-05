#ifndef RETTANGOLO_H 
#define RETTANGOLO_H
#include "Quadrilatero.h"

class Rettangolo : public Quadrilatero {
    
    private:

    public:

    Rettangolo(int base,int altezza);
    int Perimetro();
    int Area();
    void stampa();
};

#endif