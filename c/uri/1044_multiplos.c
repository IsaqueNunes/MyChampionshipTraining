/*Leia 2 valores inteiros (A e B). Após, o programa deve mostrar uma mensagem "Sao Multiplos" ou "Nao sao Multiplos", indicando se os valores lidos são múltiplos entre si.

Entrada
A entrada contém valores inteiros.

Saída
A saída deve conter uma das mensagens conforme descrito acima.*/
#include<stdio.h>
int main (void){
	int a, b;
	scanf("%d %d", &a, &b);
	if(a > b){
		if((a % b) == 0){
			printf("Sao multiplos\n");
		}
		else{
			printf("Nao sao multiplos\n");
		}
	}
	else{
		if(b % a == 0){
			printf("Sao multiplos\n");	
		}
		else{
			printf("Nao sao multiplos\n");
		}
	}
	return 0;
}