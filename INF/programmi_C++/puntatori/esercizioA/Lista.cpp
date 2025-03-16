//Welikadage Shamal
#include "Lista.h"
#include <iostream>
using namespace std;

Lista::Lista() 
{
    testa = nullptr;
}

void Lista::inserisciInTesta(int valore) 
{
    Nodo* nuovoNodo = new Nodo;
    nuovoNodo->dato = valore;
    nuovoNodo->next = testa; 
    testa = nuovoNodo; 
}

void Lista::inserisciInCoda(int valore) 
{
    Nodo* nuovoNodo = new Nodo;
    nuovoNodo->dato = valore;
    nuovoNodo->next = nullptr; 

    if (testa == nullptr) 
    {
        testa = nuovoNodo;
        return;
    }
    
    Nodo* p = testa;
    while (p->next != nullptr) 
    {
        p = p->next;
    }
    p->next = nuovoNodo; // Colleghiamo il nuovo nodo alla fine
}

void Lista::cancella(int valore) 
{
    if (testa == nullptr) 
    {
        return;
    }

    if(testa->dato == valore) 
    {
        Nodo* p = testa;
        testa = testa->next; 
        delete p; 
        return;
    }

    
    Nodo* p = testa;
    while (p->next != nullptr && p->next->dato != valore) 
    {
        p = p->next;
    }

    if (p->next == nullptr) // Se il valore non è stato trovato
    {
        return;
    }

    Nodo* nodoDaEliminare = p->next;
    p->next = nodoDaEliminare->next; // Saltiamo il nodo eliminato
    delete nodoDaEliminare;
}

void Lista::cerca(int valore) 
{   
    Nodo* p = testa;
    while (p != nullptr) 
    {
        if(p->dato == valore) 
        {
            cout << "Elemento trovato nella lista." << "\n";
        } 
        else 
        {
            cout << "Elemento non trovato." << "\n";
        }
        p = p->next; 
    }
}

void Lista::stampa() 
{
    Nodo* p = testa;
    while (p != nullptr) 
    {
        cout << p->dato << "\n";
        p = p->next;
    }
    cout << "NULL" << "\n"; //fine della lista
}

int Lista::contaNodi() 
{
    Nodo* p = testa;
    int cont = 0;

    while (p != nullptr) 
    {
        cont++; 
        p = p->next; 
    }

    return cont;
}

void Lista::rimuoviDuplicati() 
{
    Nodo* corrente = testa;

    while (corrente != nullptr) 
    {
        Nodo* p = corrente;
        while (p->next != nullptr) 
        {
            if (p->next->dato == corrente->dato) 
            {
                
                Nodo* nodoDaEliminare = p->next;
                p->next = nodoDaEliminare->next;
                delete nodoDaEliminare;
            } 
            else 
            {
                p = p->next; 
            }
        }
        corrente = corrente->next;
    }
}