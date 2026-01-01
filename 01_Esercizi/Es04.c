// Scrivere un programma che legge 5 numeri da tastiera e ne restituisce il minimo

#include <stdio.h>

int main(void){
    int min = 0;

    for (int i = 0; i <= 5; i++){;
        printf("Inserisci il numero %d \n", i);
        int n = 0;
        scanf("%d", &n);
        if (n < min) min = n;
    }

    printf("Il minimo tra i numeri inseriti è %d", min);
}