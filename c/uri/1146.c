#include<stdio.h>
int main (){
    int n, i;
    while(n != 0){
        scanf("%d", &n);
        for(i = 1; i < n; i++){
            printf("%d ", i);
        }
        if(n != 0)
            printf("%d\n", i);
    }
    return 0;
}