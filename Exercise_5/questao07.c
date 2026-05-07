#include <stdio.h>
#include <string.h>

int main()
{
    char nomecompleto[1000];
    int ultimoEspaco = -1;
    printf("Digite seu nome completo:\n");
    fgets(nomecompleto, sizeof(nomecompleto), stdin);
    int j = strlen(nomecompleto);
    if (j > 0 && nomecompleto[j-1] == '\n'){
        nomecompleto[j-1] = '\0';
        j--;
    }

    for (int i = j-1; i >= 0; i--){
        if (nomecompleto[i] == ' '){
            ultimoEspaco = i;
            break;
        }
    }

    for (int i = ultimoEspaco + 1; i < j; i++){
        printf("%c", nomecompleto[i]);
    }
    printf(", ");
    for (int i = 0; i < ultimoEspaco; i++){
        printf("%c", nomecompleto[i]);
    }
    printf("\n");
    return 0;
}
