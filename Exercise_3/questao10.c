#include <stdio.h>

int main(){
    int a, i, soma, maior, diaMaior;
    i=1;
    soma=0;
    maior = 0;
    diaMaior = 0;
        while(i<31){
            printf("Digite o numero de discos vendido no dia %d\n", i);
            scanf("%d", &a);
                if(a>maior){
                 maior = a;
                 diaMaior = i;
                }
            i++;
            soma = a+soma;
        }
    printf("O total de discos vendidos no mes foi: %d\n", soma);
    printf("O dia com maior venda foi: %d\n", diaMaior);
    printf("A maior venda do mes foi: %d", maior);

    return 0;
}
