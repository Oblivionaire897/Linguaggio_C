// Vediamo alcune funzioni per stringhe e char presenti in stdio

#include <stdio.h>

int main(void){
    //getchar prende come input un solo char
    char c;
    c = getchar();
    printf("Hai inserito: %c\n", c);

    //putchar manda in output un char
    putchar(c);

    //gets prende in input una stringa: legge una riga fino al \n
    char nome[10];
    gets(nome);

    //puts stampa una stringa e aggiunge automaticamente \n.
    puts("Ciao mondo");

    //copia una stringa (src) in un’altra (dest).
    char a[20];
    char b[] = "Hello";

    strcpy(a, b);
    puts(a);
}