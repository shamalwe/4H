#include "Persona.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
    Persona persona1("Shamal", "Welikadage", 17);

    persona1.Saluta();
    persona1.Stampavoti();
    int r= persona1.Media();
    cout<< "la mia media e': "<< r <<endl;

}