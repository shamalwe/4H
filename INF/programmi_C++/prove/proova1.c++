#include <iostream>

using namespace std;

class Rettangolo {
    
    Rettangolo(double altezza, double base){
        this->altezza = altezza;
        this->base = base;
    }

    private:
    double altezza;
    double base;

    public:
    double Perimetro() {
        return (base + altezza) * 2;
    }

    double Area() {
        return base * altezza;
    }

    void stampa() {

        cout<<"Il valore dell'altezza e' "<<altezza<<endl;
        cout<<"Il valore della base e' "<<base<<endl;
        cout<<"Il valore delle perimetro e' "<<Perimetro()<<endl;
        cout<<"Il valore dell'area e' "<<Area()<<endl;
    }
};

int main() {

    Rettangolo R1;

    
    cout<<"[VALORI DEL PRIMO RETTANGOLO]"<<endl;
    cout<<"-------------------------------------"<<endl;
    R1.stampa();
}