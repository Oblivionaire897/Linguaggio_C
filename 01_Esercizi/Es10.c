//Creare una funzione che stampi i dati di un array bidimensionale

/*
Ricordarsi che quando si passa un array bidimensionale come argomento di funzione, la prima dimensione deve essere
vuota e la seconda deve essere preferibilmente una costante oppure una variabile dichiarata precedentemente nella parentesi
*/

#include <stdio.h>

void printArray(int narr, int rig, int col, int a[][col]){ //Notare come "col" sia stato richiesto prima dell'array
    printf("Stampa array numero %d\n\n", narr);
    printf("~Stampa in riga~\n");

    for (int i = 0; i < rig; i++){
        for (int j = 0; j < col; j++){
            printf("L'elemento nella riga %d e nella colonna %d è %d\n", i, j, a[i][j]);
        }
    }

    printf("\n~Stampa in colonna~\n");
    for (int i = 0; i < rig; i++){
        printf("Riga %d \n", i+1);
        for (int j = 0; j < col; j++){
            printf("%d", a[i][j]);
        }
        printf("\n");
    }

    printf("\n~Stampa in tabella~\n");
    for (int i = 0; i < rig; i++){
        for (int j = 0; j < col; j++){
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}

int main(void){
    int array1[2][3] = {{1, 2, 3}, {4, 5, 6}}; //In ogni sotto-graffa, ci sono gli elementi della n-sima riga
    int array2[2][3] = {{1, 2}, {5}}; //Tutti i dati che mancano, verranno riempiti da degli zeri

    printArray(1, 2, 3, array1);
    printf("\n---\n\n");
    printArray(2, 2, 3, array2);
}