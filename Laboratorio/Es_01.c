// Leggere un numero e stampare le prime cinque potenze del numero

#include <stdio.h>

int main(void){
    int n;
    int x;

    printf("Inserisci un numero \n");
    scanf("%d", &n);
    x = n;
    printf("La potenza numero 0 di %d è %d \n", n, 1);

    for (int i = 0; i < 4; i++){
        printf("La potenza numero %d di %d è %d \n", (i+1), x, n);
        n *= x;
    }
}