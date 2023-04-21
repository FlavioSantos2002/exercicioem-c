#include <stdio.h>
#include <stdlib.h>
#include "questao02.h"


void receberNumeros(float *num1, float *num2, float *num3, float *num4) {
    printf("Digite o primeiro numero: ");
    scanf("%f", num1);
    printf("Digite o segundo numero: ");
    scanf("%f", num2);
    printf("Digite o terceiro numero: ");
    scanf("%f", num3);
    printf("Digite o quarto numero: ");
    scanf("%f", num4);
}

float calcularMedia(float num1, float num2, float num3, float num4) {
    float media = (num1 + num2 + num3 + num4) / 4;
    return media;
}


void exibirMedia(float media) {
    printf("A media dos numeros eh: %.2f\n", media);
}

int questao02(){
    float num1, num2, num3, num4, media;

    receberNumeros(&num1, &num2, &num3, &num4);
    media = calcularMedia(num1, num2, num3, num4);
    exibirMedia(media);

    return 0;
}
