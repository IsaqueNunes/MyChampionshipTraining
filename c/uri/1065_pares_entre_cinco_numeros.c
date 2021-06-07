/*Faça um programa que leia 5 valores inteiros. Conte quantos destes valores digitados são pares e mostre esta informação.

Entrada
O arquivo de entrada contém 5 valores inteiros quaisquer.

Saída
Imprima a mensagem conforme o exemplo fornecido, indicando a quantidade de valores pares lidos.*/
#include<stdio.h>
int main (void){
	int a;
	int b , c;
	for(c = 1; c <=5; c++){
		scanf("%d", &a);
		if((a % 2) == 0){
			b++;
		}	
	}
	printf("%d valores pares\n", b);
	return 0;
}