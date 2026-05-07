#include <stdio.h>

void func(float x, int *i, float *f) {
    *i = (int)x;
    *f = x - *i;
}

int main() {
    float x, frac;
    int inteiro;
    printf("Digite um numero float: ");
    scanf("%f", &x);
    func(x, &inteiro, &frac);
    printf("Parte inteira: %d\n", inteiro);
    printf("Parte fracionaria: %f\n", frac);
    return 0;
}
