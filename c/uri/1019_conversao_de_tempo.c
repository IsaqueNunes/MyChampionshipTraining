/*Leia um valor inteiro, que é o tempo de duração em segundos de um determinado evento em uma fábrica, e informe-o expresso no formato horas:minutos:segundos.

Entrada
O arquivo de entrada contém um valor inteiro N.

Saída
Imprima o tempo lido no arquivo de entrada (segundos), convertido para horas:minutos:segundos, conforme exemplo fornecido.*/
#include<stdio.h>
int main (void){
	int a;
	scanf("%d", &a);
	printf("%d", a / 3600);
	printf(":%d", ((a % 3600)/60));
	printf(":%d\n", (a % 3600)%60);
	return 0;
}