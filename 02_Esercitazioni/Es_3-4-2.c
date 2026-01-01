// Testo -> https://pastebin.com/PUWzPiBa

#include <stdio.h>

int main(void){
    int n, num, cifre;

    scanf("%d", &n);
    scanf("%d", &num);

    while ((num % n) != 0){
        num /= 10;
        cifre += 1;
    }

    printf("Il multiplo trovato è %d e ho rimosso %d cifre", num, cifre);
}