// Fai riempire dall'utente un array di SIZE elementi e poi stampa la loro somma

#include <stdio.h>
#define SIZE 5

int main(void){
    int a[SIZE];
    int totale = 0;

    for (int i = 0; i < SIZE; i++){
        int n = 0;

        printf("Inserisci l'elemento dell'array ceh andrà nella posizione %d", i+1);
        scanf("%d", n);

        a[i] = n;
    }

    for (int i = 0; i < SIZE; i++){
        totale += a[i]; //Somma alla variabile "totale" l'elemento dell'array all'indice i
    }

    printf("La somma degli elementi inseriti nell'array è %d", totale);
}