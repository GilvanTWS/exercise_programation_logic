#include <stdio.h>
#include <stdlib.h>
void printmatriz(int **mat, int N);
void mediamatriz(int **mat, int N);

int main()
{
    int **mat, N;
    printf("Digite o tamanho N x N da sua matriz: ");
    scanf("%d", &N);
    mat = (int **) malloc(N*sizeof(int*));
    for (int i = 0 ; i < N ;i++){
        mat[i] = (int *) malloc(N * sizeof(int));
    }

    printf("Digite os valores da sua matriz:\n");
    for (int i = 0 ; i < N ; i++){
        for (int j = 0 ; j <N ; j++){
            scanf("%d", &mat[i][j]);
        }
        printf("\n");
    }
    printmatriz(mat, N);
    mediamatriz(mat, N);
    return 0;
}
void printmatriz(int **mat, int N){
    printf("\n Sua matriz original é:\n");
    for(int i = 0 ; i<N; i++){
        for (int j = 0 ; j<N; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}
void mediamatriz(int **mat, int N){
    int soma = 0;
    float media;
        for(int i = 0 ; i<N; i++){
        for (int j = 0 ; j<N; j++){
            soma = soma + mat[i][j];
        }
    }
    media = (float)soma/(N*N);
    printf("A media dos valores da sua matriz é: %0.2f", media);
}