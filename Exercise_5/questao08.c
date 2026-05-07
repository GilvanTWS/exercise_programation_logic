#include <stdio.h>
#include <string.h>

int main()
{
    char nomes[4][100], aux[100];
    for (int i = 0; i < 4; i++){
        printf("Digite o nome %d\n", i+1);
        scanf("%s", nomes[i]);
    }
    for (int i = 0; i < 3; i++){
        for (int k = 0; k < 3 - i; k++){
            if (strcmp(nomes[k], nomes[k+1]) > 0){
                strcpy(aux, nomes[k]);
                strcpy(nomes[k], nomes[k+1]);
                strcpy(nomes[k+1], aux);
            }
        }
    }
    for (int i = 0; i < 4; i++){
        printf("\n%s", nomes[i]);
    }
    return 0;
}
