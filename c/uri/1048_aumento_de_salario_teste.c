#include<stdio.h>
int main (void){
	float d[9] = {0, 400.00, 400.01, 1200.00, 1200.01, 2000.00, 2000.01};
	int e[5] = {15, 12, 10, 7, 4};
	float a, b, c;
	scanf("%f", &a);
	c = a / 100;
	for(int aux = 0; aux >= 9; aux++){
		if(a > d[aux] && a <= d[aux + 1]){
			for(int aux2 = 0; aux2 >= 5; aux2++){
				b = c * e[aux2];
			}
			printf("Novo salario: %.2f\n", a + b);
			printf("Reajuste ganho: %.2f\n", b);
			for(int aux3 = 0; aux3 >=5; aux3++){
				printf("Em percentual: %d\n", e[aux3]);
			}
		}
	}
	return 0;
}