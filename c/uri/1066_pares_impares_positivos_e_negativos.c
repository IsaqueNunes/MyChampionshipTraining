/*Leia 5 valores Inteiros. A seguir mostre quantos valores digitados foram pares, quantos valores digitados foram ímpares, quantos valores digitados foram positivos e quantos valores digitados foram negativos.

Entrada
O arquivo de entrada contém 5 valores inteiros quaisquer.

Saída
Imprima a mensagem conforme o exemplo fornecido, uma mensagem por linha, não esquecendo o final de linha após cada uma.*/
#include<stdio.h>
int main (void){
	int a, c;
	int b, d, e, f;
	b = 0;
	d = 0;
	e = 0;
	f = 0;
	for(c = 1; c <= 5; c++){
		scanf("%d", &a);
		if((a % 2) == 0){
			b++;
		}
		else{
			d++;
		}
		if(a > 0){
			e++;
		}
		if(a < 0){
			f++;
		}

	}
	printf("%d valor(es) par(es)\n", b);
	printf("%d valor(es) impar(es)\n", d);
	printf("%d valor(es) positivo(s)\n", e);
	printf("%d valor(es) negativo(s)\n", f);
	return 0;
}