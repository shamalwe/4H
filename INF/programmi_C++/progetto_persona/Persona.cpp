#include "Persona.h"
#include <iostream>
#include <string>
using namespace std;

Persona::Persona(string nome, string cognome, int eta) {
        this->nome= nome;
        this->cognome= cognome;
        this->eta= eta;
        for(int i=0; i<8; i++) {
            voti[i]= 6;
        }
    }

void Persona::Saluta() {
        cout<< "Ciao sono " <<nome<<" "<<cognome<<" e ho "<<eta<<" anni"<< endl;
    }

void Persona::Stampavoti() {
    cout<<"\ni miei voti: "<<endl;
    for(int i=0;i<8;i++) {
        cout<<voti[i]<<endl;
    }
}
int Persona::Media() {
    int media=0;
    int somma=0;

    for(int i=0; i<8;i++) {
        somma+=voti[i];
    }

    media = somma/8;

    return media;
}


