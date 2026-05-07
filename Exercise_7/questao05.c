#include <stdio.h>
#include <stdlib.h>
int* vetinverso(int n, int *vet){
    int *inv = (int*) malloc(n*sizeof(int));
    for(int i = 0 ; i< n ; i++){
        inv[i] = vet[n-1-i];
    }
    for(int i = 0; i<n ; i++){
        printf("%d ", inv[i]);
    }
    return inv;
} 
int main()
{
    int n, *vet;
    scanf("%d", &n);
    vet = (int*)malloc(n*sizeof(int));
    for(int i = 0 ; i<n; i++){
        scanf("%d", &vet[i]);
    }
    vetinverso(n, vet); 


    return 0;
}
