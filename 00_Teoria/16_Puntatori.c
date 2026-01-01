/*
I puntatori sono variabili che contengono indirizzi di memoria, nei quali a loro volta sono memorizzati dei valori.
È un indirizzamento indiretto. 

Scrivere  int *countPtr; significa dire che countPtr (nome del puntatore) punta a un oggetto di tipo int,
non che il puntatore sia una variabile di tipo int.

I due importanti operatori per i puntatori sono & e *:
- Operatore di indirizzo &:     restituisce l'indirizzo di un oggetto in memoria.
                                In questo caso, possiamo proprio puntare un puntatore a suddetto indirizzo
- Operatore di indirezione *:   viene applicato a un puntatore per accedere al valore dell’oggetto a cui esso punta.
L'operazione con l'asterisco (scrivere quindi *pt) si dice operazione di "dereferenziazione del puntatore pt"
*/

#include <stdio.h>

int main(void){
    int a = 7; //La variabile a ha valore 7
    int *aPtr = &a; //Il puntatore ha come valore l'indirizzo di a

    printf("L'indirizzo della variabile a è %p \n", &a);
    printf("Il valore effettivo del puntatore di a è %p \n", aPtr);

    printf("\n");

    printf("Il valore di a è %d\n", a);
    printf("Il valore a cui punta aPtr è %d\n", *aPtr);

    printf("\n");

    printf("Ovviamente & e * sono complementari: \n");
    printf("\t Usare &*aPtr significa avere %p \n", &*aPtr);
    printf("\t Allo stesso tempo, scrivere *&aPtr significa avere %p", *&aPtr);
}

/*
Notiamo come l'operatore di indirizzo lo abbiamo sempre usato per le scanf dei numeri, difatti quando chiediamo
un input dobbiamo decidere in quale spazio di memoria allocarlo
*/

//Esercizi 12 e 13 sono introduttivi. Il 14 è su array e puntatori