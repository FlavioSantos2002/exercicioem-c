#include <stdio.h>

int main(){
    int op;
    printf("1 -- Bubble Sort\n");
    printf("2 -- Insertion Sort\n");
    printf("3 -- Selection Sort \n");
    printf("digite uma das opcoes: ");
    printf("\n");
    scanf("%d", &op);
    switch (op){
        case 1:
        metodoBS();
        break;
        case 2:
        metodoIS();
        break;
        case 3:
        metodoSS();
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

int* blubbleSort(int *vetor, int tamanho){
    int aux;
    for (int i = 0; i < tamanho-1; i++){
        for(int j = 0; j<tamanho-1-i; j++){
            if (vetor[j]>vetor[j+1]){
                aux = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = aux;
            }
        }
    }
    return vetor;

}

int* insertionSort(int *vetor, int tamanho){
    int j;
    int aux;
    for (int i = 1; i<tamanho; i++){
        j = i;
        aux = vetor[i];
        while ((j>0) && (aux<vetor[j-1])){
            vetor[j] = vetor[j-1];
            j = j - 1;
        }
        vetor[j] = aux;
    }

    return vetor;

}

int poseMenorValor(int *vetor, int tamanho, int pos){
    int menor = vetor[pos];
    int posicao;
    for (int i = pos+1; i<tamanho; i++){
        if (menor > vetor[i]){
            menor = vetor[i];
            posicao = i;
        }
    }
    return posicao;
}


int* selectSort(int *vetor, int tamanho){
    int pm;
    int aux;
    for (int i = 0; i<tamanho-1; i++){
        pm = poseMenorValor(vetor, tamanho, i);
        if (vetor[i]>vetor[pm]){
            aux = vetor[i];
            vetor[i] = vetor[pm];
            vetor[pm] = aux;
        }
    }
    return vetor;
}


int metodoBS() {
    int tamanho;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int* vetor2 = criar_vetor(tamanho);

    printf("Vetor criado:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor2[i]);
    }
    printf("\n");

    int* vetor = blubbleSort(vetor2, tamanho);

    printf("Vetor ordenado BS:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    free(vetor);
    return 0;
}

int metodoIS() {
    int tamanho;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int* vetor2 = criar_vetor(tamanho);

    printf("Vetor criado:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor2[i]);
    }
    printf("\n");

    int* vetor = insertionSort(vetor2, tamanho);

    printf("Vetor ordenado IS:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    free(vetor);
    return 0;
}

int metodoSS() {
    int tamanho;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int* vetor2 = criar_vetor(tamanho);

    printf("Vetor criado:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor2[i]);
    }
    printf("\n");

    int* vetor = selectSort(vetor2, tamanho);

    printf("Vetor ordenado SS:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    free(vetor);
    return 0;
}
