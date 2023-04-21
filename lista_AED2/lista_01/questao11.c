#include <stdio.h>
#include "questao11.h"

void entradaq11(int *numero){
    printf("digite o valor do numero: ");
    scanf("%d", numero);
}

char *processamentoq11(int numero){
    if (numero>100 && numero<500){
        return "esta entre 100 e 500";
    }
    else{
        return "nao esta entre 100 e 500";
    }
}

void saidaq11(char texto[100], int numero){
    printf("o numero %d %s", numero, texto);
}

void questao11(){

    int n;
    entradaq11(&n);
    char *r = processamentoq11(n);
    saidaq11(r, n);


}
