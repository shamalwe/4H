#include <stdio.h>

int main() 
{
    FILE *file;
    char ch;
    int numCaratteri = 0, numParole = 0, numRighe = 0;
    int statoParola= 0; // Per indicare se siamo all'interno di una parola

    file = fopen("testo.txt", "r");
    if (file == NULL) 
    {
        printf("Errore nell'apertura del file.\n");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) 
    {

        // Conto i caratteri 
        if (ch != ' ' && ch != '\t' && ch != '\n') 
        {
            numCaratteri++;
        }

        //conto le righe
        if (ch == '\n') 
        {
            numRighe++;
        }

        //conto le parole
        if (ch != ' ' && ch != '\t' && ch != '\n' && statoParola == 0) 
        {
            statoParola = 1;  // Siamo all'interno di una parola
            numParole++;
        } 
        else if (ch == ' ' || ch == '\t' || ch == '\n') 
        {
            statoParola = 0; 
        }
    }

    // Considera l'ultima riga se non finisce con un '\n'
    if (ch != '\n' && numCaratteri != 0) 
    {
        numRighe++;
    }

    fclose(file);

    printf("Caratteri: %d\n", numCaratteri);
    printf("Parole: %d\n", numParole);
    printf("Righe: %d\n", numRighe);

    return 0;
}