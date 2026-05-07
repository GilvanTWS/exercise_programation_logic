#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, m, p, q, **mat1, **mat2, **mat3;

    printf("Digite o numero de linhas da primeira matriz: ");
    scanf("%d", &n);
    printf("Digite o numero de colunas da primeira matriz: ");
    scanf("%d", &m);
    printf("Digite o numero de linhas da segunda matriz: ");
    scanf("%d", &p);
    printf("Digite o numero de colunas da segunda matriz: ");
    scanf("%d", &q);
    if (m != p) {
        printf("\nImpossivel multiplicar: colunas da primeira (%d) diferente de linhas da segunda (%d)\n", m, p);
        return 0;
    }

    mat1 = (int**) malloc(n * sizeof(int*));
    for (int i = 0; i < n; i++)
        mat1[i] = (int*) malloc(m * sizeof(int));

    mat2 = (int**) malloc(p * sizeof(int*));
    for (int i = 0; i < p; i++)
        mat2[i] = (int*) malloc(q * sizeof(int));

    mat3 = (int**) malloc(n * sizeof(int*));
    for (int i = 0; i < n; i++)
        mat3[i] = (int*) malloc(q * sizeof(int));

    printf("\nDigite os elementos da primeira matriz:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%d", &mat1[i][j]);

    printf("\nDigite os elementos da segunda matriz:\n");
    for (int i = 0; i < p; i++){
        for (int j = 0; j < q; j++){
            scanf("%d", &mat2[i][j]);
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < q; j++) {
            mat3[i][j] = 0;
            for (int k = 0; k < m; k++) {
                mat3[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
    printf("\nResultado da multiplicacao:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < q; j++) {
            printf("%d ", mat3[i][j]);
        }
        printf("\n");
    }

    return 0;
}
