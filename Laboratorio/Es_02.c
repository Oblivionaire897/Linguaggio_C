// Trasforma l'esercizio 1 in una funzione

#include <stdio.h>

void pow(n){
    int x;

    x = n;
    printf("La potenza numero 0 di %d è %d \n", n, 1);

    for (int i = 0; i < 4; i++){
        printf("La potenza numero %d di %d è %d \n", (i+1), x, n);
        n *= x;
    }
}

int main(void){
    int n;

    printf("Inserisci un numero \n");
    scanf("%d", &n);

    pow(n);
}