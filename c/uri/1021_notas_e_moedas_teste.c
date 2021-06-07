#include<stdio.h>
int main (void){
	int a /*c*/;
	double d /*b*/;
	double E[12] = {100, 50, 20, 10, 5, 2, 1, 50, 25, 10, 5, 1};
	scanf("%lf", &d);
	a = d;
	/*b = (d * 100);
	c = (int)b % 100;*/

	printf("NOTAS:\n");
	for (int cont = 12; cont >= 6; cont--){
		printf("%d nota(s) de R$ %d\n", a / E[cont], E[cont]);
		a = a % E[cont];
	}
}