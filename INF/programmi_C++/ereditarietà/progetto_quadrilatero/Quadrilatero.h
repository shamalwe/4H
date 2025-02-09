#ifndef QUADRILATERO_H
#define QUADRILATERO_H

class Quadrilatero {
    
    protected:

    int l1,l2,l3,l4;

    public:

    Quadrilatero();
    Quadrilatero(int l1,int l2,int l3,int l4);
    int Perimetro();
    void stampa();
    void setLati(int l1=4, int l2=2, int l3=6, int l4=8);
    void getLati();
};

#endif