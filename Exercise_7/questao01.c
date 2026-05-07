#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    int x = 1;
    int y = 3;

    printf("Antes da troca:\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);

    swap(&x, &y);

    printf("\nApós a troca:\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);

    return 0;
}