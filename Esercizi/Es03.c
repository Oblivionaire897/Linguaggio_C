//Leggi tre numeri, verifica che questi possano essere la lunghezza dei tre lati di un triangolo e poi definisci il tipo di  triangolo

#include <stdio.h>

int main(void){
    int l1 = 0;
    int l2 = 0;
    int l3 = 0;

    printf("Inserisci il primo dato ");
    scanf("%d", &l1);
    printf("Inserisci il secondo dato ");
    scanf("%d", &l2);
    printf("Inserisci il terzo dato ");
    scanf("%d", &l3);

    if ((l1 < (l2+l3)) && (l2 < (l1+l3)) && (l3 < (l1+l2))){
        printf("I dati possono essere quelli di un triangolo.");
    }

    if (l1 == l2 && l2 == l3) printf("Il triangolo sarebbe equilatero");
    else if ((l1 == l2) || (l2 == l3) || (l1 == l3)) printf("Il triangolo sarebbe isoscele");
    else printf("Il triangolo sarebbe scaleno");
}

/*
Come possiamo notare dalle righe 21-23, gli if possono anche venire scritti in forma contratta.
*/