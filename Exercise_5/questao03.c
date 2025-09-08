#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char frase[101];
    int vogais=0;
    printf("Digite sua frase:\n");
    fgets(frase, sizeof(frase), stdin);
    int j = strlen(frase);
    for (int i = 0 ; i<j; i++){
        char c = towlower (frase[i]);
        if(c == 'a' ||c == 'e' ||c == 'i' ||c == 'o' ||c == 'u'){
            vogais++;
        }
    }
    printf("\n O numero de voggais na frase é %d", vogais);
    return 0;
}
