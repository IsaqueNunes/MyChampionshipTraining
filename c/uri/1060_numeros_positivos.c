/*Faça um programa que leia 6 valores. Estes valores serão somente negativos ou positivos (desconsidere os valores nulos). A seguir, mostre a quantidade de valores positivos digitados.

Entrada
Seis valores, negativos e/ou positivos.

Saída
Imprima uma mensagem dizendo quantos valores positivos foram lidos.*/
#include<stdio.h>
int main (void){
	double a;
	int b , c;
	for(c = 1; c <=6; c++){
		scanf("%lf", &a);
		if(a > 0){
			b++;
		}
	}
	printf("%d valores positivos\n", b);
	return 0;
}