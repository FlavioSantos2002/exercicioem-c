#include <stdio.h>
#include <stdlib.h>
#include "questao06.h"

void entradaq6(float *va, float *vn){
    printf("digite o preco do valor antigo: ");
    scanf("%f", va);

    printf("\ndigite o preco do valor novo: ");
    scanf("%f", vn);
}

float processamentoq6(float va, float vn){
    return ((vn-va)/va)*100;
}

void exibirq6(float x){
    printf("o valor da porcentagem eh: %.2f %%", x);
}


int questao06(){
    float valor_antigo, valor_novo, porcentagem;
    entradaq6(&valor_antigo, &valor_novo);
    porcentagem = processamentoq6(valor_antigo, valor_novo);
    exibirq6(porcentagem);
    return 0;
}
