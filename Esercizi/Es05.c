// Scrivere un programma che legge 10 numeri e dice quanti sono positivi, quanti negativi e quanti nulli.

#include <stdio.h>

int main(void){
    int positivi = 0;
    int nulli = 0;
    int negativi = 0;

    for (int i = 0; i < 10; i++){
        int n = 0;
        printf("Inserisci il numero \n");
        scanf("%d", &n);

        if (n < 0) negativi++;
        else if (n > 0) positivi++;
        else nulli ++;
    }

    printf("Di dieci numeri inseriti, %d sono positivi, %d sono negativi, %d sono nulli", positivi, negativi, nulli);
}