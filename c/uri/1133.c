#include <stdio.h>
void swap(int *x, int *y){
    int aux = *x;
    *x = *y;
    *y = aux;
}
int main (){
    int x, y, i;
    scanf("%d %d", &x, &y);
    if(x > y)
        swap(&x, &y);
    for(i = x+1; i < y; i++)
        if(i % 5 == 2 || i % 5 == 3)
            printf("%d\n", i);
    return 0;
}