#include <stdio.h>
#include "questao14.h"

void entradaq14(int *num){
    printf("diogite o valor do numero: ");
    scanf("%d", num);
}

char *processamentoq14(int num){
    if (num%2 == 0){
        return "EH PAR";
    }
    else{
        return "EH IMPAR";
    }
}

void saidaq14(int num, char texto[100]){
    printf("o numero %d %s", num, texto);
}

void questao14(){
    int num;
    entradaq14(&num);
    char *r = processamentoq14(num);
    saidaq14(num, r);
}



