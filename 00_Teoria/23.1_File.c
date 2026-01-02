/*
In C, un programma fa riferimento a ogni file aperto con un puntatore FILE separato. Dopo aver inizializzato il puntatore,
usiamo la funzione fopen per aprire il file. Una volta che è stato aperto, potremo utilizzare tutte le funzioni già studiate
o le loro controparti per l'uso dei file.
*/

#include <stdio.h>

int main(void){
    FILE *filePtr = NULL; //Inizializziamo la variabile come puntatore FILE
    filePtr = fopen("prova.txt", "w");

    if (filePtr == NULL){
        puts("Il file non può essere aperto");
    } else {
        fprintf(filePtr, "Operazione riuscita");
    }

    fclose(filePtr);
}

/*
La funzione fopen richiede due parametri: il nome del file e una lettera, chiamata modalità di apertura del file.
Il primo è abbastanza autoesplicativo; il secondo invece può essere:
- w apre un file in modalità scrittura.
    Se il file non esiste, viene creato. Se il file esiste, ne viene eliminato il contenuto. 
- r apre un file in modalità solo lettura.
- a apre o crea un file per scrivere alla fine del file

Un'altra funzione importante (ma non utilizzata in questo esempio) è feof. feof verifica se un end-of-file viene inserito, quindi
se combinato con stdin ci aiuta a fermare il programma nel caso in cui venisse inserito un terminatore. Per inserire in input
un end-of-file:
- da Windows bisogna premere ctrl+z e poi invio
- da Mac o Linux bisogna premere ctrl+d

Alla fine del programma, bisogna ricordarsi di chiudere il file con fclose
*/