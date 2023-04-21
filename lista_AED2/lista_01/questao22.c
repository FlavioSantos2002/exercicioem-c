#include <stdio.h>
#include <string.h>
#include "questao22.h"

void entradaq22(char a[100], int *b, int *c){
    printf("digite o nome do municipio: ");
    fgets(a, 100, stdin);
    printf("digite o numero de eleitores: ");
    scanf("%d", b);
    printf("digite o numero de votos do candidato mais votado: ");
    scanf("%d", c);
}


char* processamentoq22(char nome[100], int e, int v) {
    if ((e<200000) || (v>e*0.5)){
        char t[] = "nao tera segundo turno";
        return strcat(nome, t);
    }
    else{
        char t[] = "tera segundo turno";
        return strcat(nome, t);
    }
}

void saidaq22(char texto[200]){
    printf("a cidade de %s", texto);
}

void questao22(){
    char m[100];
    int e, v;
    entradaq22(m, &e, &v);
    char* r = processamentoq22(m , e, v);
    saidaq22(r);
}

