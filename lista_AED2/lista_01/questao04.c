#include <stdio.h>
#include <stdlib.h>
#include "questao04.h"


void entradaq4(float *salario, float *porcentagem){
    printf("digite o salario atual: ");
    scanf("%f", salario);

    printf("\ndigite o aumento em porcentagem(OBS: DIGITE VALORES DE 0 A 100): ");
    scanf("%f", porcentagem);
}

float processamentoq4(float salario, float porcentagem){
    return salario + (salario*porcentagem)/100;
}

void exibirq4(float media){
    printf("o valor do novo salrio eh: %.2f", media);
}

int questao04(){
    float salario, porcentagem, novo_salario;
    entradaq4(&salario, &porcentagem);
    novo_salario = processamentoq4(salario, porcentagem);
    exibirq4(novo_salario);
    return 0;
}




