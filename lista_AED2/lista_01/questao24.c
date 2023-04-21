#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "questao24.h"

char* calcular_trocoq24(int valor_compra, int valor_pagamento) {
    char* resultado = malloc(100 * sizeof(char));
    int troco = valor_pagamento - valor_compra;
    if (troco < 0) {
        strcpy(resultado, "Pagamento Negado");
    } else {
        int notas_100 = troco / 100;
        troco = fmod(troco, 100);
        int notas_10 = troco / 10;
        troco = fmod(troco, 10);
        int notas_1 = troco;
        sprintf(resultado, "Notas de 100: %d, Notas de 10: %d, Notas de 1: %d", notas_100, notas_10, notas_1);
    }
    return resultado;
}


void entradaq24(int *valor_compra, int *valor_pagamento) {
    printf("Digite o valor da compra: ");
    scanf("%d", valor_compra);
    printf("Digite o valor do pagamento: ");
    scanf("%d", valor_pagamento);
}


void saidaq24(int valor_compra, int valor_pagamento) {
    char* troco = calcular_trocoq24(valor_compra, valor_pagamento);
    printf("%s\n", troco);
    free(troco);
}

int questao24() {
    int valor_compra, valor_pagamento;
    entradaq24(&valor_compra, &valor_pagamento);
    saidaq24(valor_compra, valor_pagamento);
    return 0;
}
