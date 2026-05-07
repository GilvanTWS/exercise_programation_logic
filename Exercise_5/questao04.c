#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char frase[100];
    int contador = 0, emPalavra = 0;
    printf("Digite a frase:\n");
    fgets(frase, sizeof(frase), stdin);
    int j = strlen(frase);
    for (int i = 0; i < j; i++){
        if (frase[i] != ' ' && frase[i] != '\n' && frase[i] != '\t'){
            if (!emPalavra){
                contador++;
                emPalavra = 1;
            }
        }
        else {
            emPalavra = 0;
        }
    }
    printf("Sua frase possui %d palavra(s)!\n", contador);
    return 0;
}
