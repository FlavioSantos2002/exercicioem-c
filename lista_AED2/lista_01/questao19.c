#include <stdio.h>
#include "questao19.h"

void entradaq19(float *a, float *b, float *c) {
    printf("Digite o primeiro lado do triangulo: ");
    scanf("%f", a);
    printf("Digite o segundo lado do triangulo: ");
    scanf("%f", b);
    printf("Digite o terceiro lado do triangulo: ");
    scanf("%f", c);
}

int valida_trianguloq19(float a, float b, float c) {
    if (a <= 0 || b <= 0 || c <= 0) {
        printf("Erro: os lados do triangulo devem ser positivos.\n");
        return 0;
    }
    if (a + b <= c || a + c <= b || b + c <= a) {
        printf("Erro: os lados nao formam um triangulo.\n");
        return 0;
    }
    return 1;
}

void saidaq19(float a, float b, float c) {
    if (valida_trianguloq19(a, b, c)) {
        if (a == b && b == c) {
            printf("Triangulo Equilatero\n");
        } else if (a == b || a == c || b == c) {
            printf("Triangulo Isosceles\n");
        } else {
            printf("Triangulo Escaleno\n");
        }
    }
}

int questao19() {
    float a, b, c;
    entradaq19(&a, &b, &c);
    saidaq19(a, b, c);
    return 0;
}
