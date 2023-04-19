#include <stdio.h>

void entrada(int *num){
    printf("diogite o valor do numero: ");
    scanf("%d", num);
}

char *processamento(int num){
    if (num%2 == 0){
        return "EH PAR";
    }
    else{
        return "EH IMPAR";
    }
}

void saida(int num, char texto[100]){
    printf("o numero %d %s", num, texto);
}

void questao14(){
    int num;
    entrada(&num);
    char *r = processamento(num);
    saida(num, r);
}

void main(){
    questao14();    
}