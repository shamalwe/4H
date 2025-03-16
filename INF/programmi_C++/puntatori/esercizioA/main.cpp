//Welikadage Shamal
#include "Lista.h"
#include <iostream>
using namespace std;

int main() {
    Lista lista;

    lista.inserisciInTesta(7);
    lista.inserisciInTesta(6);
    lista.inserisciInTesta(5);

    lista.inserisciInCoda(8);
    lista.inserisciInCoda(9);

    lista.stampa();
    cout << "\n";
    lista.cancella(5);
    lista.stampa();
    cout << "\n";

    lista.cerca(9);
    
    cout << "\n";
    int r = lista.contaNodi();
    cout << "il numero di nodi presente nella lista e' " << r << "\n";

    return 0;
}