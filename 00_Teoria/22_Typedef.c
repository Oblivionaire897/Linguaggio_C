// Tramite i typedef possiamo creare alias (nomi alternativi) per le tipologie di variabili

#include <stdio.h>

typedef int numero;

int main(void) {
    numero contatore = 10;

    printf("Valore del contatore: %u\n", contatore);
}

//Ovviamente questa cosa ci torna comoda per i tipi di variabile estremamente lunghi, per le struct, per gli enum o per i puntatori:

//struct

#include <stdio.h>

typedef struct {
    int x;
    int y;
} Punto;

int main(void) {
    Punto p1 = {3, 5}; //Senza typedef avremmo dovuto scrivere struct Punto p1 = {3, 5};

    printf("Punto: (%d, %d)\n", p1.x, p1.y);
    return 0;
}

//enum

#include <stdio.h>

typedef enum {
    LUNEDI,
    MARTEDI,
    MERCOLEDI,
    GIOVEDI,
    VENERDI
} Giorno;

int main(void) {
    Giorno oggi = MERCOLEDI; //Invece di enum Giorno oggi = MERCOLEDI;

    printf("Valore numerico: %d\n", oggi);
    return 0;
}