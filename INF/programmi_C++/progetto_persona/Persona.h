#ifndef PERSONA_H
#define PERSONA_H
#include <string>
#include <iostream>
using namespace std;

class Persona {

private:
    string nome;
    string cognome;
    int eta;
    int voti[8];
    
public:
    Persona(string nome= "Mario", string cognome= "Rossi", int eta= 24);

    void Saluta();

    void Stampavoti();
    
    int Media();
    

};

#endif