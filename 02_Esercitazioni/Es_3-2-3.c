// Scrivere un programma in C che legga una sequenza di numeri terminati dallo 0 e ne stampi la somma.

#include <stdio.h>

int main(void){
    int n, somma;
    n = 1;

    while(n!=0){
        printf("Inserisci un numero. Inserisci 0 quando vuoi terminare \n");
        scanf("%d", &n);
        somma += n;
    }

    printf("La somma è %d", somma);
}