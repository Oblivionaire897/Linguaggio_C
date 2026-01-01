/*
Un array è un gruppo di elementi dello stesso tipo immagazzinati insieme nella memoria.
Ogni array immagazzina a sua volta un quantitativo n di elementi. Per accedere a un particolare elemento dell'array
si specifica il suo nome e poi tra parentesi quadre l'indice dell'elemento.
La locazione del primo elemento dell'array corrisponde alla posizione zero.
*/

#include <stdio.h>

int main(void){
    int c[5]; //Array con nome c con massimo 5 elementi

    //Ciclo for per il riempimento dell'array da parte dell'utente
    for (int i = 0; i < 5; i++){
        int n = 0;

        printf("Inserisci l'elemento dell'array ceh andrà nella posizione %d", i+1);
        scanf("%d", n);

        c[i] = n;
    }

    int n[5] = {5, 3, 1, 2, 4}; //Riempimento manuale
}

/*
Precisazione sulla dimensione degli array: nel caso in cui volessimo creare un array con dimensione variabile (che si chiamerebbe
VLA -> Variabile-length array), NON POSSIAMO scrivere questa cosa:
    
    int n = 5;
    int a[n] = {1, 2, 3, 4, 5};

la definizione di lista con parentesi graffe può essere utilizzata SOLAMENTE se la lunghezza dell'array è una costante.
In altri casi (come in questo qui sopra) andrebbe usato un ciclo for.
*/

// Fare gli esercizi 8 e 9