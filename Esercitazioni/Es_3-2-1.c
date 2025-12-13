// Prendi in ingresso due dati di tipo float e restituisci la somma usando 4 cifre significative dopo la virgola.

#include <stdio.h>

int main(void){
    float n1, n2, somma;

    scanf("%f", &n1);
    scanf("%f", &n2);

    float somma = n1 + n2;

    printf("La somma dei due numeri è %.4f", somma); //.4 significa che arrotondiamo alla quarta cifra decimale
}