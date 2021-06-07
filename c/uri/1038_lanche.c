/*Com base na tabela abaixo, escreva um programa que leia o código de um item e a quantidade deste item. A seguir, calcule e mostre o valor da conta a pagar.

https://resources.urionlinejudge.com.br/gallery/images/problems/UOJ_1038_pt.png

Entrada
O arquivo de entrada contém dois valores inteiros correspondentes ao código e à quantidade de um item conforme tabela acima.

Saída
O arquivo de saída deve conter a mensagem "Total: R$ " seguido pelo valor a ser pago, com 2 casas após o ponto decimal.*/
#include <stdio.h>
	int main (void){
	double a[5] = {4.00, 4.50, 5.00, 2.00, 1.50};
	int b, c;
	scanf("%d %d", &b, &c);
	printf("Total: R$ %.2lf\n", (a[(b-1)]*c));
	return 0;
}