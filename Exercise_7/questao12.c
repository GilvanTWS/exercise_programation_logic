#include <stdio.h>
#include <stdlib.h>

int* intersecao(int *vet1, int n1, int *vet2, int n2, int *tam) {
    int *res = (int*)malloc((n1 < n2 ? n1 : n2) * sizeof(int));
    int k = 0;
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (vet1[i] == vet2[j]) {
                int duplicado = 0;
                for (int l = 0; l < k; l++) {
                    if (res[l] == vet1[i]) {
                        duplicado = 1;
                        break;
                    }
                }
                if (!duplicado)
                    res[k++] = vet1[i];
                break;
            }
        }
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
    int *res = intersecao(vet1, n1, vet2, n2, &tam);
    printf("Interseccao: ");
    for (int i = 0; i < tam; i++)
        printf("%d ", res[i]);
    printf("\n");
    free(res);
    return 0;
}
