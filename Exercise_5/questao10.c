#include <stdio.h>
#include <string.h>
int main()
{
    char frase[1000], A[100], F[100], *palavra;
    printf("Digite sua frase:\n");
    fgets(frase,sizeof(frase), stdin);
    printf("\n Digite a palavra que voce deseja que nao apareça mais no texto:\n");
    scanf("%s", A);
    printf("Digite a palavra que voce deseja que apareça no texto agora:\n");
    scanf("%s", F);
    printf("\nTexto modificado\n");
    palavra = (strtok(frase," ")); //pega a primeira palavra de 'frase' e usa ' ' como delimitador , para saber onde ocmeçar e onde terminar
    while(palavra != NULL){ //"enquanto, palavra for diferente do ultimo caracter da string (/0)"
        if (strcmp(palavra, A)==0){
            printf("%s", F);
        }
        else{
            printf("%s", palavra);
        }
        palavra = strtok(NULL, " ");
    }
    printf("\n");
    return 0;
}
