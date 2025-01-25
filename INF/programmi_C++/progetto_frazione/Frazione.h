#ifndef FRAZIONE_H
#define FRAZIONE_H

class Frazione {
    private:
        int numeratore;
        int denominatore;
    public:
        Frazione();
        
        Frazione(int numeratore);

        Frazione(int numeratore, int denominatore);

        void stampa();

};
#endif