#include <stdio.h>

int main(){
    int a;
    int primo = 1;

    printf("Digite o valor que deseja:\n");
    scanf("%d", &a);

    if (a<=1) {
        primo = 0;
    }
    for (int i = 2; i < a ; i++){
        if (a%i == 0 ) {
            primo = 0;
            break;
        }
    }
    if (primo) {
        printf("Este numero é primo sim patrao\n");

    }
    else{
        printf("Este numero nao é primo patrao\n");
    }
    return 0;
}
