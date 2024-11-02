#include <stdio.h>

void cesareCrypt(FILE* inFile, FILE* outFile, int key);
void cesareDecrypt(FILE* inFile, FILE* outFile, int key);
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

    fclose(inFile);
    fclose(outFileCrypt);

    
    inFile = fopen("output.encrypt.txt", "r");
    outFileDecrypt = fopen("output.decrypt.txt", "w");

    if (inFile == NULL) 
    {
        perror("Errore nell'apertura dei file");
        return 1;
    }

    cesareDecrypt(inFile, outFileDecrypt, chiave);

    fclose(inFile);
    fclose(outFileDecrypt);

    return 0;
}

void cesareCrypt(FILE* inFile, FILE* outFile, int key) 
{
    char car;
    
    while (( car = fgetc(inFile)) != EOF) 
    {
        // Crittografia
        if ( car >= 'A' && car <= 'Z') 
        {
            car = (( car - 'A' + key) % 26) + 'A'; 
        } 
        else if ( car >= 'a' && car <= 'z') 
        {
            car = (( car - 'a' + key) % 26) + 'a'; 
        }
        fputc(car, outFile);
    }
}

void cesareDecrypt(FILE* inFile, FILE* outFile, int key) 
{
    char car;
    
    while ((car = fgetc(inFile)) != EOF) 
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