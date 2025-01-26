#ifndef FRAZIONE_H
#define FRAZIONE_H

class Frazione {
    private:
        int numeratore;
        int denominatore;
    public:
        Frazione(int numeratore= 2, int denominatore= 2);

        void stampa();

        int calcolaMCD();

        void semplificaFrazione();

};
#endif