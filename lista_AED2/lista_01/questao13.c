#include <stdio.h>
#include "questao13.h"

void entradaq13(int *num){
    printf("diogite o valor do numero: ");
    scanf("%d", num);
}

char *processamentoq13(int num){
    if (num%5 == 0){
        return "EH DIVISIVEL";
    }
    else{
        return "NAO EH DIVISIVEL";
    }
}

void saidaq13(int num, char texto[100]){
    printf("o numero %d %s por 5", num, texto);
}

void questao13(){
    int num;
    entradaq13(&num);
    char *r = processamentoq13(num);
    saidaq13(num, r);
}
