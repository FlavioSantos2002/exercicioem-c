#include<stdio.h>

void entrada(float *a){
    printf("digite a velocidade me km/h: ");
    scanf("%f", a);
}

float processamento(float a){
    return a/3.6;
}

void saida(float saida){
    printf("\no resultado eh: %.2f m/s", saida);
}

int main(){
    questao08();
    return 0;
}

int questao08(){
    float a, r;
    entrada(&a);
    r = processamento(a);
    saida(r);
    return 0;
}