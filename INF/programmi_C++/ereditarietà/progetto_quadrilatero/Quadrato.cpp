#include "Rettangolo.h"
#include "Quadrato.h"
#include <iostream>

using namespace std;

Quadrato::Quadrato(int lato):Rettangolo(lato, lato, "colore") {

}
    int Quadrato::Perimetro() {
        return l1*4;
    }
    int Quadrato::Area() {
        return l1*l1;
    }
    void Quadrato::stampa() {
        cout << "Il valore del lato e': " << l1 << endl;
        cout << "Il valore del perimetro e': " << Perimetro() << endl;
        cout << "il valore dell'area e': " << Area() << endl;
    }