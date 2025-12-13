// L'istruzione break ci permette di forzare l'uscita da un ciclo

#include <stdio.h>

int main(void){
    int x = 1; //x viene inizializzato fuori dal ciclo sennò non potrei usarlo alla riga 13

    for(; x <=10; x++){ //x è già stato inizializzato
        if (x == 5) break; //Arrivato a 5 esco dal ciclo
        printf("%d ", x);
    }

    printf("\n Ho smesso di stampare arrivato a x == %d", x);
}

/*
All'interno della condizione di un ciclo, possiamo inserire più di una proposizione, come in matematica abbiamo le congiunzioni logiche:
- x && y -> AND ->  Procede solo se entrambe le condizioni sono verificate
- x || y -> OR  ->  Procede anche se è verificata solo una delle due condizioni
- !(x)   -> NOT ->  Procede se la condizione è falsa. Per negare un ==, si più scrivere !=
*/