/*
Scrivere in C una funzione che trasforma un numero in base 10 in un numero in qualsiasi base (da 1 a 16). La
funzione non restituisce nulla, ma stampa la nuova rappresentazione sullo schermo. I parametri sono due:
il numero da trasformare e la base per la nuova rappresentazione
*/

#include <stdio.h>
#define DIMENSIONE 10 //per convertire i caratteri fino alla base 10 (caratteri numerici)
#define MASSIMO 16 //nel caso in cui ci sia bisogno di caratteri esadecimali

void convertitore (int numero, int base){
    int resti[DIMENSIONE];
    char simboli[MASSIMO] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};

    int i = 0;
    while (numero > 0) {
        resti[i] = numero % base;
        numero /= base;
        i++;
    }

    i--;
    while (i >= 0) {
        printf("%c", simboli[resti[i]]);
        i--;
    }
}

int main(void){
    int n = 0;
    int base = 0;

    printf("Inserisci il numero in base 10 che vuoi convertire \n");
    scanf("%d", &n);
    do {
        printf("In che base vuoi convertirlo? Il programma continuerà a chiedere finché non verrà inserito un x: 0 < x < 17 \n");
        scanf("%d", &base);
    } while (base < 0 && base > 17);

    convertitore(n, base);
}