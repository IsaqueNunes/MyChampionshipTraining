/*Leia 4 valores inteiros A, B, C e D. A seguir, se B for maior do que C e se D for maior do que A, e a soma de C com D for maior que a soma de A e B e se C e D, ambos, forem positivos e se a variável A for par escrever a mensagem "Valores aceitos", senão escrever "Valores nao aceitos".
	
	Entrada
	Quatro números inteiros A, B, C e D.
	
	Saída
	Mostre a respectiva mensagem após a validação dos valores.
5 6 7 8 ------------>Valores nao aceitos

2 3 2 6 ------------>Valores aceitos*/
#include<stdio.h>
int main (void){
	int A, B, C, D, F;
	scanf("%d %d %d %d", &A, &B, &C, &D);
	F = A % 2;
	if((B > C) && (D > A) && ((C+D)>(A+B)) && (C > 0) && (D > 0) && F == 0){
		printf("Valores aceitos\n");
	}
		else{
			printf("Valores nao aceitos\n");
		}
		return 0;
}