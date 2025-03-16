//Welikadage Shamal
#ifndef LISTA_H
#define LISTA_H

struct Nodo {
    int dato;
    Nodo* next;
};

class Lista 
{
    private:
    Nodo* testa;

    public:
    Lista();
    void inserisciInTesta(int valore);
    void inserisciInCoda(int valore);
    void cancella(int valore);
    void cerca(int valore);
    void stampa();
    int contaNodi();
    void rimuoviDuplicati();
};

#endif