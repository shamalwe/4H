#include <stdio.h>

void cesareCrypt(FILE* InFile, FILE* outFile, int key);
void cesareDecrypt(FILE* InFile, FILE* outFile, int key);

int main() 
{
    FILE *inFile = fopen("input.txt", "r");
    FILE *outFileCrypt = fopen("output.encrypt.txt", "w");
    FILE *outFileDecrypt;

    int chiave = 4;  // Chiave per la crittografia

    if (inFile == NULL) 
    {
        perror("Errore nell'apertura dei file");
        return 1;
    }

    cesareCrypt(inFile, outFileCrypt, chiave);

    fclose(outFileCrypt);  // Chiudo il file crittografato
    outFileCrypt = fopen("output.encrypt.txt", "r");  // Lo riapro in modalità lettura
    outFileDecrypt = fopen("output.decrypt.txt", "w");

    if (outFileCrypt == NULL) 
    {
        perror("Errore nell'apertura del file crittografato");
        return 1;
    }

    cesareDecrypt(outFileCrypt, outFileDecrypt, chiave);

    fclose(inFile);
    fclose(outFileCrypt);
    fclose(outFileDecrypt);

    return 0;
}

void cesareCrypt(FILE* InFile, FILE* outFile, int key) 
{
    char car;
    
    while ((car = fgetc(InFile)) != EOF) 
    {
        // Crittografia
        if (car >= 'A' && car <= 'Z') 
        {
            car = ((car - 'A' + key) % 26) + 'A'; 
        } 
        else if (car >= 'a' && car <= 'z') 
        {
            car = ((car - 'a' + key) % 26) + 'a'; 
        }
        fputc(car, outFile);
    }
}

void cesareDecrypt(FILE* InFile, FILE* outFile, int key) 
{
    char car;
    
    while ((car = fgetc(InFile)) != EOF) 
    {
        // Decrittografia
        if (car >= 'A' && car <= 'Z') 
        {
            car = ((car - 'A' - key + 26) % 26) + 'A'; 
        } 
        else if (car >= 'a' && car <= 'z') 
        {
            car = ((car - 'a' - key + 26) % 26) + 'a'; 
        }
        fputc(car, outFile);
    }
}
