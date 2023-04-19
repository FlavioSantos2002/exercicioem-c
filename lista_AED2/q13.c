#include <stdio.h>

void entrada(int *num){
    printf("diogite o valor do numero: ");
    scanf("%d", num);
}

char *processamento(int num){
    if (num%5 == 0){
        return "EH DIVISIVEL";
    }
    else{
        return "NAO EH DIVISIVEL";
    }
}

void saida(int num, char texto[100]){
    printf("o numero %d %s por 5", num, texto);
}

void questao13(){
    int num;
    entrada(&num);
    char *r = processamento(num);
    saida(num, r);
}

void main(){
    questao13();    
}