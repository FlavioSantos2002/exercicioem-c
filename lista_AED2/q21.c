#include<stdio.h>
#include <stdlib.h>

void entrada(float *a, float *b, float *c){
    printf("digite o numero: ");
    scanf("%f", a);
    printf("digite o numero: ");
    scanf("%f", b);
    printf("digite o numero: ");
    scanf("%f", c);
}


float* processamento(float num1, float num2, float num3) {
    float temp;
    float* vetor = (float*) malloc(3 * sizeof(float));
    vetor[0] = num1;
    vetor[1] = num2;
    vetor[2] = num3;

    for(int i=0; i<2; i++) {
        for(int j=0; j<2-i; j++) {
            if(vetor[j] > vetor[j+1]) {
                temp = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = temp;
            }
        }
    }

    return vetor;
}

void saida(float v[2]){
    printf("em ordem crescente temos: ");
    for (int i = 0; i<=2; i++){
        printf("  %.2f", v[i]);
    }
    
    free(v);
}

void questao21(){
    float a, b, c;
    entrada(&a, &b, &c);
    float* r = processamento(a, b, c);
    saida(r);
}

void main(){
    questao21();
}