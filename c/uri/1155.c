#include <stdio.h>
int main(){
    int i;
    double S = 1;
    for(i = 2; i <= 100; i++)
        S = S + (1/(float)i);
    printf("%.2f\n", S);
    return 0;
}