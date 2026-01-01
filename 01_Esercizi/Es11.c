//Più facile di quanto sembri :3
/*
Abbiamo un array del tipo studentGrades[3][4] che rappresenta per ogni riga i voti di uno studente in quattro esami.
Bisogna creare queste quattro funzioni:
- maximum:  trova il voto più alto tra quelli di tutti gli studenti
- minimum:  trova il voto più basso tra quelli di tutti gli studenti
- average:  calcola la media del semestre per un preciso studenti
- printArr: stampa l'array in un formato simil-tabella
*/

#include <stdio.h>
#define STUDENTI 3
#define ESAMI 4

int maximum(int arr[][ESAMI], int studenti, int esami){
    int max = arr[0][0];

    for (int i = 0; i < studenti; i++){
        for(int j = 0; j < esami; j++){
            if (arr[i][j] > max) max = arr[i][j];
        }
    }

    return max;
}

int minimum(int arr[][ESAMI], int studenti, int esami){
    int min = arr[0][0];

    for (int i = 0; i < studenti; i++){
        for(int j = 0; j < esami; j++){
            if (arr[i][j] < min) min = arr[i][j];
        }
    }

    return min;
}

double average(int studente, int arr[][ESAMI], int esami){
    double media = 0;

    for (int i = 0; i < esami; i++){
        media += arr[studente][i];
    }
    media /= esami;

    return media;
}

void printArr(int arr[][ESAMI], int studenti, int esami){
    for (int i = 0; i < studenti; i++){
        for (int j = 0; j < esami; j++){
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
}

int main (void){
    int studente = 0;
    int voti[STUDENTI][ESAMI] = 
    {{19, 27, 14, 12},
     {30, 27, 12, 23},
     {27, 27, 27, 27}};

    printf("L'array è: \n");
    printArr(voti, STUDENTI, ESAMI);

    printf("\n");

    printf("Il voto minimo tra tutti è %d, mentre il maggiore è %d\n", minimum(voti, STUDENTI, ESAMI), maximum(voti, STUDENTI, ESAMI));

    printf("\n");

    printf("Di quale studente vuoi sapere la media? 1, 2 o 3? \n");
    scanf("%d", &studente);
    studente -= 1;
    printf("La media di studente numero %d è: %.2f\n", studente, average(studente, voti, ESAMI));

    printf("\n");

    for(int i = 0; i < STUDENTI; i++){ //Stampiamo la media di tutti gli altri studenti sennò ci rimangono male
        if (i!=studente) printf("La media di studente numero %d è: %.2f\n", i+1, average(i, voti, ESAMI));
    }
}