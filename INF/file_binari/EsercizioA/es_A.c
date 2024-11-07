#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
#include <time.h>

#define N 2
#define N_VOTI 5

struct Persona
{
    char nome[20];
    char cognome[20];
    int voti[N_VOTI];
}typedef Persona;

void Carica(FILE* fileptr);
void Stampa(FILE* fileptr);
int RicCognome(FILE* fileptr, char cognome[]);
void Informazioni(FILE* fileptr);

int main()
{
    srand(time(NULL));
    FILE* filept;

    filept= fopen("studenti.dat", "wb");
    Carica(filept);
    fclose(filept);

    filept= fopen("studenti.dat", "rb");
    Stampa(filept);
    fclose(filept);

    filept= fopen("studenti.dat", "rb");
    char cognome[20];  
    printf("inserisci il cognome che vuoi trovare:\t");
    scanf("%s", cognome);
    int r= RicCognome(filept, cognome);
    printf("\nil cognome e' stato trovato %d volte\n", r);
    fclose(filept);

    filept= fopen("studenti.dat", "rb");
    Informazioni(filept);
    fclose(filept);

    return 0;
}

void Carica(FILE* fileptr)
{
    Persona buffer;
    
    for(int i=0; i<N; i++)
    {
        printf("inserisci il nome:\t");
        scanf("%s", buffer.nome);
        
        printf("inserisci il cognome:\t");
        scanf("%s", buffer.cognome);

        for(int j=0; j<N_VOTI; j++)
        {
            buffer.voti[j]= rand() % 10+1;
        }
        fwrite(&buffer, sizeof(Persona), 1, fileptr);
        printf("\n");
    }
}

void Stampa(FILE* fileptr)
{
    Persona buffer;

    while(fread(&buffer, sizeof(Persona), 1, fileptr)== 1)
    {
        printf("Nome:\t\t %s\n", buffer.nome);
        printf("Cognome:\t %s\n", buffer.cognome);
        printf("i voti sono:");
        for(int i=0; i<N_VOTI; i++)
        {
            printf("\t%d", buffer.voti[i]);
        }
        printf("\n");
    }
}

int RicCognome(FILE* fileptr, char cognome[])
{
    Persona buffer;
    int cont=0;

    while(fread(&buffer, sizeof(Persona), 1, fileptr)== 1)
    {
        if(strcmp(buffer.cognome, cognome)== 0)
        {
            cont++;
        }
    }
    return cont;
}

void Informazioni(FILE* fileptr)
{
    Persona buffer;

    while(fread(&buffer, sizeof(Persona), 1, fileptr)== 1)
    {
        int max=0, min=10, somma=0, media=0;
        printf("informazioni %s:\t", buffer.cognome);
        for(int i=0; i<N_VOTI; i++)
        {
            somma+= buffer.voti[i];
            
            if(buffer.voti[i]> max)
            {
                max= buffer.voti[i];
            }
            if(buffer.voti[i]< min)
            {
                min= buffer.voti[i];
            }
        }
        media= somma/N_VOTI;
        printf("\nla sua media e' di %d, il voto piu' alto e' uguale a %d e il voto piu basso a %d\n", media, max, min);
    }
}