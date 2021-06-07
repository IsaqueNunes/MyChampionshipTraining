/*Leia 6 valores. Em seguida, mostre quantos destes valores digitados foram positivos. Na próxima linha, deve-se mostrar a média de todos os valores positivos digitados, com um dígito após o ponto decimal.

Entrada
A entrada contém 6 números que podem ser valores inteiros ou de ponto flutuante. Pelo menos um destes números será positivo.

Saída
O primeiro valor de saída é a quantidade de valores positivos. A próxima linha deve mostrar a média dos valores positivos digitados.*/
#include<stdio.h>
int main (void){
	double a, d;
	int b , c;
	d = 0;
	for(c = 1; c <=6; c++){
		scanf("%lf", &a);
		if(a > 0){
			b++;
			d = d + a;
		}
	}
	printf("%d valores positivos\n", b);
	printf("%.1lf\n", d / b);
	return 0;
}