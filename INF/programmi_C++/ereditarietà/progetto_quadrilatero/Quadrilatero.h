#ifndef QUADRILATERO_H
#define QUADRILATERO_H

class Quadrilatero {
    
    protected:

    int l1,l2,l3,l4;

    public:

    Quadrilatero(int l1,int l2,int l3,int l4);
    int Perimetro();
    int Area();
    void stampa();
    void setLato(int l1);
    int getLato();
};

#endif