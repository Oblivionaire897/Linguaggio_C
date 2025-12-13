/*
Fino ad ora abbiamo visto solo esempi di funzioni e cicli iterativi, cioè istruzioni che ad ogni giro ripartono da zero.
Introduciamo ora le funzioni “ricorsive”, cioè funzioni che hanno bisogno di richiamare se stesse
più volte per andare avanti. In questo caso, il risultato parziale prodotto da una chiamata non viene scartato,
ma diventa parte della soluzione finale.

Una funzione ricorsiva ha sempre due elementi fondamentali:
- Caso base: la condizione che interrompe la ricorsione.
- Passo ricorsivo: la parte in cui la funzione richiama sé stessa con un input ridotto, avvicinandosi al caso base.
*/

/*
Qui vedremo come esempio il calcolo del fattoriale di un numero.
n! = n * (n-1) * (n-2) * ... * (n-n)!   con 0! = 1
n! = n * (n-1)!
Il primo caso è detto "iterativo", mentre il secondo è quello "ricorsivo".
*/

#include <stdio.h>

int fattoriale(int n){
    if (n <= 1){ //Caso base
        return 1;
    } else {
        return(n * fattoriale(n-1)); //Chiamata ricorsiva
    }
}

int main(void){
    int numero;

    printf("Inserisci un voto e ne calcolerò il fattoriale... ");
    scanf("%d", &numero);

    printf("Il fattoriale di %d è %d", numero, fattoriale(numero));
}

//Consiglio l'esercizio 7