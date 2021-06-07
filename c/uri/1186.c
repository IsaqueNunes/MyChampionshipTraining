#include <stdio.h>
int main(){
    char op;
    int i, j;
    double m[12][12], cont;
    scanf("%c", &op);
    for(i = 11; i >= 0; i--)
        for(j = 0; j < 12; j++){
            scanf("%lf", &m[i][j]);
            if(j > i)
                cont+=m[i][j];
        }
    switch(op){
        case 'S': printf("%.1f\n", cont); break;
        case 'M': printf("%.1f\n", cont/66); break;
    }
    return 0;
}