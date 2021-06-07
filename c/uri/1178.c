#include <stdio.h>
int main(){
    int i;
    double x[100];
    scanf("%lf", &x[0]);
    for(i = 1; i <= 100; i++){
        x[i] = x[i-1]/2;
        printf("N[%d] = %.4f\n", i-1, x[i-1]);
    }
    return 0;
}