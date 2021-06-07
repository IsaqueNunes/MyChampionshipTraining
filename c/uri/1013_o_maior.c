/*Faça um programa que leia três valores e apresente o maior dos três valores lidos seguido da mensagem “eh o maior”. Utilize a fórmula:



Obs.: a fórmula apenas calcula o maior entre os dois primeiros (a e b). Um segundo passo, portanto é necessário para chegar no resultado esperado.

Entrada
O arquivo de entrada contém três valores inteiros.

Saída
Imprima o maior dos três valores seguido por um espaço e a mensagem "eh o maior".*/
#include<stdio.h>
#include<stdlib.h>
int main (void){
	int a, b, c, m1, m2;
	scanf("%d %d %d", &a, &b, &c);
	m1 = (a + b + abs(a - b)) / 2;
	m2 = (m1 + c + abs(m1 - c)) / 2;
	printf("%d eh o maior\n", m2);
	return 0;
}