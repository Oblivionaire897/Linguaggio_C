//Una classe di 10 studenti fa un quiz. I voti sono compresi da 1 a 100, determinare la media della classe.

#include <stdio.h>

int main(void){
    //Fase 1: inizializzazione (definizione delle variabili)
    int totale = 0;
    int conta = 0;

    //Fase 2: Elaborazione (operazioni varie)
    while(conta <= 10){ //Ripetiamo queste istruzioni finché la variabile conta non arriva a 11
        printf("Inserisci il voto: ");
        int voto = 0; //Inizializziamo ogni volta la variabile
        scanf("%d", &voto);
        totale += voto; //Sommiamo il voto alla variabile somma, non mi serve ricordare i singoli voti per calcolarne la media
        conta++; //Aggiorniamo il contatore aumentandolo di 1
    }

    //Fase 3: Conclusione (stampa dei risultati)
    int media = totale / 10;
    printf("La media dei voti è %d", media);
}

/*
Operatori di assegnazione abbreviati:
- Addizione         +=      c = c + 3 -> c += 3
- Sottrazione       -=      c = c - 3 -> c -= 3
- Moltiplicazione   *=      c = c * 3 -> c *= 3
- Divisione         /=      c = c / 3 -> c /= 3
- Resto             %=      c = c % 3 -> c %= 3
*/

/*
Operatori di incremento o decremento unario:
- Incremento    a++     a aumenta di 1
- Decremento    a--     a diminuisce di 1
*/