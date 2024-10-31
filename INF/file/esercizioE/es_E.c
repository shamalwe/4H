#include <stdio.h>

void cesareCrypt(FILE* inFile, FILE* outFile, int n);
void cesareDecrypt(FILE* inFile, FILE* outFile, int n);
int main() 
{
    FILE *inFile = fopen("input.txt", "r");
    FILE *outFileCrypt = fopen("output.encrypt.txt", "w");
    FILE *outFileDecrypt;

    int n = 4;  // Chiave per la crittografia

    if (inFile == NULL) 
    {
        perror("Errore nell'apertura dei file");
        return 1;
    }

    cesareCrypt(inFile, outFileCrypt, n);

    fclose(inFile);
    fclose(outFileCrypt);

    
    inFile = fopen("output.encrypt.txt", "r");
    outFileDecrypt = fopen("output.decrypt.txt", "w");

    if (inFile == NULL) 
    {
        perror("Errore nell'apertura dei file");
        return 1;
    }

    cesareDecrypt(inFile, outFileDecrypt, n);

    fclose(inFile);
    fclose(outFileDecrypt);

    return 0;
}

void cesareCrypt(FILE* inFile, FILE* outFile, int n) 
{
    char car;
    
    while (( car = fgetc(inFile)) != EOF) 
    {
        // Crittografia
        if ( car >= 'A' && car <= 'Z') 
        {
            car = (( car - 'A' + n) % 26) + 'A'; 
        } 
        else if ( car >= 'a' && car <= 'z') 
        {
            car = (( car - 'a' + n) % 26) + 'a'; 
        }
        fputc(car, outFile);
    }
}

void cesareDecrypt(FILE* inFile, FILE* outFile, int n) 
{
    char car;
    
    while ((car = fgetc(inFile)) != EOF) 
    {
        // Decrittografia
        if (car >= 'A' && car <= 'Z') 
        {
            car = ((car - 'A' - n + 26) % 26) + 'A'; 
        } 
        else if (car >= 'a' && car <= 'z') 
        {
            car = ((car - 'a' - n + 26) % 26) + 'a'; 
        }
        fputc(car, outFile);
    }
}