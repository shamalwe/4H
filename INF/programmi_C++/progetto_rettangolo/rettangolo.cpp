#include <iostream>
#include<cmath>

using namespace std;

class Rettangolo {
    
    private:

        double altezza;
        double base;

    public:
        
        Rettangolo() {
        altezza = 0;
        base = 0;
    }

        Rettangolo(double parametro) {
        altezza = parametro;
        base = parametro;
    }

        Rettangolo(double altezza, double base) {
        this->altezza = altezza;
        this->base = base;
    }

        ~Rettangolo() {
        cout<<"hai chiamato distruttore"<<endl;
    }

    double Perimetro() {
        return (base + altezza) * 2;
    }

    double Area() {
        return base * altezza;
    }

    double Diagonale() {
        return sqrt(altezza*altezza + base*base);
    }

    void stampa() {

        cout<<"Il valore dell'altezza e' "<<altezza<<endl;
        cout<<"Il valore della base e' "<<base<<endl;
        cout<<"Il valore delle perimetro e' "<<Perimetro()<<endl;
        cout<<"Il valore dell'area e' "<<Area()<<endl;
        cout<<"Il valore della diagonale e' "<<Diagonale()<<endl;
        cout<<"fine della parte "<<endl;
    }
};

int main() {

    double base, altezza, parametro;
    
    Rettangolo r1;
    r1.stampa();

    cout<<"Inserisci il valore del parametro"<<endl;
    cin>>parametro;
    Rettangolo r2(parametro);
    //r2.~Rettangolo();
    r2.stampa();

    cout<<"Inserisci il valore dell'altezza"<<endl;
    cin>>altezza;

    cout<<"Inserisci il valore della base"<<endl;
    cin>>base;

    Rettangolo r3(altezza, base);

    cout<<"[VALORI DEL PRIMO RETTANGOLO]"<<endl;
    cout<<"-------------------------------------"<<endl;
    r3.stampa();
}
 
