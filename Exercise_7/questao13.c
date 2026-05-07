#include <stdio.h>
#include <stdlib.h>

int** criaMatriz(int n, int m) {
    int **mat = (int**)malloc(n * sizeof(int*));
    for (int i = 0; i < n; i++)
        mat[i] = (int*)malloc(m * sizeof(int));
    return mat;
}

int main() {
    int n, m;
    printf("Digite o numero de linhas: ");
    scanf("%d", &n);
    printf("Digite o numero de colunas: ");
    scanf("%d", &m);
    int **mat = criaMatriz(n, m);
    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%d", &mat[i][j]);
    printf("Matriz criada:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            printf("%d ", mat[i][j]);
        printf("\n");
    }
    for (int i = 0; i < n; i++)
        free(mat[i]);
    free(mat);
    return 0;
}
