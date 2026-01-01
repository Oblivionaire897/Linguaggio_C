// Anche una stringa è valutabile come array: infatti è possibile accedere ai singoli caratteri di una stringa direttamente usando
// la notazione coi indice per gli array, quindi se x = "ciao", x[0] sarò 'c'

#include <stdio.h>
#define LUNGHEZZA 20

int main(void){
    char string1[LUNGHEZZA] = "";
    char string2[] = "stringa venti caratt";

    printf("%s", "Inserisci una stringa lunga non più di venti caratteri\n");
    scanf("%19s", string1); //19 e non 20 caratteri perché l'ultimo è il terminatore

    printf("La prima stringa è: %s\nla string due è: %s\n", string1, string2);
}

// Attenzione agli scanf: nelle stringhe inserite dall'utente non possono esserci spazi