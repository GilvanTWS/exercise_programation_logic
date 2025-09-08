#include <stdio.h>
#define N 8
int main()
{
    int soma = 0 , niver1[N], niver2[N], soma2 = 0;
    printf("Digite a data de nascimento do primeiro:\n");
    for (int i = 0; i<N ; i++){
        scanf("%d", &niver1[i]);
        soma = niver1[i]+soma;
    }
    printf("Digite a data de nascimento do segundo:\n");
    for (int i = 0; i<N ; i++){
        scanf("%d", &niver2[i]);
        soma2 = niver2[i]+soma2;
    }
    while(soma>=10){
        int somanova = 0;
        while(soma> 0){
            somanova += soma %10;
            soma /= 10;
        }
        soma = somanova;
    }
    while(soma2>=10){
        int somanova2 = 0;
        while (soma2>0){
            somanova2 += soma2 % 10;
            soma2 /= 10;
        }
    soma2 = somanova2;
    }
    printf("\nO numero magico do primeiro é : %d\n", soma);
    printf("\nO numero magico do segundo é: %d\n", soma2);
    return 0;
}
