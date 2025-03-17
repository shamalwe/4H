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
    nuovoNodo->info = valore;
    nuovoNodo->next = testa; 
    testa = nuovoNodo; 
}

int Lista::inserisciInCoda(int valore) 
{
    Nodo* nuovoNodo = new Nodo;
    nuovoNodo->info = valore;
    nuovoNodo->next = nullptr; 

    if (testa == nullptr) 
    {
        testa = nuovoNodo;
        return 0;
    }
    
    Nodo* p = testa;
    while (p->next != nullptr) 
    {
        p = p->next;
    }
    p->next = nuovoNodo; // Colleghiamo il nuovo nodo alla fine
    return 0;
}

int Lista::eliminazione(int valore) 
{
    if (testa == nullptr) 
    {
        return -1;
    }

    if(testa->info == valore) 
    {
        Nodo* p = testa;
        testa = testa->next; 
        delete p; 
        return  0;
    }

    
    Nodo* p = testa;
    while (p->next != nullptr && p->next->info != valore) 
    {
        p = p->next;
    }

    if (p->next == nullptr)
    {
        return -1;
    }

    Nodo* nodoDaEliminare = p->next;
    p->next = nodoDaEliminare->next; // Saltiamo il nodo eliminato
    delete nodoDaEliminare;
    return 0;
}

void Lista::cerca(int valore) 
{   
    Nodo* p = testa;
    while (p != nullptr) 
    {
        if(p->info == valore) 
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
        cout << p->info << "\n";
        p = p->next;
    }
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
            if (p->next->info == corrente->info) 
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