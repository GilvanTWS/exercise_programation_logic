#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    if (a == 1){
        printf("Domingo");
    }
    else if (a == 2){
        printf("Segunda");
    }
    else if (a == 3){
        printf("Terca");
    }
    else if (a == 4){
        printf("Quarta");
    }
    else if (a == 5){
        printf("Quinta");
    }
    else if (a == 6){
        printf("Sexta");
    }
    else if (a == 7){
        printf("Sabado");
    }
    else {
        printf("O dia da semana nao existe");
    }
    return 0;
}
