#include <stdio.h>
int main(){
    int N, i;
    scanf("%d", &N);
    for(i = 1; i < N * 4; i++){
        if(i % 4 == 0){
            i = i + 1;
            printf("PUM\n");
        }
        printf("%d ", i);
    }
    printf("PUM\n");
    return 0;
}
