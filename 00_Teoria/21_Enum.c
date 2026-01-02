// Le variabili di tipologia "enum" sono variabili di controllo: definiscono una serie di valori che una variabile più assumere.

#include <stdio.h>

/*
    Definizione di un enum.
    I nomi (LUNEDI, MARTEDI, ...) sono costanti simboliche.
    Internamente il compilatore assegna valori interi: LUNEDI = 0, MARTEDI = 1, ...
*/

enum Giorno {LUNEDI, MARTEDI, MERCOLEDI, GIOVEDI, VENERDI, SABATO, DOMENICA};

int main(void) {
    enum Giorno oggi;

    oggi = MERCOLEDI; //Oggi è quindi uguale a 2
    printf("Valore numerico di oggi: %d\n", oggi);

    char *nomiGiorni[7] = {"Lunedì", "Martedì", "Mercoledì", "Giovedì", "Venerdì", "Sabato", "Domenica"}; //Array normale
    printf("Oggi è %s\n", nomiGiorni[oggi]); //Oggi è uguale a 2 quindi nomiGiorni[2] = "Mercoledì"
}