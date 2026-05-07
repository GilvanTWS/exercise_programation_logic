#include <stdio.h>

int main()
{
    int a, b, temp;
    printf("Digite o valor de A e o valor de B: \n");    
    scanf("%d %d", &a, &b);
    temp=a;
    a=b;
    b=temp;
    printf("O valor de A agora é %d e de B agora é %d", a, b);
    return 0;
}
