#include <stdio.h>

void entrada(int *numero){
    printf("digite o valor do numero: ");
    scanf("%d", numero);
}

char *processamento(int numero){
    if (numero>100 && numero<500){
        return "esta entre 100 e 500";
    }
    else{
        return "nao esta entre 100 e 500";
    }
}

void saida(char texto[100], int numero){
    printf("o numero %d %s", numero, texto);
}

void main(){
     questao11(); 
}

void questao11(){

    int n;
    entrada(&n);
    char *r = processamento(n);
    saida(r, n);


}

