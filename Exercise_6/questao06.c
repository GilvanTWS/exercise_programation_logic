#include <stdio.h>
#include <stdlib.h>

int main(   )
{
    int **mat, **transp, n, m;
    printf("Digite o numero de linha N da sua matriz: ");
    scanf("%d", &n);
    printf("\nAgora digite o numero M de colunas: ");
    scanf("%d", &m);
    mat = (int**) malloc(n*sizeof(int*));
    for(int i =0 ; i <n ;i++){
        mat[i] = (int *) malloc(m*sizeof(int));
    }
    printf("\nDigite os elementos da sua matriz:\n");
    for (int i = 0 ; i< n; i++){
        for (int j = 0 ; j< m ; j++){
            scanf("%d", &mat[i][j]);
        }
    }    
    printf("\nSua matriz original é:\n");
    for (int i = 0 ; i< n; i++){
        for (int j = 0 ; j< m ; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    transp = (int**) malloc(m*sizeof(int*));
    for(int i = 0; i < m; i++){
        transp[i] = (int*) malloc(n*sizeof(int));
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            transp[j][i] = mat[i][j];
        }
    }

    printf("\nSua matriz transposta é:\n");
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            printf("%d ", transp[i][j]);
        }
        printf("\n");
    }
    return 0;
}
