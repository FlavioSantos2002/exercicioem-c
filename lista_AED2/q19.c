#include <stdio.h>

void entrada(float *a, float *b, float *c) {
    printf("Digite o primeiro lado do triangulo: ");
    scanf("%f", a);
    printf("Digite o segundo lado do triangulo: ");
    scanf("%f", b);
    printf("Digite o terceiro lado do triangulo: ");
    scanf("%f", c);
}

int valida_triangulo(float a, float b, float c) {
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

void saida(float a, float b, float c) {
    if (valida_triangulo(a, b, c)) {
        if (a == b && b == c) {
            printf("Triangulo Equilatero\n");
        } else if (a == b || a == c || b == c) {
            printf("Triangulo Isosceles\n");
        } else {
            printf("Triangulo Escaleno\n");
        }
    }
}

int main() {
    float a, b, c;
    entrada(&a, &b, &c);
    saida(a, b, c);
    return 0;
}
