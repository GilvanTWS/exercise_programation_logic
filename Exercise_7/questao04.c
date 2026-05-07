#include <stdio.h>
#include <stdlib.h>
int** mati(int n){
    int **mat = (int**) malloc(n*sizeof(int*));
    for (int i = 0; i<n; i++){
        mat[i]= (int*)malloc(n*sizeof(int));
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i != j){
                mat[i][j] = 0;
                printf("%d ", mat[i][j]);
            }
            else{
                mat[i][j] = 1;
                printf("%d ", mat[i][j]);
            }
        }
        printf("\n");
    }
    return mat;
}

int main()
{
    int n, **mat;
    scanf("%d", &n);
    mat = mati(n);
    return 0;
}