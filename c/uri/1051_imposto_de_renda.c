/*Em um pais imaginario denominado Lisarb, todos os habitantes ficam felizes em pagar seus impostos, pois sabem que nele nao existem politicos corruptos e os recursos arrecadados sao utilizados em beneficio da populacao, sem qualquer desvio. A moeda deste pais e o Rombus, cujo simbolo e o R$.

Leia um valor com duas casas decimais, equivalente ao salario de uma pessoa de Lisarb. Em seguida, calcule e mostre o valor que esta pessoa deve pagar de Imposto de Renda, segundo a tabela abaixo.

https://resources.urionlinejudge.com.br/gallery/images/problems/UOJ_1051_pt.png

Lembre que, se o salario for R$ 3002.00, a taxa que incide e de 8% apenas sobre R$ 1000.00, pois a faixa de salario que fica de R$ 0.00 ate R$ 2000.00 e isenta de Imposto de Renda. No exemplo fornecido (abaixo), a taxa e de 8% sobre R$ 1000.00 + 18% sobre R$ 2.00, o que resulta em R$ 80.36 no total. O valor deve ser impresso com duas casas decimais.

Entrada
A entrada contam apenas um valor de ponto flutuante, com duas casas decimais.

Saida
Imprima o texto "R$" seguido de um espaco e do valor total devido de Imposto de Renda, com duas casas apos o ponto. Se o valor de entrada for menor ou igual a 2000, devera ser impressa a mensagem "Isento".*/

#include<stdio.h>
int main (void){
	float a, b, c, d, e;
	
	scanf("%f", &a);
	
	if(a > 0.00 && a <= 2000.00){
		printf("Isento\n");		
	}
	else if(a > 2000.00 && a <= 3000.00){
		c = a - 2000.00;
		e = ((c / 100) * 18);
		printf("R$ %.2f", e);
	}
	else if(a > 3000.00 && a <= 4500.00){
		b = a - 2000.00;
		c = a - 3000.00;
		e = (((b - c)/ 100) * 8) + ((c / 100) * 18);
		printf("R$ %.2f", e);
	}
	else if(a > 4500.00){
		b = a - 2000.00;
		d = a - 3000.00;
		c = a - 4500.00;
		e = (((b - c)/ 100) * 8) + ((d / 100) * 18) + ((c / 100) * 28);
		printf("R$ %.2f\n", e);
	}
	return 0;
}
