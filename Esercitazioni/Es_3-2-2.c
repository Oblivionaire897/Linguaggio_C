// Prendi in ingresso due int e un ulteriore numero int. Se il numero è dispari, il programma deve restituire la somma dei primi due, altrimenti i loro prodotto.

#include <stdio.h>

int main(void){
    int n1, n2, def, ris;

    printf("Inserisci i primi due numeri\n");
    scanf("%d", &n1);
    scanf("%d", &n2);

    printf("Inserisci il numero speciale\n");
    scanf("%d", &def);

    if ((def%2) == 0) ris = n1 * n2;
    else ris = n1 + n2;

    printf("Il risultato è %d", ris);
}