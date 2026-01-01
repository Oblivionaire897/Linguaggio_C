#include <stdio.h>

int main(void){ 

    printf("Ciao mondo \n"); //Stampa sulla stessa riga e poi va a capo

    printf("Ciao");
    printf("mondo \n"); //Stampa ciao e mondo sulla stessa riga e poi va a capo

    printf("Ciao \n");
    printf("mondo \n"); //Stampa ciao e mondo su due righe diverse
}

/* 
    Sequenze di escape:
    - \n    Va a capo
    - \t    Va a destra
    - \a    Produce un allarme
    - \\    Backslash
    - \"    Doppie virgolette
*/