/*Leia um valor inteiro X. Em seguida apresente os 6 valores ímpares consecutivos a partir de X, um valor por linha, inclusive o X ser for o caso.

Entrada
A entrada será um valor inteiro positivo.

Saída
A saída será uma sequência de seis números ímpares.*/
#include<stdio.h>
int main (void){
	int a, b;
	a = 1;
	scanf("%d", &b);
	while(a <= 6){
		if((b % 2) != 0){
			printf("%d\n", b);
			a++;
		}
		b++;
	}
}