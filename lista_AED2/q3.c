#include <stdio.h>

void entrada(float *n1, float *n2, int *p1, int *p2){
    printf("digite a primeira nota: ");
    scanf("%f", n1);

    printf("\ndigite o peso da primeira nota: ");
    scanf("%d", p1);

    printf("\ndigite a segunda nota: ");
    scanf("%f", n2);

    printf("\ndigite o peso da segunda nota: ");
    scanf("%d", p2);
}

float processamento(float n1, float n2, int p1, int p2){
    return (n1*p1 + n2*p2)/(p1+p2);
}

void exibir(float media){
    printf("o valor da media eh: %.2f", media);
}

int main(){
    questao03();
    return 0;
}

int questao03(){
    float n1, n2, media;
    int p1, p2;
    entrada(&n1, &n2, &p1, &p2);
    media = processamento(n1, n2, p1, p2);
    exibir(media);
    return 0;
}