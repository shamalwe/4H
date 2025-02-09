#include "Quadrilatero.h"
#include <iostream>
using namespace std;

Quadrilatero::Quadrilatero() {
    l1=1;
    l2=2;
    l3=3;
    l4=4;
}
Quadrilatero::Quadrilatero(int l1,int l2,int l3,int l4)
{
    this->l1 = l1;
    this->l2 = l2;
    this->l3 = l3;
    this->l4 = l4;
}

int Quadrilatero::Perimetro() {
    return l1 + l2 + l3 + l4;
}

void Quadrilatero::stampa() {
    cout << "Primo lato: " << l1 << endl;
    cout << "Secondo lato: " << l2 << endl;
    cout << "Terzo lato: " << l3 << endl;
    cout << "Quarto lato: " << l4 << endl;
    cout << "Il valore del perimetro e': " << Perimetro() << endl;
}

void Quadrilatero::setLati(int l1, int l2, int l3, int l4) {
    this->l1= l1;
    this->l2= l2;
    this->l3= l3;
    this->l4= l4;
}

void Quadrilatero::getLati() {
    cout <<"il primo lato e': "<< l1 <<endl;
    cout <<"il secondo lato e': "<< l2 <<endl;
    cout <<"il terzo lato e': "<< l3 <<endl;
    cout <<"il quarto lato e': "<< l4 <<endl;
}