#include <stdio.h>

int main(void) {
    FILE *filePtr = NULL;

    if ((filePtr = fopen("clienti.txt", "r")) == NULL) {
        puts("Il file non può essere aperto");
    } else {
        int account = 0;
        char nome[30] = "";
        float credito = 0.0;

        /* intestazione */
        printf("%10s%13s%10s\n", "account", "nome", "credito");

        /* lettura fino a fine file */
        while (!feof(filePtr)) {
            printf("%10d%13s%10.2f\n", account, nome, credito);
        }

        fclose(filePtr);
    }
}