#include <stdio.h>

int main()
{
    int A, B, C;
    scanf("%d %d", &A, &B);
    C = A+B;
    if (C > 20){
        C += 8;
        printf("%d", C);
    }
    else {
        C-=5;
        printf("%d", C);
    }
    return 0;
}
