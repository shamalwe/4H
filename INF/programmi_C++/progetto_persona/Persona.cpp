#include "Persona.h"
#include <iostream>
#include <string>
using namespace std;

Persona::Persona(string nome, string cognome, int eta, int voti[]) {
        this->nome= nome;
        this->cognome= cognome;
        this->eta= eta;
        for(int i=0; i<8; i++) {
        }
    }

void Persona::saluta() {
        cout<< "Ciao sono " <<nome<<" "<<cognome<<" e ho "<<eta<<" anni"<< endl;
    }

