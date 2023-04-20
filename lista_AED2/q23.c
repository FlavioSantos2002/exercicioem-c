#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void entrada(char *a, float *b){
    printf("digite o tipo do carro: ");
    scanf("%c", a);
    printf("digite o percurso em quilometros: ");
    scanf("%f", b);
}


char* processamento(char a, float k) {
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

void saida(char texto[]){
    if (texto[0] == 'O'){
        printf("%s", texto);
    }
    else{
        printf("cunsumo estimado de %s", texto, "litros de gasolina");
    }
    
}

void questao23(){
    char t;
    float k;
    entrada(&t, &k);
    char* r = processamento(t, k);
    saida(r);
}

void main(){
    questao23();
}