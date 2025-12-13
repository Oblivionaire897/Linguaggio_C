#include <stdio.h>

int main(void){ 
    
    //Definizione (e inizializzazione) di variabili. Tutte di itpo "int".
    //C è case sensitive (A != a)
    int n1 = 0;
    int n2 = 0;
    int somma = 0;

    printf("Inserisci il primo numero: "); //Messaggio di prompt (fa la richiesta)
    scanf("%d", &n1); //lettura di input
    // "%d" -> stringa di controllo del formato (indica che tipo di dato va inserito).
    // %n1  -> operatore di indirizzo. Comunica a scanf dove allocare il dato inserito.

    printf("Inserisci il secondo numero: ");
    scanf("%d", &n2);

    somma = n1 + n2; //Istruzione di assegnazione
    printf("La somma è %d", somma); //Si potrebbe anche scrivere printf("La somma è %d", n1 + n2) ma è meglio salvare il dato.
}

/*
Tipologie di variabili con rispettivi controlli di formato:
- int       numero intero       %d;
- float     numero decimale     %f;
- char      lettera             %c;
- string    parole              %s.
*/

/*
Operatori binari: hanno bisogno di DUE dati
- Addizione:        x+y
- Sottrazione:      x-y
- Moltiplicazione:  x*y
- Divisione intera: x/y
- Resto:            x%y

L'ordine è lo stesso delle equazioni algebriche:
1. Parentesi;
2. Moltiplicazione, divisione, resto;
3. Somma, sottrazione.
*/