#include<stdio.h>
#include <stdlib.h>
#include "questao09.h"

void entradaq9(int *a){
    printf("digite um numero: ");
    scanf("%d", a);
}

char *processamentoq9(int a){
    if (100<a){
        return "maior que 100";
    }
    else{
        return "menor que 100";
    }
}

void saidaq9(char texto[100], int numero){
    printf("\no numero %d eh %s", numero, texto);
}


int questao09(){
    int a;
    entradaq9(&a);
    char *r = processamentoq9(a);
    saidaq9(r, a);
    return 0;
}
