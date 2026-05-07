#include <stdio.h>
#include <string.h>

int contaPalavras(char *str) {
    int count = 0, emPalavra = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' && str[i] != '\n' && str[i] != '\t') {
            if (!emPalavra) {
                count++;
                emPalavra = 1;
            }
        } else {
            emPalavra = 0;
        }
    }
    return count;
}

int main() {
    char str[1000];
    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);
    int palavras = contaPalavras(str);
    printf("Numero de palavras: %d\n", palavras);
    return 0;
}
