#include <stdio.h>
#include <string.h>

void limpaEspacos(char *str) {
    int i, j = 0;
    int espaco = 0;
    int inicio = 1;

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' || str[i] == '\t') {
            if (!inicio && !espaco) {
                str[j++] = ' ';
                espaco = 1;
            }
        } else {
            str[j++] = str[i];
            espaco = 0;
            inicio = 0;
        }
    }
    if (j > 0 && str[j-1] == ' ')
        j--;
    str[j] = '\0';
}

int main() {
    char str[1000];
    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);
    size_t len = strlen(str);
    if (len > 0 && str[len-1] == '\n')
        str[len-1] = '\0';
    limpaEspacos(str);
    printf("String limpa: '%s'\n", str);
    return 0;
}
