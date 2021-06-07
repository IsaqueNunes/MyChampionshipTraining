/*Leia um número inteiro que representa um código de DDD para discagem interurbana. Em seguida, informe à qual cidade o DDD pertence, considerando a tabela abaixo:

https://resources.urionlinejudge.com.br/gallery/images/problems/UOJ_1050.png

Se a entrada for qualquer outro DDD que não esteja presente na tabela acima, o programa deverá informar:
DDD nao cadastrado

Entrada
A entrada consiste de um único valor inteiro.

Saída
Imprima o nome da cidade correspondente ao DDD existente na entrada. Imprima DDD nao cadastrado caso não existir DDD correspondente ao número digitado.*/
#include<stdio.h>
int main (void){
	int a;
	scanf("%d", &a);
	if(a == 61){
		printf("Brasilia\n");
	}
	else if(a == 71){
		printf("Salvador\n");
	}
	else if(a == 11){
		printf("Sao Paulo\n");
	}
	else if(a == 21){
		printf("Rio de Janeiro\n");
	}
	else if(a == 32){
		printf("Juiz de Fora\n");
	}
	else if(a == 19){
		printf("Campinas\n");
	}
	else if(a == 27){
		printf("Vitoria\n");
	}
	else if(a == 31){
		printf("Belo Horizonte\n");
	}
	else{
		printf("DDD nao cadastrado\n");
	}

	return 0;}
