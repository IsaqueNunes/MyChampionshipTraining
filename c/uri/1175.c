#include <stdio.h>
int main(){
    int n[20], i, j, aux;

    for(i = 0; i < 20; i++)
        scanf("%d", &n[i]);

    for(i = 1, j = 19; i <= 10; i++, j--){
        aux = n[i-1];
        n[i-1] = n[j];
        n[j] = aux;
        printf("N[%d] = %d\n", i-1, n[i-1]);
    }
    for(i = 10; i < 20; i++){
        printf("N[%d] = %d\n", i, n[i]);
    }
    return 0;
}