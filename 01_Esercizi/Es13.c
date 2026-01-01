// Scrivere una funzione che scambi i valori di due variabili puntate da p e q.

void scambia(int *p, int *q){
    int ricorda = *p;

    *p = *q;
    *q = ricorda;
}

int main(void){
    int p, q;

    printf("Inserisci il primo numero \n");
    scanf("%d", &p);
    printf("Inserisci il secondo numero \n");
    scanf("%d", &q);

    scambia(&p, &q);

    printf("p ora è uguale a %d mentre q è uguale a %d", p, q);
}