// L'iterazione for, è un ciclo con contatore compattato. Non richiede solo la condizione, ma anche un aggiornamento.

#include <stdio.h>

int main(void){
    for (int i = 1; i <=5; i++) {
        printf("%d\n", i);
    }
}

/*
Un ciclo for richiede (inizializzatore; condizione; aggiornamento).
    All'inizio del ciclo, viene eseguita l'operazione nell'inizializzatore;
    la condizione indica quante volte in ciclo viene ripetuto;
    l'aggiornamento è un'operazione che viene ripetuta ogni volta che il ciclo finisce, prima di ricominciare l'iterazione.
*/

// È possibile procedere con gli esercizi 4 e 5