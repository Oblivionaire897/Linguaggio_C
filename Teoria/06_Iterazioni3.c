/*
L'ultima istruzione di iterazione rimasta è l'istruzione do...while.
Non cambia nulla rispetto a un normale ciclo while, semplicemente però la condizione viene controllata dopo una prima iterazione.
*/

#include <stdio.h>

int main(void) {
    int conta = 1;

    do {
        printf("%d", conta);
        conta++;
    } while (conta <= 5); //Verrà stampato anche il cinque. Se avessimo usato un while normale, avremmo stampato fino al quattro.
}