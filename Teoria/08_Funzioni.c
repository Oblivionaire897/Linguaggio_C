/*
Il C standard include il linguaggio e la sua Libreria Standard. All'interno di questa libreria sono presenti delle funzioni
predefinite che noi abbiamo già usato come printf e scanf.
È possibile però definire le proprie funzioni per eseguire compiti specifici che possono poi essere utilizzate in più parti del 
programma. Le istruzioni che definiscono la funzione vengono scritte una volta e sono nascoste alle altre funzioni.
---
Ogni programma che abbiamo scritto fin ora consiste semplicemente in una funzione chiamata "main" che utilizza le funzioni
della Libreria Standard per eseguire i suoi compiti.
Proviamo ora ad aggiungere anche una funzione "square" che dato un numero in ingresso, restituisce il suo quadrato.
*/

#include <stdio.h>

int square(int number){ //La funziona "square" richiama un solo dato di tipo intero e verrà denominato "number"
    return (number * number); //Alla chiamata di square, verrà restituito number * number
}

int main(void){
    int n;
    int quadrato;

    printf("Inserisci un numero \n");
    scanf("%d", &n);
    quadrato = square(n); //Richiamo la funzione square e come "number" gli dò n

    printf("Il quadrato di %d è %d", n, quadrato);
}

//Attenzione alle variabili locali -> Qualunque cosa che viene fatta dentro una funzione, rimane solo nella funzione.
//Per poter usare una variabile in tutto il programma, deve essere definita globale
//Si può procedere con l'esercizio 6