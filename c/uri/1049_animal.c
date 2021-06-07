/*Neste problema, voc√™ dever√° ler 3 palavras que definem o tipo de animal poss√≠vel segundo o esquema abaixo, da esquerda para a direita.  Em seguida conclua qual dos animais seguintes foi escolhido, atrav√©s das tr√™s palavras fornecidas.

https://resources.urionlinejudge.com.br/gallery/images/problems/UOJ_1049_b.png

Entrada
A entrada cont√©m 3 palavras, uma em cada linha, necess√°rias para identificar o animal segundo a figura acima, com todas as letras min√∫sculas.

Sa√≠da
Imprima o nome do animal correspondente √† entrada fornecida.*/

#include<stdio.h>
#include<string.h>

typedef char string[20];

int main(){ 
	string a[2] = {"vertebrado", "invertebrado"};
	string b[4] = {"ave", "mamifero", "inseto", "anelideo"};
	string g[4] = {"carnivoro", "onivoro", "herbivoro", "hematofago"};
	string c[8] = {"aguia", "pomba", "homem", "vaca", "pulga", "lagarta", "sanguessuga", "minhoca"};
	string d, E, f;
	
	scanf("%s", d);
	scanf("%s", E);
	scanf("%s", f);
	
	//verifica se È vertebrado
	if(strcmp(d, a[0]) == 0){
		//verifica se È ave
		if(strcmp(E, b[0]) == 0){
			//verifica se È carnivoro
			if(strcmp(f, g[0]) == 0){
				//imprime ·guia
				printf("%s\n", c[0]);
			}
			//verifica se È onivoro
			if(strcmp(f, g[1]) == 0){
				//imprime pomba
				printf("%s\n", c[1]);
			}
		}
		//verifica se È mamifero
		if(strcmp(E, b[1]) == 0){
			//verifica se È onivoro
			if(strcmp(f, g[1]) == 0){
				//imprime humano
				printf("%s\n", c[2]);
			}
			//verifica se È herbivoro
			if(strcmp(f, g[2]) == 0){
				//imprime vaca
				printf("%s\n", c[3]);
			}
		}
	}
	//verifica se È invertebrado
	if(strcmp(d, a[1]) == 0){
		//verifica se È inseto
		if(strcmp(E, b[2]) == 0){
			//verifica se È hematÛfago
			if(strcmp(f, g[3]) == 0){
				//imprime pulga
				printf("%s\n", c[4]);
			}
			//verifica se È herbivoro
			if(strcmp(f, g[2]) == 0){
				//imprime lagarta
				printf("%s\n", c[5]);
			}
		}
		//verifica se È anelÌdeo
		if(strcmp(E, b[3]) == 0){
			//verifica se È hematÛfago
			if(strcmp(f, g[3]) == 0){
				//imprime sanguessuga
				printf("%s\n", c[6]);
			}
			//verifica se È onivoro
			if(strcmp(f, g[1]) == 0){
				//imprime minhoca
				printf("%s\n", c[7]);
			}
		}
	}
	
	
	return 0;
}
/*
	if(d == a[0] && E == b[0] && f == g[0]){
		printf("%s", c[0]);
	}
	if(d== a[0] && E == b[0] && f == g[1])
		printf("%s", c[1]);
	}
	if(d == a[0] && E == b[1] && f == g[1]){
		printf("%s", c[2]);
	}
	if(d == a[0] && E == b[1] && f == g[2]){
		printf("%s", c[3]);
	}
	if(d == a[1] && E == b[2] && f == g[2]){
		printf("%s", c[4]);
	}
	if(d == a[1] && E == b[2] && f == g[2]){
		printf("%s", c[5]);
	}
	if(d == a[1] && E == b[3] && f == g[3]){
		printf("%s", c[6]);
	}
	if(d == a[1] && E == b[3] && f == g[2]){
		printf("%s", c[7]);
	}*/
