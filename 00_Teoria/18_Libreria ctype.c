// Analizziamo le più importanti funzioni della libreria ctype

#include <ctype.h>
#include <stdio.h>

int main(void){
    // isdigit - controlla se è una cifra
    printf("isdigit('8'): %d\n", isdigit('8')); //true
    printf("isdigit('#'): %d\n", isdigit('#')); //false
    
    // isalpha - controlla se è una lettera
    printf("isalpha('A'): %d\n", isalpha('A')); //true
    printf("isalpha('b'): %d\n", isalpha('b')); //true
    printf("isalpha('8'): %d\n", isalpha('8')); //false
    printf("isalpha('#'): %d\n", isalpha('#')); //false
    
    // isalnum - controlla se è alfanumerico
    printf("isalnum('A'): %d\n", isalnum('A')); //true
    printf("isalnum('b'): %d\n", isalnum('b')); //true
    printf("isalnum('8'): %d\n", isalnum('8')); //true
    printf("isalnum('#'): %d\n", isalnum('#')); //false
    
    // islower - controlla se è minuscolo
    printf("islower('A'): %d\n", islower('A')); //false
    printf("islower('b'): %d\n", islower('b')); //true
    printf("islower('8'): %d\n", islower('8')); //false
    printf("islower('#'): %d\n", islower('#')); //false
    
    // isupper - controlla se è maiuscolo
    printf("isupper('A'): %d\n", isupper('A')); //true
    printf("isupper('b'): %d\n", isupper('b')); //false
    printf("isupper('8'): %d\n", isupper('8')); //false
    printf("isupper('#'): %d\n", isupper('#')); //false
    
    // tolower - converte a minuscolo
    printf("tolower('A'): %c\n", tolower('A')); //a
    printf("tolower('b'): %c\n", tolower('b')); //b
    printf("tolower('8'): %c\n", tolower('8')); //8
    printf("tolower('#'): %c\n", tolower('#')); //#
    
    // toupper - converte a maiuscolo
    printf("toupper('A'): %c\n", toupper('A')); //A
    printf("toupper('b'): %c\n", toupper('b')); //B
    printf("toupper('8'): %c\n", toupper('8')); //8
    printf("toupper('#'): %c\n", toupper('#')); //#
}