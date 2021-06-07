#include <stdio.h>
#include <stdbool.h>
int main(){
    int T, i, PA, PB, crestota, crestotb, cont;
    double G1, G2;
    _Bool seculo;
    scanf("%d", &T);
    for(i = 0; i < T; i++){
        scanf("%d %d %lf %lf", &PA, &PB, &G1, &G2);
        cont = 0;
        seculo = false;
        while(PA-1 < PB){
            cont++;
            crestota = PA * (G1 / 100);
            crestotb = PB * (G2 / 100);
            PA+=crestota;
            PB+=crestotb;
            if(cont > 100){
                seculo = true;
                break;
            }
        }
        switch(seculo){
            case true:
                printf("Mais de 1 seculo.\n");
                break;
            case false:
                printf("%d anos.\n", cont);
                break;
        }
    }
    return 0;
}