#include <iostream>
#include "Rettangolo.h"

using namespace std;

int main() {

    double base, altezza, parametro;
    
    Rettangolo r1;
    r1.stampa();

    cout<<"Inserisci il valore del parametro"<<endl;
    cin>>parametro;
    Rettangolo r2(parametro);
    //r2.~Rettangolo();
    r2.stampa();

    cout<<"Inserisci il valore dell'altezza"<<endl;
    cin>>altezza;

    //cout<<"Inserisci il valore della base"<<endl;
    //cin>>base;

    Rettangolo r3(altezza);

    cout<<"[VALORI DEL PRIMO RETTANGOLO]"<<endl;
    cout<<"-------------------------------------"<<endl;
    r3.stampa();
}