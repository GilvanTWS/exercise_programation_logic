#include <stdio.h>
#include <string.h>
void troca(char *string1){
    char string2[10], string3[10];
    scanf("%s %s", string2, string3);
    char *palavra = strtok(string1, " \t\n");
    while (palavra != NULL){
        if(strcmp(palavra, string2)!=0)
            printf(" %s", palavra);
        else{
            printf(" %s", string3);
        }
        palavra = strtok(NULL, " \t\n");
    }
}
int main()
{
    char string1[100];
    fgets(string1, sizeof(string1), stdin);
    printf("%s", string1);
    troca(string1);
    return 0;
}
