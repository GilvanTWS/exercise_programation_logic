#include <stdio.h>

int main() {
    int totalEleitores, votosBrancos, votosNulos, votosValidos;

    printf("Digite o numero total de eleitores: ");
    scanf("%d", &totalEleitores);

    printf("Digite o numero de votos brancos: ");
    scanf("%d", &votosBrancos);

    printf("Digite o numero de votos nulos: ");
    scanf("%d", &votosNulos);

    printf("Digite o numero de votos validos: ");
    scanf("%d", &votosValidos);

    float percBrancos = (votosBrancos * 100.0) / totalEleitores;
    float percNulos = (votosNulos * 100.0) / totalEleitores;
    float percValidos = (votosValidos * 100.0) / totalEleitores;

    printf("\nPercentual de votos brancos: %.2f%%\n", percBrancos);
    printf("Percentual de votos nulos: %.2f%%\n", percNulos);
    printf("Percentual de votos validos: %.2f%%\n", percValidos);

    return 0;
}
