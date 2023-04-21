#include <stdio.h>
#include <stdlib.h>
#include "questao07.h"

void entradaq7(float *raio){
    printf("digite o valor do raio: ");
    scanf("%f", raio);

}
processamentoq7(float raio, float dpav[3]){
    dpav[0] = 2*raio;
    dpav[1] = 2*3.14*raio;
    dpav[2] = 3.14*raio*raio;
    dpav[3] = (4 * 3.14 *raio*raio*raio)/3;
    return dpav;
}

void exibirq7(float x[3]){
    printf("DIAMETRO: %.2f", x[0]);
    printf("\nPERIMETRO: %.2f", x[1]);
    printf("\nAREA: %.2f", x[2]);
    printf("\nCIRCUNFERENCIA: %.2f", x[3]);
}

int questao07(){
    float raio, dpav[3];
    entradaq7(&raio);
    exibirq7(processamentoq7(raio, dpav));
    return 0;
}
