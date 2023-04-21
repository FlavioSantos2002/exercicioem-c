#include <stdio.h>
#include <stdlib.h>
#include "questao03.h"

void entradaq3(float *n1, float *n2, float *p1, float *p2){
    printf("digite a primeira nota: ");
    scanf("%f", n1);

    printf("\ndigite o peso da primeira nota: ");
    scanf("%f", p1);

    printf("\ndigite a segunda nota: ");
    scanf("%f", n2);

    printf("\ndigite o peso da segunda nota: ");
    scanf("%f", p2);
}

float processamentoq3(float n1, float n2, float p1, float p2){
    return (n1*p1 + n2*p2)/(p1+p2);
}

void exibirq3(float media){
    printf("o valor da media eh: %.2f", media);
}

int questao03(){
    float n1, n2, media, p1, p2;
    entradaq3(&n1, &n2, &p1, &p2);
    media = processamentoq3(n1, n2, p1, p2);
    exibirq3(media);
    return 0;
}

