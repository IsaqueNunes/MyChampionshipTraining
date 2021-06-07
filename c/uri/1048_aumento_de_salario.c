/*A empresa ABC resolveu conceder um aumento de salários a seus funcionários de acordo com a tabela abaixo:


Salário	Percentual de Reajuste
0 - 400.00 ------------15%
400.01 - 800.00--------12%
800.01 - 1200.00-------10%
1200.01 - 2000.00------7%
Acima de 2000.00-------4%

Leia o salário do funcionário e calcule e mostre o novo salário, bem como o valor de reajuste ganho e o índice reajustado, em percentual.

Entrada
A entrada contém apenas um valor de ponto flutuante, com duas casas decimais.

Saída
Imprima 3 linhas na saída: o novo salário, o valor ganho de reajuste e o percentual de reajuste ganho, conforme exemplo abaixo.*/
#include<stdio.h>
int main (void){
	float a, b, c;
	scanf("%f", &a);
	c = a / 100;
	if(a >= 0 && a <= 400.00){
		b = c * 15;
		printf("Novo salario: %.2f\n", a + b);
		printf("Reajuste ganho: %.2f\n", b);
		printf("Em percentual: %d %%\n", 15);
	}
	else{
		if(a > 400.00 && a <= 800.00){
			b = c * 12;
			printf("Novo salario: %.2f\n", a + b);
			printf("Reajuste ganho: %.2f\n", b);
			printf("Em percentual: %d %%\n", 12);
		}
		if(a > 800.00 && a <= 1200.00){
			b = c * 10;
			printf("Novo salario: %.2f\n", a + b);
			printf("Reajuste ganho: %.2f\n", b);
			printf("Em percentual: %d %%\n", 10);
		}
		if(a > 1200.00 && a <= 2000.00){
			b = c * 7;
			printf("Novo salario: %.2f\n", a + b);
			printf("Reajuste ganho: %.2f\n", b);
			printf("Em percentual: %d %%\n", 7);
		}
		if(a > 2000.00){
			b = c * 4;
			printf("Novo salario: %.2f\n", a + b);
			printf("Reajuste ganho: %.2f\n", b);
			printf("Em percentual: %d %%\n", 4);
		}
	}
	return 0;
}