#include<stdio.h>
#include <stdlib.h>
#include "questao08.h"

void entradaq8(float *a){
    printf("digite a velocidade me km/h: ");
    scanf("%f", a);
}

float processamentoq8(float a){
    return a/3.6;
}

void saidaq8(float saida){
    printf("\no resultado eh: %.2f m/s", saida);
}


int questao08(){
    float a, r;
    entradaq8(&a);
    r = processamentoq8(a);
    saidaq8(r);
    return 0;
}
