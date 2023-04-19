#include <stdio.h>
#include <string.h>

void entrada(float *n1, float *n2){
    printf("digite o valor da nota 1: ");
    scanf("%f", n1);
    printf("digite o valor da nota 2: ");
    scanf("%f", n2);
}

char *processamento(float *n1, float *n2){
    float media = (*n1 + *n2) / 2.0;
    char texto[20];
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

void saida(char texto[100]){
    printf("MEDIA FINAL: %s", texto);
}

void questao18(){
    float n1, n2;
    entrada(&n1, &n2);
    char *r = processamento(&n1, &n2);
    saida(r);
}

void main(){
    questao18();    
}