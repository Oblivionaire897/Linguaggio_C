/*
Tutti i programmi c sono costituiti da caratteri.
Si accede a una stringa mediante un puntatore al suo primo carattere. Il valore di una stringa è l'indirizzo del suo primo carattere.
Da qui ricaviamo che una stringa non è altro che un array di caratteri.
Ogni stringa finisce con "/0", il carattere nullo. Se non c'è spazio per questo carattere, è molto probabile che
il codice andrà in errore

Essendo una stringa già un puntatore, quando uso la scanf non devo mettere l'operatore di indirizzo ma solo il nome della variabile.
*/

#include <stdio.h>

int main(void){
    char colore[] = "blu"; //array di quattro elementi che contiene i caratteri modificabili 'b', 'l', 'u', '/0'
    
    char word[20]; //Stringa di massimo 20 caratteri
    scanf("%19s", word); //19s limita l'input a 19 caratteri così c'è spazio per il carattere nullo

}