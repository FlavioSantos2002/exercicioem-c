#include <stdio.h>

void entrada(float *salario){
    printf("digite o valor do salrio bruto: ");
    scanf("%f", salario);
}

void processamento(float *salario){
    if (*salario<2000){
        *salario = *salario - *salario*0.1;
    }
    else{
        *salario = *salario - *salario*0.2;
    }
}

void saida(float salario){
    printf("o valor final do salrio eh: %.2f", salario);
}

void questao16(){
    float salario;
    entrada(&salario);
    processamento(&salario);
    saida(salario);
}

void main(){
    questao16();    
}