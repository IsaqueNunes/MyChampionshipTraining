/*Leia um valor de ponto flutuante com duas casas decimais. Este valor representa um valor monetário. A seguir, calcule o menor número de notas e moedas possíveis no qual o valor pode ser decomposto. As notas consideradas são de 100, 50, 20, 10, 5, 2. As moedas possíveis são de 1, 0.50, 0.25, 0.10, 0.05 e 0.01. A seguir mostre a relação de notas necessárias.

Entrada
O arquivo de entrada contém um valor de ponto flutuante N (0 ≤ N ≤ 1000000.00).

SaídaImprima a quantidade mínima de notas e moedas necessárias para trocar o valor inicial, conforme exemplo fornecido.

Obs: Utilize ponto (.) para separar a parte decimal.*/
#include<stdio.h>
int main (void){
	int a, c;
	double d, b;
	
	//quantidade de notas de 100
	scanf("%lf", &d);
	a = d;
	b = (d * 100);
	c = (int)b % 100;
	//NOTAS
	printf("NOTAS:\n");
	printf("%d nota(s) de R$ 100.00\n", a / 100);

	//quantidade de notas de 50
	a = a % 100;
	printf("%d nota(s) de R$ 50.00\n", a / 50);

	//quantidade de notas de 20
	a = a % 50;
	printf("%d nota(s) de R$ 20.00\n", a / 20);

	//quantidade de notas de 10
	a = a % 20;
	printf("%d nota(s) de R$ 10.00\n", a / 10);

	//quantidade de notas de 5
	a = a % 10;
	printf("%d nota(s) de R$ 5.00\n", a / 5);

	//quantidade de notas de 2
	a = a % 5;
	printf("%d nota(s) de R$ 2.00\n", a / 2);
	//MOEDAS
	printf("MOEDAS:\n");

	//quantidade de moedas de 1
	a = a % 2;
	printf("%d moeda(s) de R$ 1.00\n", a / 1);

	//quantidade de moedas de 0.50
	printf("%d moeda(s) de R$ 0.50\n", c / 50);

	//quantidade de moedas de 0.25
	c = c % 50;
	printf("%d moeda(s) de R$ 0.25\n", c / 25);

	//quantidade de moedas de 0.10
	c = c % 25;
	printf("%d moeda(s) de R$ 0.10\n", c / 10);

	//quantidade de moedas de 0.05
	c = c % 10;
	printf("%d moeda(s) de R$ 0.05\n", c / 5);

	//quantidade de moedas de 0.01
	c = c % 5;
	printf("%d moeda(s) de R$ 0.01\n", c / 1);
	return 0;
}