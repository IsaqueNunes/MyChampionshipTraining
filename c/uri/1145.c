#include<stdio.h>
int main (){
    int N, jump, i, j;
    scanf("%d %d", &jump, &N);
    for(i = 1; i <= N; i++){
        if((i-1) % jump == 0 && i-1 != 0)
            printf("\n");
        printf("%d", i);
        if(i % jump != 0){
            printf(" ");
        }
    }
    printf("\n");
    return 0;
}