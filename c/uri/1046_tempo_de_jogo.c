/*Leia a hora inicial e a hora final de um jogo. A seguir calcule a duração do jogo, sabendo que o mesmo pode começar em um dia e terminar em outro, tendo uma duração mínima de 1 hora e máxima de 24 horas.

Entrada
A entrada contém dois valores inteiros representando a hora de início e a hora de fim do jogo.

Saída
Apresente a duração do jogo conforme exemplo abaixo.*/
#include<stdio.h>
int main (void){
	int a, b, c;
	scanf("%d %d", &a, &b);
	if(b > a){
		c = b - a;
	}
	else if(a == b){
		c = 24;
	}
	else{
		c = 24 - a + b;

	}
	printf("O JOGO DUROU %d HORA(S)\n", c);
	return 0;
}