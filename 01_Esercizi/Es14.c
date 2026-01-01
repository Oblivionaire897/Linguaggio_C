// Leggere una sequenza di massimo 10 numeri interi terminata da 0 e stamparla all'inverso

#include <stdio.h>
#define MAX 10

int main(void){
    int numeri[MAX]; //Lista che conterrà i valori
    int *p = numeri;
    int inValore = 1; //L'input che inserirà l'utente. Lo inizializzo diverso da 0 per via della condizione dell'array

    while (p != &numeri[MAX] && inValore != 0){ //Ciclo di riempimento dell'array
        printf("Inserisci un numero. Inserisci lo 0 quando vuoi fermarti \n");
        scanf("%d", &inValore);
        *p = inValore;
        p++;
    }
    p--;
    while (p >= numeri){
        printf("%d ", *p);
        p--;
    }

}

/*
Inizializziamo il puntatore *p a "numeri", questo perché il nome di un array non è una variabile normale ma,
quando viene usato in un’espressione, decade automaticamente in un puntatore al suo primo elemento, cioè numeri == &numeri[0].
Da adesso allora potremmo usare il valore di p (*p) per accedere agli elementi dell'array:

    *p = array[0];
    p++;
    *p = array[1];
    ...

Poi, rappresentando numeri sempre la posizione del primo valore, possiamo usare la condizione p >= numeri per evitare
di andare fuori dall'array in negativo.
*/