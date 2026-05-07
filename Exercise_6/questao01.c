#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **mat;
    int N, x;
    printf("Digite o tamanho N da matriz: ");
    scanf("%d", &N);
    mat = (int **) malloc(N * sizeof(int *));
    if (mat == NULL){
        printf("Erro na alocação de memoria\n");
        return 1;
    }
    for (int i = 0 ; i<N ; i++){
        mat[i] = (int *) malloc(N * sizeof(int));
        if (mat[i] == NULL){
            printf("Falha na alocação de memoria\n");
            return 1;
        }
    }
    printf("Digite os elementos da matriz %dX%d\n", N, N);
    for (int i = 0 ; i < N ; i++){
        for (int j = 0 ; j< N ; j++){
            scanf("%d", &mat[i][j]);

        }
    }
    printf("Essa é sua matriz original:\n");
    for(int i = 0 ; i < N ; i++){
        for (int j = 0 ; j< N ; j++){
            printf(" %d ", mat[i][j]);
        }
        printf("\n");
    }
    printf("Agora digite o valo X pelo qual voce deseja multiplicar os elementos de sua matriz: ");
    printf("\n Essa é sua nova matriz: \n");

    scanf("%d", &x);
    for (int i = 0 ; i< N ; i++){
        for (int j = 0 ; j <N ; j++){
            printf(" %d ", mat[i][j]*x );           
        }
        printf("\n");
    }

    for (int i = 0 ; i < N ; i++){
        free(mat[i]);
    }
    free(mat);

    return 0;
}
