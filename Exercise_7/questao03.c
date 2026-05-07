#include <stdio.h>
#include <stdlib.h>

int* criaVetor(int n) {
    int* vetor = (int*)malloc(n * sizeof(int));
    if (vetor == NULL) {
        printf("Erro na alocação de memória!\n");
    }
    return vetor;
}

int main() {
    int tamanho = 5;
    int* meuVetor = criaVetor(tamanho);

    if (meuVetor != NULL) {
        printf("Vetor de tamanho %d criado com sucesso.\n", tamanho);
        for (int i = 0; i < tamanho; i++) {
            meuVetor[i] = i * 10;
        }

        printf("Elementos do vetor: ");
        for (int i = 0; i < tamanho; i++) {
            printf("%d ", meuVetor[i]);
        }
        printf("\n");
        free(meuVetor);
        meuVetor = NULL; 
    }

    return 0;
}