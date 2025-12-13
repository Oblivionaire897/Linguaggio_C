/*
Un'istruzione di iterazione (un ciclo) permette di specificare quante volte le stesse azioni vanno ripetute.
Nel caso più generale, cioè quello dei cicli while, viene data una condizione una condizione e poi le istruzioni
si ripeteranno finché la condizione non sarà falsa (quindi, se metto una condizione come 1 > 0, le azioni verranno ripetute per sempre). 
*/

#include <stdio.h>

int main(void){ 
    int n = 3;

    //stampiamo la prima potenza di tre maggiore di 100
    while (n < 100){
        n = n * 3; //moltiplichiamo n per tre finché non superiamo il 100.
    }
}

//Ora è possibile fare l'esercizio 2 e 3.
//Nell'esercizio 2, vengono anche definitii i tre spazi del condice. Consiglio di guardarlo.