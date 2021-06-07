#include<stdio.h>
int mult13(int x, int y){
    if(x == y){
        if(x % 13 == 0)
            return 0;
        return x;
    }
    else
        if(x % 13 != 0) return x+mult13(x+1, y);
        else return mult13(x+1, y);
}
void swap(int *x, int *y){
    int aux = *x;
    *x = *y;
    *y = aux;
}
int main(){
    int x, y;
    scanf("%d %d", &x, &y);
    if(x > y)
        swap(&x, &y);
    printf("%d\n", mult13(x, y));
    return 0;
}