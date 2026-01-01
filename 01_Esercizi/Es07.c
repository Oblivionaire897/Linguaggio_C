//Creare una funzione ricorsiva che calcoli la successione di fibonacci fino a un valore n
//La successione di fibonacci è una serie che inizia con 0 e 1 e poi prosegue con la somma dei due numeri precedenti:
//f = 0, 1, 1, 2, 3, 5, 8, 13, 21...

#include <stdio.h>

int fibonacci(int n){
    if (n == 0 || n == 1){
        return n;
    } else {
        return(fibonacci(n-1) + fibonacci(n-2));
    }
}

int main(void){
    int numero;

    printf("Inserisci quanti valori della successione vuoi... ");
    scanf("%d", &numero);

    for(int i = 0; i < numero; i++){
        printf("%d\n", fibonacci(i)); 
    }
}