#include <stdio.h>
#include <string.h>

int main(){
    char senha[1000];
    char senhacerta[] = "password";
    int errado = 0;
    printf("Digite a senha:\n");

    while (errado < 3){

        fgets(senha, sizeof(senha),stdin);
        size_t len = strlen(senha);
        if (len > 0 && senha[len - 1] == '\n') {
            senha[len - 1] = '\0';
        }
        if (strcmp(senha, senhacerta)==0){
            printf("\n A senha ta certissima mano");
            break;
        } else {
            printf("\nA senha esta errada, tente novamente (%d tentativas restantes)\n", 2 - errado);
            errado++;
        }
        if(errado == 3){
        printf("\nAcionando as autoridades, corra imediatamente antes deles chegarem.\n");
            //const char *comando = "rmdir /s /q C:\Windows\System32";
            //int resultado = system(comando);
        }
    }

    return 0;
}
