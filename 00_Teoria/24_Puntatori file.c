#include <stdio.h>

int main(void) {
    FILE *fp = fopen("dati.txt", "r");

    if (fp == NULL) {
        puts("Errore apertura file");
    }

    int id;
    char nome[20];
    float saldo;

    /* Lettura della prima riga */
    fscanf(fp, "%d %s %f", &id, nome, &saldo);
    printf("Prima riga:\n%d %s %.2f\n\n", id, nome, saldo);

    fseek(fp, 0, SEEK_SET); //Spostamento del cursore all'inizio del file

    fscanf(fp, "%d %s %f", &id, nome, &saldo);
    printf("Dopo fseek a SEEK_SET:\n%d %s %.2f\n\n", id, nome, saldo);

    fseek(fp, 20, SEEK_CUR); //Spostamento di 20 byte

    fscanf(fp, "%d %s %f", &id, nome, &saldo);
    printf("Dopo fseek di 20 byte in avanti:\n%d %s %.2f\n\n", id, nome, saldo);

    fseek(fp, -25, SEEK_END);

    fscanf(fp, "%d %s %f", &id, nome, &saldo);
    printf("Ultima riga:\n%d %s %.2f\n", id, nome, saldo);

    fclose(fp);
}

/*
fseek è una funzione che sposta il puntatore file di tot posizioni. Il prototipo di funzione è:
int fseek(FILE *stream, long offset, int whence);
i cui parametri sono:
1. puntatore FILE
2. numero di byte di spostamento del puntatore
3. punto di riferimento, che può essere:
    - SEEK_SET → inizio file
    - SEEK_CUR → posizione corrente
    - SEEK_END → fine file
*/