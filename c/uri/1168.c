#include <stdio.h>
#include <stdlib.h>
int main(){
    long unsigned int a, aux, n, i, lastnum, totled = 0;;
    int leds[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%lu", &a);
        totled = 0;
        aux = a;
        lastnum = aux % 10;
        //printf("%lu\n", aux);
        while(aux >= 10){
            totled+=leds[lastnum];
            aux = aux / 10;
            lastnum = aux % 10;
        }
        totled+=leds[aux];
        printf("%d leds\n", totled);
    }
    return 0;
}