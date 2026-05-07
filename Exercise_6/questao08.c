#include <stdio.h>
#include <stdlib.h>
int main()
{
    int **mat, somatorio, n, ehdominante=0;
    printf("Digite o valor N das linhas e colunas da sua matriz\n");
    scanf("%d", &n);
    mat = (int**)malloc(n*sizeof(int*));
    for (int i = 0 ; i<n;i++){
        mat[i] = (int*) malloc(n*sizeof(int));

    }

    printf("\nDigite os valores da matriz:\n");
    for(int i = 0 ; i<n ; i++){
        for(int j = 0 ; j<n ; j++){
            scanf("%d", &mat[i][j]);
        }
    }
    printf("\nSua matriz é:\n");
    for(int i = 0 ; i<n ; i++){
        for(int j = 0 ; j<n ; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    for(int i = 0 ; i<n ; i++){
        somatorio = 0;
        for(int j = 0 ; j<n; j++){
            if(j!=i){
            somatorio+=mat[i][j];
            }
        }
        if(mat[i][i]>somatorio){
            ehdominante+=1;
        }
        else{
            break;
        }
    }
    if(ehdominante == n){
        printf("\n Sua matriz é do tipo diagonal dominante\n");
    }
    else{
        printf("Sua matriz nao é do tipo diagonal dominante\n");
    }
    return 0;
}