#include <stdio.h>

int main() 
{

    FILE* nomiTXT;
    FILE* nomi2TXT;
    char ch;
    
    nomiTXT = fopen("nomi.txt", "r");
    if (nomiTXT == NULL) 
    {
        printf("Errore nell'apertura del file\n");
        return 1;
    }

    nomi2TXT = fopen("nomi2.txt", "w");

    // converte in maiuscolo se è una lettera minuscola
    while ((ch = fgetc(nomiTXT)) != EOF) 
    {

        if (ch >= 'a' && ch <= 'z') 
        {
            ch = ch - 32;  
        }
        fputc(ch, nomi2TXT); 
    }

    // Chiudere entrambi i file
    fclose(nomiTXT);
    fclose(nomi2TXT);
    return 0;
}