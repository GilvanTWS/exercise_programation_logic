#include <stdio.h>

int maiorVetor(int *vet, int n) {
    int maior = vet[0];
    for (int i = 1; i < n; i++) {
        if (vet[i] > maior)
            maior = vet[i];
    }
    return maior;
}

int main() {
    int n;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    int vet[n];
    printf("Digite os elementos:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &vet[i]);
    printf("Maior elemento: %d\n", maiorVetor(vet, n));
    return 0;
}
