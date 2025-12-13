/*
Scrivere in C una funzione che legge una array di interi (di dimensione variabile) e restituisce la
somma dei valori piu piccolo e piu grande contenuti nell’array.
*/

#include <stdio.h>

int func(int arr[], int size){
    int min = arr[0];
    int max = arr[0];
    int sum;

    for(int i = 0; i < size; i++){
        if (arr[i] < min) min = arr[i];
        if (arr[i] > max) max = arr[i];
    }

    sum = min + max;
    return sum;
}

int main(void){
    int len = 0;
    
    printf("Inserisci di quanti valori vuoi il tuo array \n");
    scanf("%d", &len);
    
    int array[len]; //Il codice potrebbe dare errore qui ma in realtà funziona...

    for(int i = 0; i < len; i++){
        printf("Inserisci il valore numero %d dell'array \n", i+1);
        scanf("%d", &array[i]);
    }

    printf("La somma tra massimo e minimo dell'array è %d\n", func(array, len));
}