#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "questao23.h"

void entradaq23(char *a, float *b){
    printf("digite o tipo do carro: ");
    scanf("%c", a);
    printf("digite o percurso em quilometros: ");
    scanf("%f", b);
}


char* processamentoq23(char a, float k) {
    char* str = malloc(20 * sizeof(char));
    float c;
    switch (a){
        case 'a':
            c = k / 8.0;
            sprintf(str, "%.2f", c);
            return str;
        case 'b':
            c = k / 9.0;
            sprintf(str, "%.2f", c);
            return str;
        case 'c':
            c = k / 12.0;
            sprintf(str, "%.2f", c);
            return str;
        default:
            return "OPCAO INVALIDA";
    }
}

void saidaq23(char texto[]){
    if (texto[0] == 'O'){
        printf("%s", texto);
    }
    else{
        printf("cunsumo estimado de %s", texto);
        printf(" litros de gasolina");
    }

}

void questao23(){
    char t;
    float k;
    entradaq23(&t, &k);
    char* r = processamentoq23(t, k);
    saidaq23(r);
}

