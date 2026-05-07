#include <stdio.h>
#include <math.h>

int main()
{
    int a;
    scanf("%d", &a);
    float raiz;
    raiz = sqrt(a);
    if(a>=0){
        printf("a raiz é %.2f", raiz);
    }
    else{
        printf("nao eh possivel");
    }
    return 0;
}
