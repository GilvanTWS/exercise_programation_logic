#include <stdio.h>

int main(){
    int a, i, fat;
    printf("Digite o valor a ser calculado o fatorial: \n");
    scanf("%d", &a);
    if(a>=0){
    fat = 1;
printf("%d! = ",a);
    for(i=1; i<=a; i++){
        fat = fat *i;
        printf("%d", i);
        if (i<a){
            printf("*");
        }
    }
    printf (" = %d", fat);
    }
    else {
        printf("Digite um numero valido");
    }
    return 0;
}
