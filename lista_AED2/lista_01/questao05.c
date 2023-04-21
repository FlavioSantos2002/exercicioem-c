#include <stdio.h>
#include <stdlib.h>
#include "questao05.h"

void entradaq5(float *salario, int *dependentes){
    printf("digite o salario base: ");
    scanf("%f", salario);

    printf("\ndigite o numero de dependentes: ");
    scanf("%d", dependentes);
}

float processamentoq5(float salario, int dependentes){
    salario = salario + (32*dependentes);
    salario = salario - (27.5*salario)/100;
    return salario;
}

void exibirq5(float x){
    printf("o valor do salrio liquedo eh: %.2f", x);
}

int questao05(){
    float salario, salario_bruto;
    int dependentes;
    entradaq5(&salario, &dependentes);
    salario_bruto = processamentoq5(salario, dependentes);
    exibirq5(salario_bruto);
    return 0;
}
