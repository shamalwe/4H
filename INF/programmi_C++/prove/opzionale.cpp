#include <iostream>
#include "opzionale.h"

void Test::stampaMessaggio(std::string messaggio /*= "Ciao Mondo!"*/) {
    std::cout << messaggio << std::endl;
}

// se nella definizione della funzione vai ad avvalorare un altra volta la variabile come hai fatto nell'opzionale.h,
// ti darà errore perchè il compilatore lo ha gia compilato una volta e tu non puoi ridefinirlo,
// perche darà errore al compilatore

void Test::stampanumeri(int num1, int num2)
{
    std::cout << num1 << std::endl;
    std::cout << num2 << std::endl;
}