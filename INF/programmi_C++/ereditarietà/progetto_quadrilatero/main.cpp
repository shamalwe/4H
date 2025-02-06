/*
 * 
 * g++ main.cpp Rettangolo.cpp Quadrilatero.cpp
 */
#include <iostream>
#include "Rettangolo.h"
#include "Quadrilatero.h"
#include "Quadrato.h"

using namespace std;

int main() {
    
    Quadrilatero E1(8,3,4,5);
    Rettangolo R1(5,7);
    Quadrato Q1(4);

    cout << "\n[VALORI DEL QUADRILATERO]" << endl;
    cout << "-------------------------------------" << endl;
    E1.stampa();
    E1.setLato(12);
    int r= E1.getLato();
    cout<< "\nfacendo il metodo set per il primo lato" << endl;
    E1.stampa();

    cout << "\n[VALORI DEL RETTANGOLO]" << endl;
    cout << "-------------------------------------" << endl;
    R1.stampa();

    cout << "\n[VALORI DEL QUADRATO]" << endl;
    cout << "-------------------------------------" << endl;
    Q1.stampa();

    return 0;
}