#include<stdio.h>

void entrada(float *a, float *b, float *c){
    printf("digite o numero: ");
    scanf("%f", a);
    printf("digite o numero: ");
    scanf("%f", b);
    printf("digite o numero: ");
    scanf("%f", c);
}

float maior(float num1, float num2, float num3) {
    float max = num1;

    if (num2 > max) {
        max = num2;
    }

    if (num3 > max) {
        max = num3;
    }

    return max;
}

char* processamento(float a, float b, float c){
    char* str = malloc(20 * sizeof(char));
    if ((a == b) && (b == c)){
        return "Números idênticos";
    }
    else{
        sprintf(str, "o maior eh: %.2f", maior(a, b, c));
        return str;
    }
}

void saida(char texto[100]){
    printf("%s", texto);
    free(texto);
}

void questao20(){
    float a, b, c;
    entrada(&a, &b, &c);
    char* r = processamento(a, b, c);
    saida(r);
}

void main(){
    questao20();
}
