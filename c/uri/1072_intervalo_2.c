/*Leia um valor inteiro N. Este valor será a quantidade de valores inteiros X que serão lidos em seguida.
Mostre quantos destes valores X estão dentro do intervalo [10,20] e quantos estão fora do intervalo, mostrando essas informações.

Entrada
A primeira linha da entrada contém um valor inteiro N (N < 10000), que indica o número de casos de teste.
Cada caso de teste a seguir é um valor inteiro X (-107 < X <107).
 

Saída
Para cada caso, imprima quantos números estão dentro (in) e quantos valores estão fora (out) do intervalo.*/
#include<stdio.h>
int main(void){
	int a, b, c, d, e;
	d = 0;
	e = 0;
	scanf("%d", &a);
	for(b = 0; b < a; b++){
		scanf("%d", &c);
		if(c >= 10 && c <= 20){
			d++;
		}
		else{
			e++;
		}
	}
	printf("%d in\n", d);
	printf("%d out\n", e);
	return 0;
}