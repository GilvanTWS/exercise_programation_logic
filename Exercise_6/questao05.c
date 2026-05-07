#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mat[3][3];
    printf("Digite os valores da sua matriz 3x3\n");
    for (int i = 0 ; i < 3 ; i++){
        for (int j = 0 ; j<3; j++){
            scanf("%d", &mat[i][j]);
        }
    }

    printf("\nSua matriz original é:\n");
    for (int i = 0 ; i < 3 ; i++){
        for (int j = 0 ; j<3; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    printf("\nO determinante da tua matriz é calculado por:\n");
    printf("[(%d*%d*%d)+(%d*%d*%d)+(%d*%d*%d)] - "
           "[(%d*%d*%d)+(%d*%d*%d)+(%d*%d*%d)]\n",
        mat[0][0], mat[1][1], mat[2][2],
        mat[0][1], mat[1][2], mat[2][0],
        mat[0][2], mat[1][0], mat[2][1],
        mat[0][2], mat[1][1], mat[2][0],
        mat[0][0], mat[1][2], mat[2][1],
        mat[0][1], mat[1][0], mat[2][2]);

    int positivos = mat[0][0]*mat[1][1]*mat[2][2]
                  + mat[0][1]*mat[1][2]*mat[2][0]
                  + mat[0][2]*mat[1][0]*mat[2][1];

    int negativos = mat[0][2]*mat[1][1]*mat[2][0]
                  + mat[0][0]*mat[1][2]*mat[2][1]
                  + mat[0][1]*mat[1][0]*mat[2][2];

    printf("(%d + %d + %d) - (%d + %d + %d)\n",
           mat[0][0]*mat[1][1]*mat[2][2],
           mat[0][1]*mat[1][2]*mat[2][0],
           mat[0][2]*mat[1][0]*mat[2][1],
           mat[0][2]*mat[1][1]*mat[2][0],
           mat[0][0]*mat[1][2]*mat[2][1],
           mat[0][1]*mat[1][0]*mat[2][2]);

    printf("%d - %d\n", positivos, negativos);
    printf("Determinante = %d\n", positivos - negativos);

    return 0;
}
