/*
Nel caso in cui dovessimo rappresentare tabelle o matrici, un array monodimensionale semplice non basterebbe, avremmo dunque
bisogno di un array multidimensionale (in questo caso a due dimensioni).

Facciamo un esempio grafico: rappresentiamo in un array la tabella qui sotto

+---------+---------+---------+---------+
| a[0][0] | a[0][1] | a[0][2] | a[0][3] |
+---------+---------+---------+-------- +
| a[1][0] | a[1][1] | a[1][2] | a[1][3] |
+---------+---------+---------+---------+
| a[2][0] | a[2][1] | a[2][2] | a[2][3] |
+---------+---------+---------+---------+

Questa tabella rappresenterà un array in due dimensioni del tipo a[3][4] e come in un array normale, ogni elemento
è rappresentato dal suo indice (come possiamo vedere all'interno delle celle).
*/

#include <stdio.h>

int main(void){
    int array1[2][3] = {{1, 2, 3}, {4, 5, 6}}; //In ogni sotto-graffa, ci sono gli elementi della n-sima riga
    int array2[2][3] = {{1, 2}, {5}}; //Tutti i dati che mancano, verranno riempiti da degli zeri
}

//Anche per gli array multidimensionali valgono le regole di riempimento dei VLA come per gli array monodimensionali

//Si può passare all'esercizio 10. L'esercizio 11 è molto divertente e serve come ripasso generale anche di alcune cose sulle funzioni