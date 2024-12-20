#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    int cateto1 = 2;
    int cateto2 = 5;
    int ipotenusa = 8;
    int pid = fork();

    if (pid == 0) {
        printf("Perimetro (figlio): %d\n", cateto1 + cateto2 + ipotenusa);
    } 
    else {
        sleep(1); // Il processo padre aspetta 1 secondo
        printf("Area (padre): %d\n", (cateto1 * cateto2) / 2);
    }
    return 0;
}
