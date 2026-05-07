#include <stdio.h>
#include <stdlib.h>

int* uniao(int *vet1, int n1, int *vet2, int n2, int *tam) {
    int *res = (int*)malloc((n1 + n2) * sizeof(int));
    int k = 0;
    for (int i = 0; i < n1; i++)
        res[k++] = vet1[i];
    for (int i = 0; i < n2; i++) {
        int existe = 0;
        for (int j = 0; j < n1; j++) {
            if (vet2[i] == vet1[j]) {
                existe = 1;
                break;
            }
        }
        if (!existe)
            res[k++] = vet2[i];
    }
    *tam = k;
    return res;
}

int main() {
    int n1, n2;
    printf("Digite o tamanho do primeiro vetor: ");
    scanf("%d", &n1);
    int vet1[n1];
    printf("Digite os elementos:\n");
    for (int i = 0; i < n1; i++)
        scanf("%d", &vet1[i]);

    printf("Digite o tamanho do segundo vetor: ");
    scanf("%d", &n2);
    int vet2[n2];
    printf("Digite os elementos:\n");
    for (int i = 0; i < n2; i++)
        scanf("%d", &vet2[i]);

    int tam;
    int *res = uniao(vet1, n1, vet2, n2, &tam);
    printf("Uniao: ");
    for (int i = 0; i < tam; i++)
        printf("%d ", res[i]);
    printf("\n");
    free(res);
    return 0;
}
