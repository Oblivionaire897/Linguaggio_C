// Scrivere un programma che legga un numero e determini se sia pari o dispari

#include <stdio.h>

int main(void){ 
    int n = 0;
    int r = 0;
    
    printf("Inserisci il numero");
    scanf("%d", &n);

    r = n%2;
    if (r != 0){
        printf("Il numero è dispari");
    } else {
        printf("Il numero è pari");
    }
}