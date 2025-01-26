#include "Frazione.h"
#include <iostream>
using namespace std;

Frazione::Frazione(int numeratore, int denominatore) {
    this ->numeratore = numeratore;
    this ->denominatore = denominatore;
}

void Frazione::stampa() {
    cout<<"numeratore: "<<numeratore<<endl;
    cout<<"denominatore: "<<denominatore<<endl;
}

// Funzione per semplificare la frazione
void Frazione::semplificaFrazione() {
    int a = numeratore;
    int b = denominatore;

    while (b != 0) {
        int resto = a % b;
        a = b;
        b = resto;
    }

    int mcd = a;
    numeratore /= mcd;
    denominatore /= mcd;
}