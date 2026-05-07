#include <stdio.h>
#include <math.h>

int main() {
    int num1, num2;
    float num3;

    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &num2);

    printf("Digite um numero real: ");
    scanf("%f", &num3);

    float resultado1 = (2 * num1) * (num2 / 2.0);
    float resultado2 = (3 * num1) + num3;
    float resultado3 = pow(num3, 3);

    printf("i) Produto do dobro do primeiro com metade do segundo: %.2f\n", resultado1);
    printf("ii) Soma do triplo do primeiro com o terceiro: %.2f\n", resultado2);
    printf("iii) Terceiro elevado ao cubo: %.2f\n", resultado3);

    return 0;
}
