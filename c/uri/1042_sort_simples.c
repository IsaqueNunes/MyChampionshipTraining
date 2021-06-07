/*Leia 3 valores inteiros e ordene-os em ordem crescente. No final, mostre os valores em ordem crescente, uma linha em branco e em seguida, os valores na sequência como foram lidos.

Entrada
A entrada contem três números inteiros.

Saída
Imprima a saída conforme foi especificado.*/
#include <stdio.h>

int main(void)
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a > b){
       if (b > c) {
       	printf("%d\n%d\n%d\n", c, b, a);
       }
		else{                                             
			if (a > c){
				printf("%d\n%d\n%d\n", b, c, a);
			}
			else{
				printf("%d\n%d\n%d\n", b, a, c);
			}
		}
	}
	else{
		if (b > c){
			if (a > c){
				printf("%d\n%d\n%d\n", c, a, b);
			}
				else{
					printf("%d\n%d\n%d\n", a, c, b);
				}
		}
		else{
			printf("%d\n%d\n%d\n", a, b, c);
		}

	}
	
	printf("\n%d\n%d\n%d\n", a, b, c);
	return 0;
}