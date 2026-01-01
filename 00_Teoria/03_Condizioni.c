#include <stdio.h>

int main(void){ 
    printf("Inserisci due numeri separati da uno spazio e ti dirò qualcosa su di loro.");

    int n1 = 0;
    int n2 = 0;

    scanf("%d %d", &n1, &n2);

    if (n1 == n2){ //Per confrontare due numeri, usiamo il doppio uguale
        printf("I due numeri sono uguali");
    }
    if (n1 != n2){
        printf("I due numeri sono uguali");
    }

    if (n1 < n2){
        printf("n1 è strettamente minore di n2");
    }
    if (n1 <= n2){
        printf("n1 è minore o uguale a n2");
    }

    if (n1 > n2){
        printf("n1 è strettamente maggiore di n2");
    }
    if (n1 >= n2){
        printf("n1 è maggiore o uguale a n2");
    }

    // --- //

    if (n1 == n2){
        printf("I due numeri sono uguali");
    } else {
        printf("I due numeri sono diversi"); //La soluzione con else ... if è più compatta
    }
}

/*
Blocco if -> prende una condizione. Se è vera, esegue ciò che c'è tra parentesi graffe {} sennò va avanti con il codice.
Blocco if ... else (r. 34) -> prende una condizione. Se è vera, esegue le prime graffe, IN OGNI ALTRO CASO esegue le seconde.
Blocco if ... else if -> prende due condizioni. Se è vera la prima, esegue le prime graffe, se è vera la seconda, esegue le altre.

Che differenza c'è tra il mettere più if o usare if e poi tanti else if? Mettere più if singoli, controlla ogni condizione; un solo if e tanti
                                                                         if ... else if controllano una sola condizione e restituiscono un solo dato.
*/

// Fare ora l'esercizio 1