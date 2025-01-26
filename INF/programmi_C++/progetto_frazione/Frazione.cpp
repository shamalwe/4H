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