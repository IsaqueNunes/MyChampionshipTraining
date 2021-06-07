#include <stdio.h>
int main(){
    int i, j;
    double S = 0;
    for(i = 1, j = 1; i <= 39; i+=2, j*=2)
        S+=(double)i/(double)j;
    printf("%.2f\n", S);
    return 0;
}