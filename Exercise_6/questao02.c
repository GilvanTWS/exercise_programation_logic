#include <stdio.h>
#include <stdlib.h>
void PrintMatriz(int **mat, int n);
void matrizoposta(int **mat, int n);
int main()
{ 
    int **mat;
    int n;
    printf("Digite o tamanho NXN da sua matriz: ");
    scanf("%d", &n);
    mat = (int **) malloc(n * sizeof(int *));
    if (mat == NULL){
        printf("Erro ao alocar memoria\n");
        return 1;
    }
    for (int i = 0 ; i <n ; i++){
        mat[i] = (int *) malloc(n*sizeof(int));
        if(mat[i] == NULL ){
            printf("Erro na alocação de memoria\n");
            return 1;
        }
    }
    printf("\nDigite os elementos da sua matriz:\n");
    for (int i = 0 ; i < n ; i++){
        for (int j = 0 ; j < n ; j++){
            scanf("%d", &mat[i][j]);
        }
    }
    printf("Sua matriz original é: \n");
    PrintMatriz(mat, n);
    printf("\nAgora, a matriz oposta é:\n");
    matrizoposta(mat, n);
    return 0;
}

void PrintMatriz(int **mat, int n){
    for( int i = 0 ; i< n ; i++){
        for (int j = 0 ; j < n ; j++){
        printf("%d ", mat[i][j]);
        } 
        printf("\n"); 
    }
    printf("\n");
}
void matrizoposta(int **mat, int n){
    for( int i = 0 ; i< n ; i++){
        for (int j = 0 ; j < n ; j++){
        printf("%d ", -mat[i][j]);
        } 
        printf("\n"); 
    }
    printf("\n");
}