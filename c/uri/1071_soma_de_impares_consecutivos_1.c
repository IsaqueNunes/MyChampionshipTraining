/*Leia 2 valores inteiros X e Y. A seguir, calcule e mostre a soma dos números impares entre eles.

Entrada
O arquivo de entrada contém dois valores inteiros.

Saída
O programa deve imprimir um valor inteiro. Este valor é a soma dos valores ímpares que estão entre os valores fornecidos na entrada que deverá caber em um inteiro.*/
#include<stdio.h>
int main (void){
	int a, b, c, d, aux;
	d = 0;
	scanf("%d", &a);
	scanf("%d", &b);

	if(a > b){
		aux = a;
		a = b;
		b = aux;
	}
	
	c = a + 1;
	
	while((c > a) && (c < b)){
		if((c % 2) != 0){
			d = d + c;
		}
		c++;
	}

	printf("%d\n", d);
	return 0;
}