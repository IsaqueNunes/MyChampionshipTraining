/*Leia um valor inteiro entre 1 e 12, inclusive. Correspondente a este valor, deve ser apresentado como resposta o mês do ano por extenso, em inglês, com a primeira letra maiúscula.

Entrada
A entrada contém um único valor inteiro.

Saída
Imprima por extenso o nome do mês correspondente ao número existente na entrada, com a primeira letra em maiúscula.*/
#include<stdio.h>
#include<string.h>
typedef char string[10];
int main(void){
	int a;
	string b[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
	int c;
	scanf("%d", &a);
	for(c = 1; c <= 12; c++){
		if(a == c){
			printf("%s\n", b[c-1]);
		}
	}
	return 0;
}