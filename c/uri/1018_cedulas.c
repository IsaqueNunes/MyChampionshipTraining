/*Leia um valor inteiro. A seguir, calcule o menor número de notas possíveis (cédulas) no qual o valor pode ser decomposto. As notas consideradas são de 100, 50, 20, 10, 5, 2 e 1. A seguir mostre o valor lido e a relação de notas necessárias.

Entrada
O arquivo de entrada contém um valor inteiro N (0 < N < 1000000).

Saída
Imprima o valor lido e, em seguida, a quantidade mínima de notas de cada tipo necessárias, conforme o exemplo fornecido. Não esqueça de imprimir o fim de linha após cada linha, caso contrário seu programa apresentará a mensagem: “Presentation Error”.*/
#include<stdio.h>
int main (void){
	int a;
	//quantidade de notas de 100
	scanf("%d", &a);
	printf("%d\n", a);
	printf("%d nota(s) de R$ 100,00\n", a / 100);

	//quantidade de notas de 50
	a = a % 100;
	printf("%d nota(s) de R$ 50,00\n", a / 50);

	//quantidade de notas de 20
	a = a % 50;
	printf("%d nota(s) de R$ 20,00\n", a / 20);

	//quantidade de notas de 10
	a = a % 20;
	printf("%d nota(s) de R$ 10,00\n", a / 10);

	//quantidade de notas de 5
	a = a % 10;
	printf("%d nota(s) de R$ 5,00\n", a / 5);

	//quantidade de notas de 2
	a = a % 5;
	printf("%d nota(s) de R$ 2,00\n", a / 2);

	//quantidade de notas de 1
	a = a % 2;
	printf("%d nota(s) de R$ 1,00\n", a / 1);
	return 0;
}