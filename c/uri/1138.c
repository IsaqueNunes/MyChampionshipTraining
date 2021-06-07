#include <stdio.h>
int main(){
    int a, b, i, j, vet[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    do{
        scanf("%d %d", &a, &b);
        for(i = a; i <= b; i++){
            j = i;
            while(j > 10){
                vet[j % 10]++;
                j/=10;
            }
            vet[j % 10]++;
        }
        for(i = 0; i < 9; i++){
            printf("%d ", vet[i]);
            vet[i] = 0;
        }       
        printf("%d\n", vet[i]);
        vet[i] = 0;
    } while (a != 0 || b != 0);
    return 0;
}