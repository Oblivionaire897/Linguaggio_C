/*
Fino ad ora abbiamo usato le variabili: container di memoria temporanei. I file vengono usati per la memorizzazione di dati a lungo
termine.
Il C vede ogni file come uno stream (flusso) sequenziale di byte. Ogni file termina con un marcatore di end-of-file o dopo un
tot di byte se viene imposto un limite.

Quando avviamo un normale file in C, ad esso viene associato uno stream. A sua volta, quando inizia l'esecuzione di un programma
vengono aperti tre stream:
- standard input per gli input da tastiera
- standard output per gli output sullo schermo
- standard error per gli errori sullo schermo

Le due funzioni più importanti per i file sono fgetc e fputc. La prima legge un carattere specificato dal "puntatore file" che
riceve come argomento; la seconda scrive il carattere nel suo primo argomento sul file specificato dal "puntatore file" nel
suo secondo argomento. Se i puntatori file utilizzati sono stdin e stdout, stamperanno e leggeranno a schermo.
*/

#include <stdio.h>

int main(void) {
    int c;

    do {
        c = fgetc(stdin); //Leggiamo da stdin, quindi dalla tastiera
        fputc(c, stdout); //Stampiamo su stdout, quindi a schermo, il carattere c
    } while (c != EOF);
}

/*
Da qui è palese come inserire stdin e stdout come puntatori file è analogo all'utilizzo delle funzioni getchar() e putchar(), con
l'unica differenza che qui potremo decidere noi su quale file operare.

Excursus sui char (di nuovo): ricordo che in C, i char sono un tipo intero. Quando un char è passato a una funzione
o a un’espressione, viene promosso a int (la sequenza di byte a lui corrispondente).
Il valore speciale EOF è una costante intera (tipicamente -1) che segnala la fine dello stream o un errore di lettura.
Poiché EOF non rientra nel range dei valori rappresentabili da un unsigned char, è possibile distinguerlo
dai caratteri validi.
*/