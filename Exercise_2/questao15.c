#include <stdio.h>
int main()
{
    int idade;
    scanf("%d", &idade);
    if (idade < 16){
        printf("nao eleitor");
    }
    else if (idade >= 16 && idade <= 17){
        printf("voto facultativo");
    }
    else if (idade >= 18 && idade <= 65){
        printf("voto obrigatorio");
    }
    else {
        printf("voto facultativo");
    }
    return 0;
}
