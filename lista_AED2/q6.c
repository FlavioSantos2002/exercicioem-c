#include <stdio.h>

void entrada(float *va, float *vn){
    printf("digite o preco do valor antigo: ");
    scanf("%f", va);

    printf("\ndigite o preco do valor novo: ");
    scanf("%f", vn);
}

float processamento(float va, float vn){
    return ((vn-va)/va)*100; 
}

void exibir(float x){
    printf("o valor da porcentagem eh: %.2f %%", x);
}

int main(){
    questao06();
    return 0;
}

int questao06(){
    float valor_antigo, valor_novo, porcentagem;
    entrada(&valor_antigo, &valor_novo);
    porcentagem = processamento(valor_antigo, valor_novo);
    exibir(porcentagem);
    return 0;
}