#include <stdio.h>
#include <stdlib.h>
void func(int a, int b, int *soma);

int main()
{
    printf("Digite o valor de A: ");
    int x, y, z;
    scanf("%d", &x);
    printf("\nDigite o valor de B: ");
    scanf("%d", &y);
    func(x,y, &z);

    return 0;
}
void func(int a, int b, int *soma){
    *soma = a+b;
    printf("soma = %d", *soma);
}