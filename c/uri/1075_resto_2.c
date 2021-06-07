/*Leia um valor inteiro N. Apresente todos os números entre 1 e 10000 que divididos por N dão resto igual a 2.

Entrada
A entrada contém um valor inteiro N (N < 10000).

Saída
Imprima todos valores que quando divididos por N dão resto = 2, um por linha.*/
#include<stdio.h>
int main (void){
	int a, b;
	scanf("%d", &a);
	for(b = 1; b < 10000; b++){
		if((b % a) == 2){
			printf("%d\n", b);
		}
	}
	return 0;
}