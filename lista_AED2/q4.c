#include <stdio.h>

void entrada(float *salario, float *porcentagem){
    printf("digite o salario atual: ");
    scanf("%f", salario);

    printf("\ndigite o aumento em porcentagem(OBS: DIGITE VALORES DE 0 A 100): ");
    scanf("%f", porcentagem);
}

float processamento(float salario, float porcentagem){
    return salario + (salario*porcentagem)/100;
}

void exibir(float media){
    printf("o valor do novo salrio eh: %.2f", media);
}

int main(){
    questao03();
    return 0;
}

int questao03(){
    float salario, porcentagem, novo_salario;
    entrada(&salario, &porcentagem);
    novo_salario = processamento(salario, porcentagem);
    exibir(novo_salario);
    return 0;
}