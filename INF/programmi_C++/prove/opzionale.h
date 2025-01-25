#ifndef TEST_H
#define TEST_H
#include <string>
class Test {
    public:
    void stampaMessaggio(std::string messaggio = "Ciao Mondo!");
    void stampanumeri(int num1, int num2= 45);
};
#endif