//Definire una funzione che dati tre numeri restituisca il massimo

#include <stdio.h>

int max(int x, int y, int z){
    int max = x;

    if (y > max) max = y;
    else if (z > max) max = z;

    return max;
}

int main(void){
    int n1 = 0;
    int n2 = 0;
    int n3 = 0;
    int Massimo;

    printf("Inserisci tre numeri separati da una virgola così: x,y,z");
    scanf("%d,%d,%d", &n1, &n2, &n3);
    Massimo = max(n1, n2, n3);

    printf("Il massimo tra i tre numeri inseriti è %d", Massimo);
}