/*
Le strutture sono collezioni di variabili collegate sotto u unico modo. A differenza degli array, le strutture possono
contenere variabili di tipologie diverse. 

    struct nome {
        type var1;
        type var2;   
    };

L'identificatore "nome" sarà l'etichetta della struttura e le variabili dichiarate al suo interno saranno i membri della struttura.
Il punto e virgola va anche alla fine della dichiarazione della struttura.

Nonostante all'interno di una struct ci possa andare qualunque tipo di variabile, non possiamo comunque inserire un'ulteriore 
struttura, ma possiamo inserire un puntatore verso essa. Una struttura contenente un membro che è un puntatore allo stesso
tipo di struttura è detta struttura autoreferenziale.
*/

#include <stdio.h>

struct carte{
    const char *faccia;
    const char *seme;
};

int main(void){
    struct carte carta1;

    carta1.faccia = "Asso";
    carta1.seme = "Spade";

    struct carte *cartePtr = &carta1;

    printf("La carta è un %s di %s\n", carta1.faccia, carta1.seme);
    printf("La carta è un %s di %s\n", cartePtr->faccia, cartePtr->seme);
    printf("La carta è un %s di %s\n", (*cartePtr).faccia, (*cartePtr).seme);
}

/*
Le strutture sono (sto esemplificando all'osso, la definizione che sto per dare è SBAGLIATA ma è per far capire il concetto) array
con parole al posto degli indici:
- Nella definizione di struttura indico il nome del contenitore e il nome delle sottosezioni al suo interno
- Nel corso del mio codice definisco una variabile del tipo definito nella struttura e il parametro per ogni sottosezione
- Tramite un puntatore accedo al valore di cui ho bisogno. Posso farlo in tre modi:
    - Senza puntatore con nome.parametro (operatore di membro di struttura / operatore punto)
    - Tramite puntatore con nomePtr->parametro (operatore di puntatore a struttura / operatore freccia)
    - Con puntatore tramite operatore punto con (*nomePtr).parametro. Ricordarsi di mettere l'asterisco al puntatore e le
      parentesi perché l'operatore punto ha la precedenza sull'operatore di dereferenziazione quindi il codice risultarebbe sbagliato
*/