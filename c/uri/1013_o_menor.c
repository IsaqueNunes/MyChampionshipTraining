#include<stdio.h>
#include<stdlib.h>
int main (void){
	int a, b, m1;
	scanf("%d %d", &a, &b);
	m1 = (a - b + abs(a + b)) / 2;
	printf("%d eh o menor\n", m1);
	return 0;
}