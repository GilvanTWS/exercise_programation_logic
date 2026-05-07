#include <stdio.h>
#include <string.h>
int main()
{
    char palavra[50];
    printf("Digite sua palavra: ");
    scanf("%s", palavra);
    int j = strlen(palavra);
    for (int i = 0 ; i < j; i++){
        printf("\n");
        for(int l = 0 ; l <= i ; l++){
            printf("%c", palavra[l]);
        }
    }
    return 0;
}
