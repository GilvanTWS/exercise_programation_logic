#include <stdio.h>

int main() {
    int n;
    int valorA;
    int valorB;
    int segmentos = 1;

    printf("Qual vai ser o tamanho da sequencia? ");
    scanf("%d", &n);

    printf("Digite uma sequencia com %d numeros!\n", n);

    for (int i = 1; i <= n; i++) {
        printf("Elemento %d : ", i);
        scanf("%d", &valorA);

        if (i > 1 && valorA != valorB)
            segmentos++;

        valorB = valorA;
    }

    printf("Ha %d segmentos de numeros consecutivos\n", segmentos);

    return 0;
}
