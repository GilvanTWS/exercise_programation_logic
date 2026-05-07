#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    printf("Digite o tamanho N da matriz quadrada: ");
    scanf("%d", &N);
    int **mat = (int **) malloc(N * sizeof(int *));
    for (int i = 0; i < N; i++) {
        mat[i] = (int *) malloc(N * sizeof(int));
    }

    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    int soma_ref = 0;
    for (int j = 0; j < N; j++) soma_ref += mat[0][j];

    for (int i = 0; i < N; i++) {
        int soma = 0;
        for (int j = 0; j < N; j++) soma += mat[i][j];
        if (soma != soma_ref) {
            printf("Nao eh quadrado magico\n");
            goto fim;
        }
    }

    for (int j = 0; j < N; j++) {
        int soma = 0;
        for (int i = 0; i < N; i++) soma += mat[i][j];
        if (soma != soma_ref) {
            printf("Nao eh quadrado magico\n");
            goto fim;
        }
    }
    int soma_diag1 = 0;
    for (int i = 0; i < N; i++) soma_diag1 += mat[i][i];
    if (soma_diag1 != soma_ref) {
        printf("Nao eh quadrado magico\n");
        goto fim;
    }
    int soma_diag2 = 0;
    for (int i = 0; i < N; i++) soma_diag2 += mat[i][N - 1 - i];
    if (soma_diag2 != soma_ref) {
        printf("Nao eh quadrado magico\n");
        goto fim;
    }

    printf("Eh quadrado magico!\n");

fim:
    for (int i = 0; i < N; i++) free(mat[i]);
    free(mat);

    return 0;
}
