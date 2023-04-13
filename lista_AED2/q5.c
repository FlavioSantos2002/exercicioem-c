#include <stdio.h>

void entrada(float *salario, int *dependentes){
    printf("digite o salario base: ");
    scanf("%f", salario);

    printf("\ndigite o numero de dependentes: ");
    scanf("%d", dependentes);
}

float processamento(float salario, int dependentes){
    salario = salario + (32*dependentes);
    salario = salario - (27.5*salario)/100;
    return salario; 
}

void exibir(float x){
    printf("o valor do salrio liquedo eh: %.2f", x);
}

int main(){
    questao03();
    return 0;
}

int questao03(){
    float salario, salario_bruto;
    int dependentes;
    entrada(&salario, &dependentes);
    salario_bruto = processamento(salario, dependentes);
    exibir(salario_bruto);
    return 0;
}