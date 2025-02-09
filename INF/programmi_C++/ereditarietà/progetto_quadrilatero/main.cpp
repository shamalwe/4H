/*
 * 
 * g++ main.cpp Rettangolo.cpp Quadrilatero.cpp Quadrato.cpp
 */
#include <iostream>
#include "Rettangolo.h"
#include "Quadrilatero.h"
#include "Quadrato.h"

using namespace std;

int main() {
    Quadrilatero E1;
    cout << "\n[VALORI DEL PRIMO QUADRILATERO]" << endl;
    cout << "-------------------------------------" << endl;
    E1.stampa();

    Quadrilatero E2(8,3,4,5);
    cout << "\n[VALORI DEL SECONDO QUADRILATERO]" << endl;
    cout << "-------------------------------------" << endl;
    E2.stampa();
    E2.setLati(12,3);
    cout<< "\nfacendo il metodo set per tutti i lati" << endl;
    E2.getLati();
    
    Rettangolo R1(5,7, "rosso");
    cout << "\n[VALORI DEL RETTANGOLO]" << endl;
    cout << "-------------------------------------" << endl;
    R1.stampa();

    Quadrato Q1(4);
    cout << "\n[VALORI DEL QUADRATO]" << endl;
    cout << "-------------------------------------" << endl;
    Q1.stampa();

    return 0;
}