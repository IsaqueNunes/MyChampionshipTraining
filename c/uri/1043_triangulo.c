/*Leia 3 valores reais (A, B e C) e verifique se eles formam ou não um triângulo. Em caso positivo, calcule o perímetro do triângulo e apresente a mensagem:


Perimetro = XX.X


Em caso negativo, calcule a área do trapézio que tem A e B como base e C como altura, mostrando a mensagem


Area = XX.X

Entrada
A entrada contém três valores reais.

Saída
O resultado deve ser apresentado com uma casa decimal*/
#include<stdio.h>
#include<stdlib.h>
int main (void){
	float a, b, c, d, e;
	scanf("%f %f %f", &a, &b, &c);
	if((abs(b - c)) < a && a < (b + c)){
		d = a + b + c;
		printf("Perimetro = %.1f\n", d);
	}
		else if((abs(a - b)) < c && c < (a + b)){
			d = a + b + c;
			printf("Perimetro = %.1f\n", d);
		}
		else if((abs(a - c)) < b && b < (a + c)){
			d = a + b + c;
			printf("Perimetro = %.1f\n", d);
		}
		else {
			e = ((a + b) * c) / 2;
			printf("Area = %.1f\n", e);
		}
		return 0;
}