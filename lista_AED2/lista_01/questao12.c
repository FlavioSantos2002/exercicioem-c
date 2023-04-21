#include <stdio.h>
#include "questao12.h"


void entradaq12(float *n1, float *n2){
    printf("digite o valor da primeira nota: ");
    scanf("%f", n1);

    printf("digite o valor da segunda nota: ");
    scanf("%f", n2);
}

char *processamentoq12(float n1, float n2){
    float media;
    char resultado[100];
    media = (n1 + n2)/2.0;
    if (media>=7){
        sprintf(resultado, "media:  %.2f Situacao: aprovado", media);
    }
    else{
        sprintf(resultado, "media:  %.2f Situacao: reprovado", media);
    }
    printf(resultado);
    char *ponteiro = resultado;
    return ponteiro;

}

void saidaq12(char texto[100]){
    printf("\n", texto);
}



void questao12(){

    float nota1, nota2;
    entradaq12(&nota1, &nota2);
    char *r = processamentoq12(nota1, nota2);
    saidaq12(r);

}
