#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mat[2][2];
    printf("Digite os valores da sua matriz: ");
    for (int i = 0 ; i<2 ; i++){
        for (int j = 0 ; j<2 ; j++){
            scanf("%d", &mat[i][j]);
        }
    }
    printf("\nSua matriz original é:\n");
    for (int i = 0 ; i<2 ; i++){
        for (int j = 0 ; j<2 ; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    printf("\nAgora, o determinante da tua matriz sera:\n");
    printf("(%d * %d) - (%d * %d) = \n", mat[0][0], mat[1][1], mat[0][1], mat[1][0]);
    printf("%d - %d = \n", mat[0][0]*mat[1][1], mat[0][1]*mat[1][0]);
    printf("%d", (mat[0][0]*mat[1][1])-(mat[0][1]*mat[1][0]));

    return 0 ;
}
