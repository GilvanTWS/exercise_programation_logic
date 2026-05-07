#include <stdio.h>
#include <string.h>

int main()
{
    char frase[1000];
    printf("Digite sua frase:\n");
    fgets(frase, sizeof(frase), stdin);
    int j = strlen(frase);
    for (int i = 0; i < j; i++){
        printf("%c", frase[i]);
        printf("%c", frase[i]);
    }
    return 0;
}
