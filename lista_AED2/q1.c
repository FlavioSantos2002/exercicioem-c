#include<stdio.h>
#include<stdlib.h>

main(){
    questao01();
}

void questao01(void){
    int a, b, c, r;
    entrada(&a, &b, &c);
    processamento(&a, &b, &c, &r);
    saida(r);
}

void entrada(int *a, int *b, int *c){
    printf("digite o valor do primeiro numero: ");
    scanf("%d", a);
    printf("\ndigite o valor do segundo numero: ");
    scanf("%d", b);
    printf("\ndigite o valor do terceiro numero: ");
    scanf("%d", c);
}

void processamento(int *a, int *b, int *c, int *r){
    *r = (*a + *b + *c);
}

void saida(int saida){
    printf("\no resultado eh: %d", saida);
}