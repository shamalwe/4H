#include "Frazione.h"
#include <iostream>
using namespace std;

Frazione::Frazione() {
    numeratore = 1;
    denominatore = 1;
}

Frazione::Frazione(int numeratore) {
    this->numeratore = numeratore;
    denominatore = 2;
}

Frazione::Frazione(int numeratore, int denominatore) {
    this ->numeratore = numeratore;
    this ->denominatore = denominatore;
}

void Frazione::stampa() {
    cout<<"numeratore: "<<numeratore<<endl;
    cout<<"denominatore: "<<denominatore<<endl;
}