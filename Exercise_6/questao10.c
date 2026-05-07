#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **mat, n, m, **mat1;
    printf("Digite a quantidade de linhas da sua matriz:\n");
    scanf("%d", &n);
    printf("Digite o numero de colunas da sua matriz:\n");
    scanf("%d", &m);
    mat = (int**)malloc(n*sizeof(int*));
    for(int i = 0; i<n ; i++){
        mat[i] = (int*) malloc(m*sizeof(int));
    }

    printf("Agora digite os elemntos da sua matriz %dX%d\n", n, m);
    for(int i = 0 ; i < n ; i++){
        for(int j =0 ; j<m; j++){
            scanf("%d", &mat[i][j]);
        }
    }
    printf("\n matriz original\n");
    for(int i = 0 ; i < n ; i++){
        for(int j =0 ; j<m; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    mat1 = (int**)malloc(n*sizeof(int*));
    for(int i = 0; i<n ; i++){
        mat1[i] = (int*) malloc(m*sizeof(int));
    }
    printf("\nMatriz rotacionada:\n");
    for(int i = 0 ; i < n ; i++){
        for(int j= 0 ; j<m ; j++){
            mat1[n-1-i][m-1-j] = mat[i][j];
        }
    }
   for(int i = 0 ; i < n ; i++){
        for(int j =0 ; j<m; j++){
            printf("%d ", mat1[i][j]);
        }
        printf("\n");
    }
    return 0;
}
