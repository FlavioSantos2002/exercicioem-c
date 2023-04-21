#include <stdio.h>
#include "questao16.h"

void entradaq16(float *salario){
    printf("digite o valor do salrio bruto: ");
    scanf("%f", salario);
}

void processamentoq16(float *salario){
    if (*salario<2000){
        *salario = *salario - *salario*0.1;
    }
    else{
        *salario = *salario - *salario*0.2;
    }
}

void saidaq16(float salario){
    printf("o valor final do salrio eh: %.2f", salario);
}

void questao16(){
    float salario;
    entradaq16(&salario);
    processamentoq16(&salario);
    saidaq16(salario);
}

