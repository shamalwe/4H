#include <stdio.h>

int main() {

    FILE* testoENT;
    FILE* testoUSC;
    char ch;

    // Apre il file di input e output 
    testoENT = fopen("in.txt", "r"); //modalità lettura
    testoUSC = fopen("out.txt", "w"); //crea anche se il file è assente 
    if(testoENT == NULL) 
    {
        printf("Errore nell'apertura del file\n");
        return 1;
    }

   
    
    // Copia il contenuto carattere per carattere
    while((ch = fgetc(testoENT)) != EOF) 
    {
        fputc(ch, testoUSC);
    }

    // Chiudere entrambi i file
    fclose(testoENT);
    fclose(testoUSC);
    return 0;
}