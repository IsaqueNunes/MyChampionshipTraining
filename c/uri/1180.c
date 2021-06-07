#include<stdio.h>
#include<stdlib.h>
int main(){
    int n, i, *x, min;
    scanf("%d", &n);
    x = malloc(n * sizeof(int *));
	min = 0;
    for(i = 0; i < n; i++){
        scanf("%d", &x[i]);
        if(i < n-1)
            if(x[i] < x[min])
                min = i;
    }
    printf("Menor valor: %d\n", x[min]);
    printf("Posicao: %d\n", min);
    free(x);
    return 0 ;
}