#include<stdio.h>
#include <stdlib.h>

void entrada(int *a){
    printf("digite um numero: ");
    scanf("%d", a);
}

char *processamento(int a){  
    if (100<a){
        return "maior que 100";
    }
    else{
        return "menor que 100";
    }
}

void saida(char texto[100], int numero){
    printf("\no numero %d eh %s", numero, texto);
}

int main(){
    questao09();
    return 0;
}

int questao09(){
    int a;
    entrada(&a);
    char *r = processamento(a);
    saida(r, a);
    return 0;
}