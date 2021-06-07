#include <stdio.h>
 
int main() {
 
    /************************************
    * Nome da Disciplina: Linguagem de Programação(c)
    * Atividade: -
    * Nome do(a)(s) estudante(s): Rafael Veiga 
    * Nome do professor: Wesley Eiji Sanches Kanashiro
    *************************************/
    
        double lados[3], aux;
        int i, j;
        for(i = 0; i < 3; i++) {
            scanf("%lf", &lados[i]);
        }
        for(i = 0; i < 3; i++) {
            for(j = 0; j < 2; j++) {
                if(lados[j] < lados[j + 1]) {
                    aux = lados[j];
                    lados[j] = lados[j + 1];
                    lados[j + 1] = aux;
                }
            }
        }
            if(lados[0] >= (lados[1] + lados[2])) {
                printf("NAO FORMA TRIANGULO\n");
            } else {
              if(lados[0] * lados[0] == lados[1] * lados[1] + lados[2] * lados[2]){
                printf("TRIANGULO RETANGULO\n");
            } else if(lados[0] * lados[0] > lados[1] * lados[1] + lados[2] * lados[2]) {
                printf("TRIANGULO OBTUSANGULO\n");
            } else if(lados[0] * lados[0] < lados[1] * lados[1] + lados[2] * lados[2]) {
                printf("TRIANGULO ACUTANGULO\n");
            }
			if(lados[0] == lados[1] && lados[0] == lados[2] && lados[1] == lados[2]) {
                printf("TRIANGULO EQUILATERO\n");
            } else if(lados[0] == lados[1] && lados[1] != lados[2] || lados[0] == lados[2] && lados[2] != lados[1] || lados[1] == lados[2] && lados[0] != lados[1]) {
                printf("TRIANGULO ISOSCELES\n");
            }
            }
    return 0;
}