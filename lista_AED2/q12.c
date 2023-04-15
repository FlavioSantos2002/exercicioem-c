#include <stdio.h>

void entrada(float *n1, float *n2){
    printf("digite o valor da primeira nota: ");
    scanf("%f", n1);

    printf("digite o valor da segunda nota: ");
    scanf("%f", n2);
}

char *processamento(float n1, float n2){
    float media;
    char resultado[100];
    media = (n1 + n2)/2.0;
    if (media>=7){
        sprintf(resultado, "media:  %.2f Situacao: aprovado", media);
    }
    else{
        sprintf(resultado, "media:  %.2f Situacao: reprovado", media);
    }
    printf(resultado);
    char *ponteiro = resultado;
    return ponteiro;
    
}

void saida(char texto[100]){
    printf("\n", texto);
}

void main(){
     questao11(); 
}

void questao11(){

    float nota1, nota2;
    entrada(&nota1, &nota2);
    char *r = processamento(nota1, nota2);
    saida(r);


}