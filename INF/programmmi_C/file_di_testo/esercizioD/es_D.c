#include <stdio.h>

int main() 
{
    FILE *fileNumeri;
    FILE *filePari;
    FILE *fileDispari;
    int numero;

    fileNumeri = fopen("numeri.txt", "r");
    filePari = fopen("pari.txt", "w");
    fileDispari = fopen("dispari.txt", "w");
    if (fileNumeri == NULL) 
    {
        printf("Errore nell'apertura del file numeri.txt!\n");
        return 1;
    }

    // Leggiamo i numeri dal file
    while (fscanf(fileNumeri, "%d", &numero) != EOF) 
    {

        if (numero % 2 == 0) 
        {
            fprintf(filePari, "%d ", numero);
        } else 
        {
            fprintf(fileDispari, "%d ", numero);
        }
    }

    fclose(fileNumeri);
    fclose(filePari);
    fclose(fileDispari);

    printf("Tutti i numeri sono stati copiati nei propri file assegnati\n");

    return 0;
}