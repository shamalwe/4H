#include <iostream>
#include<cmath>
#include "Rettangolo.h"

using namespace std;

        Rettangolo::Rettangolo() {
        altezza = 0;
        base = 0;
    }

        Rettangolo::Rettangolo(double parametro) {
        altezza = parametro;
        base = parametro;
    }

        Rettangolo::Rettangolo(double altezza, double base=2) {
        this->altezza = altezza;
        this->base = base;
    }

        Rettangolo::~Rettangolo() {
        cout<<"hai chiamato distruttore"<<endl;
    }

    double Rettangolo::Perimetro() {
        return (base + altezza) * 2;
    }

    double Rettangolo::Area() {
        return base * altezza;
    }

    double Rettangolo::Diagonale() {
        return sqrt(altezza*altezza + base*base);
    }

    void Rettangolo::stampa() {

        cout<<"Il valore dell'altezza e' "<<altezza<<endl;
        cout<<"Il valore della base e' "<<base<<endl;
        cout<<"Il valore delle perimetro e' "<<Perimetro()<<endl;
        cout<<"Il valore dell'area e' "<<Area()<<endl;
        cout<<"Il valore della diagonale e' "<<Diagonale()<<endl;
        cout<<"fine della parte "<<endl;
    }

