#include<stdio.h>
#include<math.h>
/*Leia 3 valores de ponto flutuante e efetue o cálculo das raízes da equação de Bhaskara. Se não for possível calcular as raízes, mostre a mensagem correspondente “Impossivel calcular”, caso haja uma divisão por 0 ou raiz de numero negativo.

Entrada
Leia três valores de ponto flutuante (double) A, B e C.

Saída
Se não houver possibilidade de calcular as raízes, apresente a mensagem "Impossivel calcular". Caso contrário, imprima o resultado das raízes com 5 dígitos após o ponto, com uma mensagem correspondente conforme exemplo abaixo. Imprima sempre o final de linha após cada mensagem.*/
	int main (void){
		float a, b, c, d, x, x1, x2, raiz;
		
		scanf("%f", &a);
		scanf("%f", &b);
		scanf("%f", &c);
		//delta
			d = (b * b) - (4 * a * c);
			//delta > 0	
				if (d > 0 && a != 0){
					raiz = sqrt(d);
					
					x1 = ((b * - 1) + raiz ) / (2 * a);
					x2 = ((b * - 1) - raiz ) / (2 * a);
					
					printf("R1 = %.5f\n", x1);
					printf("R2 = %.5f\n", x2);
				}
				//delta == 0
					else {
						if (d == 0){
							x = (b * - 1) / (2 * a);
							printf("R = %.5f\n", x);
						}
						//delta < 0
							else {
							printf("Impossivel calcular\n");
							}
					}
			
		return 0;
	}