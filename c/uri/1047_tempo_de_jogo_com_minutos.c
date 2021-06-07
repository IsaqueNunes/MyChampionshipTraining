/*Leia a hora inicial, minuto inicial, hora final e minuto final de um jogo. A seguir calcule a duração do jogo.

Obs: O jogo tem duração mínima de um (1) minuto e duração máxima de 24 horas.

Entrada
Quatro números inteiros representando a hora de início e fim do jogo.

Saída
Mostre a seguinte mensagem: “O JOGO DUROU xxx HORA(S) E YYY MINUTO(S)” .*/
#include<stdio.h>
int main (void){
	int a, b, c, d, e, f;
	scanf("%d %d %d %d", &a, &d, &b, &e);
	if((a < b) && d < e){ //hora de inicio menor que a hora final && minuto de inicio menor que o final
		f = e - d;
		c = b - a;		
	}	
	else if(a == b && b == d && d == e){//Todos os valores iguais
		c = 24;
		f = 0;
	}
	else if(a == b && d < e){//Hora de inicio igual a hora final && minuto inicial menor que o minuto final
		c = 0;
		f = e - d;
	}
	else if(a < b && d == e){//Hora de inicio menor que a hora final && minuto de inicio igual ao minuto final
		c = (b - a);
		f = 0;
	}
	else if(a > b && d > e){//hora de inicio maior que a hora final && minuto inicial maior que o final
		c = 23 - a + b;
		f = 60 - d + e;
	}
	else if(a < b && d > e){//hora de inicio menor que a hora final && minuto inicial maior que o final
		c = (b - a) - 1;
		f = 60 - d + e;
	}
	else if(a == b && d == e){//Hora de inicio e fim iguais && minuto de inicio e fim iguais(mas diferentes entre hora e minuto)
		c = 24;
		f = 0;
	}
	else if(a == b && d > e){//hora de inicio e fim iguais && minuto de inicio amaior que o final
		c = 23;
		f = 60 - d + e;
	}
	else if(a > b && d < e){
		c = 24 - a + b;
		f = e - d;
	}
	else if(a > b && d == e){
		c = 24 - a + b;
		f = 0;
	}
	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", c, f);
	return 0;
}