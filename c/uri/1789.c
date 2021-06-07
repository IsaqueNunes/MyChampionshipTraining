#include <stdio.h>
#include <stdlib.h>
int main(){
    int l, *v, i, max;
    while(scanf("%d", &l) != EOF){
        v = malloc(l * sizeof(int));
        max = 0;
        for(i = 0; i < l; i++){
            scanf("%d", &v[i]);
            if(v[max] < v[i])
                max = i;
        }
        if(v[max] < 10)
            printf("1\n");
        else if(v[max] >= 10 && v[max] < 20)
            printf("2\n");
        else
            printf("3\n");
    }
    return 0;
} 