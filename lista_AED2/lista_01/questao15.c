#include <stdio.h>
#include "questao15.h"

void entradaq15(int *num1, int *num2){
    printf("digite o valor do numero: ");
    scanf("%d", num1);
    printf("digite o valor do numero: ");
    scanf("%d", num2);
}

char *processamentoq15(int *num1, int *num2){
    int aux;
    if (*num1>*num2){
        return "EH MAIOR QUE";
    }
    else{
        if (*num1<*num2){
            aux = *num1;
            *num1 = *num2;
            *num2 = aux;
            return "EH MAIOR QUE";
        }
        else{
            return "EH IGUAL A";
        }
    }
}

void saidaq15(int num1, int num2, char texto[100]){
    printf("o numero %d %s %d", num1, texto, num2);
}

void questao15(){
    int num1, num2;
    entradaq15(&num1, &num2);
    char *r = processamentoq15(&num1, &num2);
    saidaq15(num1, num2, r);
}
