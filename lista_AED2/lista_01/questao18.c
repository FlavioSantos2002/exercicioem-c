#include <stdio.h>
#include <string.h>
#include "questao18.h"

void entradaq18(float *n1, float *n2){
    printf("digite o valor da nota 1: ");
    scanf("%f", n1);
    printf("digite o valor da nota 2: ");
    scanf("%f", n2);
}

char *processamentoq18(float *n1, float *n2){
    float media = (*n1 + *n2) / 2.0;
    char* texto = malloc(20 * sizeof(char));
    sprintf(texto, "%.2f", media);
    char apv[20] = "\nESTA APROVADO";
    char rpv[20] = "\nESTA REPROVADO";
    char pf[22] = "\nESTA DE PROVA FINAL";
    if (media >= 7){
        return strcat(texto, apv);
    }
    else{
        if(media<3){
            return strcat(texto, rpv);
        }
        else{
            return strcat(texto, pf);
        }
    }
}

void saidaq18(char texto[100]){
    printf("MEDIA FINAL: %s", texto);
    free(texto);
}

void questao18(){
    float n1, n2;
    entradaq18(&n1, &n2);
    char *r = processamentoq18(&n1, &n2);
    saidaq18(r);
}
