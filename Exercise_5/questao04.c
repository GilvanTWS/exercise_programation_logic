#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char frase[100];
    int contador = 0;
    printf("Digite a frase ai oh:\n");
    fgets (frase, sizeof(frase),stdin);
    int j = strlen(frase);
    for (int i = 0 ; i < j ; i++){
        char c = towlower(frase[i]);
        if(c != ' '){
            contador++;
        }
    }
    printf("\nSua frase possui %d letras!!", contador-1); //menos 1 pq o contador tava contando o enter como um caracter
    return 0;
}
