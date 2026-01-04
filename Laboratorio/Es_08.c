/*
Scrivere in C un programma composto da una funzione ricorsiva e da un main. Lo scopo del programma `e
di acquisire un certo numero di caratteri da tastiera, terminati da uno zero, e stamparli a schermo, andando
a capo dopo ogni carattere, in ordine inverso rispetto all’acquisizione. Ovvero, l’ultimo carattere letto sarà il
primo ad essere stampato: inserendo ABC0, otterrei CBA.
Il programma non deve memorizzare i caratteri inseriti e l’acquisizione del carattere da tastiera e la stampa
sono a carico della funzione ricorsiva. Il main ha il solo scopo di chiamare la funzione ricorsiva
*/

#include <stdio.h>

void funzione(){
    char carattere;

    scanf("%c", &carattere);

    if (carattere != '0'){
        funzione();
        printf("%c", carattere);
    }
}

int main(){
    funzione();
}