//Genera un array di 5 elementi e stampa i risultati nello stile di un grafico a barre

#include <stdio.h>
#define SIZE 5

int main(void){
    int n[SIZE] = {7, 23, 2, 5, 9};

    printf("%s%13s%17s\n", "Indice", "Valore", "Grafico"); //stampo stringa, tab13 e poi stringa, tab17 e poi stringa

    for (int i = 0; i < SIZE; i++){
        printf("%7d%13d%8s", i, n[i], " "); //Stampo indice, valore e poi sposto il cursore di 8 caselle
        
        for(int j = 1; j <= n[i]; j++){
            printf("%c", '*'); //Stampo tanti asterischi quanto n[i]
        }

        printf("\n");
    }
}