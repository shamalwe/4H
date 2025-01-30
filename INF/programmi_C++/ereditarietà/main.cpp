/**
 * 
 * g++ main.cpp Rettangolo.cpp Quadrilatero.cpp
 */
#include <iostream>
#include "Rettangolo.h"
#include "Quadrilatero.h"

using namespace std;

int main() {
    
    Quadrilatero E1(9,3,6,5);
    Rettangolo R1(5,7);

    cout << "\n[VALORI DEL QUADRILATERO]" << endl;
    cout << "-------------------------------------" << endl;
    E1.stampa();

    cout << "\n[VALORI DEL RETTANGOLO]" << endl;
    cout << "-------------------------------------" << endl;
    R1.stampa();

    return 0;
}