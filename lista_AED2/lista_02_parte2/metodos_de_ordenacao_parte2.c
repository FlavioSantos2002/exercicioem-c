#include <stdio.h>
#include <stdlib.h>

int main(){
    int opcao;
    printf("1 -- mergeSort\n");
    printf("2 -- quickSort\n");
    printf("digite uma das opcoes: ");
    scanf("%d", &opcao);
    switch(opcao){
        case 1:
        metodoMS();
        break;
        case 2:
        metodoQS();
        break;
    }

    return 0;
}


int* criar_vetor(int tamanho) {
    int* vetor2 = (int*)malloc(tamanho * sizeof(int));
    printf("Digite os valores do vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &vetor2[i]);
    }
    return vetor2;
}

void merge(int vetor[], int esq[], int dir[], int te, int td) { //tamanho esquerdo = te
    int i = 0;
    int j = 0;
    int k = 0;

    while (i < te && j < td) {
        if (esq[i] <= dir[j]) {
            vetor[k] = esq[i];
            i++;
        } else {
            vetor[k] = dir[j];
            j++;
        }
        k++;
    }

    while (i < te) {
        vetor[k] = esq[i];
        i++;
        k++;
    }

    while (j < td) {
        vetor[k] = dir[j];
        j++;
        k++;
    }
}

int* mergeSort(int vetor[], int tamanho){
    if (tamanho < 2) {
        return 0;
    }

    int mid = tamanho / 2;

    int esq[mid];
    int dir[tamanho - mid];
    int i;


    for (i = 0; i < mid; i++) {
        esq[i] = vetor[i];
    }
    for (i = mid; i < tamanho; i++) {
        dir[i - mid] = vetor[i];
    }


    mergeSort(esq, mid);
    mergeSort(dir, tamanho - mid);

    merge(vetor, esq, dir, mid, tamanho - mid);
}

int metodoMS() {
    int tamanho;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int* vetor = criar_vetor(tamanho);
    int i;

    printf("antes da ordenacao:\n");
    for (i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }

    mergeSort(vetor, tamanho);

    printf("\n\nordenacao MS:\n");
    for (i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }

    free(vetor);

    return 0;
}



void trocar(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int particionar(int vetor[], int baixo, int alto) {
    int pivo = vetor[alto];
    int i = (baixo - 1);

    for (int j = baixo; j <= alto - 1; j++) {

        if (vetor[j] <= pivo) {
            i++;
            trocar(&vetor[i], &vetor[j]);
        }
    }
    trocar(&vetor[i + 1], &vetor[alto]);
    return (i + 1);
}

void quickSort(int vetor[], int baixo, int alto) {
    if (baixo < alto) {
        int pi = particionar(vetor, baixo, alto);
        quickSort(vetor, baixo, pi - 1);
        quickSort(vetor, pi + 1, alto);
    }
}




int metodoQS() {
    int tamanho;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int* vetor = criar_vetor(tamanho);
    int i;

    printf("antes da ordenacao:\n");
    for (i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }

    quickSort(vetor, 0, tamanho - 1);

    printf("\n\nordenacao QS:\n");
    for (i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }

    free(vetor);

    return 0;
}
