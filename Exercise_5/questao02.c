#include <stdio.h>
#include <string.h>

int main()
{
    char numero[10];
    printf("Digite os 9 numeros: \n");
    scanf("%9s", numero);

    int n = strlen(numero);
    for (int i = 0 ; i<n; i++){
        putchar (numero[i]);
        if (i == 0 && n == 9){
            printf(".");
        }
        if(i==3 && n == 9 ){
            printf(".");
        }
        if(i== 6 && n == 9){
            printf(",");
        }

    }
    printf("\n");
    return 0;
}
