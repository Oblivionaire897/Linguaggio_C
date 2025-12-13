/*
Scrivere in C una funzione ricorsiva che prende come (soli) parametri una matrice quadrata di interi (array
bidimensionale) e la dimensione della matrice e restituisce: il valore letto sulla diagonale principale (dall’angolo
in alto a sinistra a quello in basso a destra) se i valori sono tutti uguali, −1 altrimenti. Eventuali
ottimizzazioni dell’algoritmo costituiscono titolo di merito.
*/

#include <stdio.h>

#define DIM 2

int diagonale(int array[][DIM], int i){
    if (i == 0) return array[0][0];
    int prev = diagonale(array, i - 1);
    
    if (prev == -1) return -1;
    if (array[i][i] != prev) return -1;
    return prev;
}

int main(void){
    int matrice[DIM][DIM];

    for (int i = 0; i < DIM; i++){
        for (int j = 0; j<DIM; j++){
            printf("Inserisci il valore nella posizione %d,%d \n", i, j);
            scanf("%d", &matrice[i][j]);
        }
    }

    printf("Il risultato è %d\n", diagonale(matrice, DIM - 1));
}