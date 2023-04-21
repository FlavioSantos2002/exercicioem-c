#include <stdio.h>
#include "questao17.h"

void entradaq17(float *compra){
    printf("digite o valor da compra: ");
    scanf("%f", compra);
}

void processamentoq17(float *venda){
    if (*venda<200){
        *venda = *venda + *venda*0.5;
    }
    else{
        *venda = *venda + *venda*0.3;
    }
}

void saidaq17(float venda){
    printf("o valor para venda eh: %.2f", venda);
}

void questao17(){
    float vc;
    entradaq17(&vc);
    processamentoq17(&vc);
    saidaq17(vc);
}
