/*Leia 100 valores inteiros. Apresente então o maior valor lido e a posição dentre os 100 valores lidos.

Entrada
O arquivo de entrada contém 100 números inteiros, positivos e distintos.

Saída
Apresente o maior valor lido e a posição de entrada, conforme exemplo abaixo.*/
#include<stdio.h>
int main (void){
	int a, b, c, d;
	d = 99999;
	c = 0;
	for(a = 1; a <= 100; a++){
		scanf("%d", &b);
		if(b > c){
			c = b;
			d = a; 
		}
	}
	printf("MAIOR: %d\n", c);
	printf("POSICAO: %d\n", d);
	return 0;
}