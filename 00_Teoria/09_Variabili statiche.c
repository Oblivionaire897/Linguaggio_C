//Nel caso in cui una funzione viene chiamata più volte e abbiamo bisogno di ricordare le operazioni fatte, possiamo usare una variabile statica.

#include <stdio.h>

void incrementa() { //incrementa è una funzione di tipo void perché non restituisce nulla
    static int chiamate = 0; // Questa riga verrà eseguita solo alla prima chiamata di incrementa
    chiamate++;
    printf("La funzione è stata chiamata %d volte\n", chiamate);
}

int main(void) {
    incrementa(); //chiamate = 0; chiamate++ -> chiamate = 1
    incrementa(); //chiamate++ -> chiamate = 2
    incrementa(); //chiamate++ -> chiamate = 3
}