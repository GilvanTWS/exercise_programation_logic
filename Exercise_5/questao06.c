#include <stdio.h>
#include <string.h>

int main()
{
    char nomecompleto[1000];
    int f;
    printf("Digite seu nome completo:\n");
    fgets(nomecompleto, sizeof(nomecompleto), stdin);
    int j = strlen(nomecompleto);
    printf("Seu primeiro e ultimo nome é:\n");
    for (int i = 0 ; i<j ; i++){
        printf("%c", nomecompleto[i]);
        if(nomecompleto[i] == ' '){
            break;
        }
    }
    for (int i = j ; i>0; i--){
        if(nomecompleto[i]==' '){
            f = i;
            break;
        }
    }
    for( f+1 ; f < j ; f++ ){
        printf("%c", nomecompleto[f]);
    }
    return 0;
}
