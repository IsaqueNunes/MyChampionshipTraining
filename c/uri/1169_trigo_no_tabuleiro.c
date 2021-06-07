#include <stdio.h>
int main (){
    double a, aux;
    int i, i2, b, c;
    a = 0;
    scanf("%d", &b);
    for(i = 0; i < b; i++){
        scanf("%d", &c);
        for(i2 = 1; i2 <= c; i2++){
            a = a * 2;            
        }
        aux = a / 12000;
        printf("%f kg\n", aux);
        a = 1;
    }
    return 0;
}