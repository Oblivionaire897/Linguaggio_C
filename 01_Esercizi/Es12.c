/*
Scrivere una funzione del tipo void split_time ( int tot_sec, int *h, int *m, int *s ) che,
dato un orario fornito in numero di secondi dalla mezzanotte, calcoli l’orario equivalente in ore, minuti, secondi, e lo
memorizzi nelle tre variabili puntate da (h), (m) e (s) rispettivamente.
*/

#include <stdio.h>

void split_time (int tot_sec, int *h, int *m, int *s){
    *h = tot_sec / 3600;
    tot_sec %= 3600;

    *m = tot_sec / 60;
    *s = tot_sec % 60;                
}

int main(void){
    int secondi_totali = 345432;
    int ore, minuti, secondi;

    split_time(secondi_totali, &ore, &minuti, &secondi);

    printf("%02d:%02d:%02d\n", ore, minuti, secondi);
}

/*
Tramite questo esercizio, notiamo come i puntatori ci risultano estremamente utili perché alle funzioni non passiamo
più i dati e i valori delle variabili ma gli indirizzi in cui trovare i dati, rendendoci anche semplice modificare
più variabili contemporaneamente e usare le stesse variabili tra main e funzioni
*/