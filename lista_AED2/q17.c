#include <stdio.h>

void entrada(float *compra){
    printf("digite o valor da compra: ");
    scanf("%f", compra);
}

void processamento(float *venda){
    if (*venda<200){
        *venda = *venda + *venda*0.5;
    }
    else{
        *venda = *venda + *venda*0.3;
    }
}

void saida(float venda){
    printf("o valor para venda eh: %.2f", venda);
}

void questao17(){
    float vc;
    entrada(&vc);
    processamento(&vc);
    saida(vc);
}

void main(){
    questao17();    
}