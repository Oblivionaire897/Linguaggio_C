//Potremmo aver bisogno di chiamare la stessa variabile in più funzioni, qui entrano in gioco le variabili globali

#include <stdio.h>

int chiamate = 0; //variabile globale

void incrementa() {
    chiamate++;     //la funzione usa la variabile globale
    printf("La funzione è stata chiamata %d volte\n", chiamate);
}

int main(void) {
    incrementa();
    incrementa();
    incrementa();
    chiamate++; //Possiamo usare chiamate anche qui
}