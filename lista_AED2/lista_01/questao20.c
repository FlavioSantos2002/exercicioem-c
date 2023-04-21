#include<stdio.h>
#include "questao20.h"

void entradaq20(float *a, float *b, float *c){
    printf("digite o numero: ");
    scanf("%f", a);
    printf("digite o numero: ");
    scanf("%f", b);
    printf("digite o numero: ");
    scanf("%f", c);
}

float maiorq20(float num1, float num2, float num3) {
    float max = num1;

    if (num2 > max) {
        max = num2;
    }

    if (num3 > max) {
        max = num3;
    }

    return max;
}

char* processamentoq20(float a, float b, float c){
    char* str = malloc(20 * sizeof(char));
    if ((a == b) && (b == c)){
        return "Números idênticos";
    }
    else{
        sprintf(str, "o maior eh: %.2f", maiorq20(a, b, c));
        return str;
    }
}

void saidaq20(char texto[100]){
    printf("%s", texto);
    free(texto);
}

void questao20(){
    float a, b, c;
    entradaq20(&a, &b, &c);
    char* r = processamentoq20(a, b, c);
    saidaq20(r);
}


