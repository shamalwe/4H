#include "Rettangolo.h"
#include "Quadrilatero.h"
#include <iostream>

using namespace std;

Rettangolo::Rettangolo(int base,int altezza, string colore):Quadrilatero(base,altezza,base,altezza) {
    this->colore = colore;
}

int Rettangolo::Perimetro() {
    return (l1 + l2) * 2;
}

int Rettangolo::Area() {
    return l1 * l2;
}

void Rettangolo::stampa() {
    cout << "Il valore della base e': " << l1 << endl;
    cout << "Il valore dell'altezza e': " << l2 << endl;
    cout << "il colore del rettangolo e': " << colore << endl;
    cout << "Il valore del perimetro e': " << Perimetro() << endl;
    cout << "il valore dell'area e': " << Area() << endl;
}