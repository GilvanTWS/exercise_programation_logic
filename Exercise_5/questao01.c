#include <stdio.h>
#include <string.h>

int main()
{
    char nome[50];
    printf("Digite seu primeiro nome: ");
    scanf("%49s", nome);
    printf("\nSeu primeiro nome é: %s ", nome);
    char sobrenome[50];
    printf("\nDigite seu sbrenome: ");
    scanf("%49s", sobrenome);
    printf("\nSeu sobrenome é: %s ", sobrenome);
    char nomecompleto[120];
    strcpy(nomecompleto, nome);
    strcat(nomecompleto, " ");
    strcat(nomecompleto, sobrenome);
    printf("\n Seu nome completo é: %s ", nomecompleto);

    return 0;
}
