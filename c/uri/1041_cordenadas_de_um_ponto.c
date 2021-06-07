/*Leia 2 valores com uma casa decimal (x e y), que devem representar as coordenadas de um ponto em um plano. A seguir, determine qual o quadrante ao qual pertence o ponto, ou se está sobre um dos eixos cartesianos ou na origem (x = y = 0.0).



Se o ponto estiver na origem, escreva a mensagem “Origem”.

Se o ponto estiver sobre um dos eixos escreva “Eixo X” ou “Eixo Y”, conforme for a situação.*/

#include<stdio.h>
int main (void){
	double x, y;

	scanf("%lf %lf", &x, &y);
	
	if(x == 0.0 && y == 0.0){
		printf("Origem\n");
	}
    else{
    	if(x > 0.0 && y > 0.0){
			printf("Q1\n");
    	}
    	
    	else if(x < 0.0 && y > 0.0){
    		printf("Q2\n");
    	}

    	else if(x < 0.0 && y < 0.0){
    		printf("Q3\n");
    	}
    
    	else if(x > 0.0 && y < 0.0){
    		printf("Q4\n");
    	}

    	else if(x == 0.0 && y != 0.0){
    		printf("Eixo Y\n"); 
    	}
    
    	else if(x != 0.0 && y == 0.0){
    		printf("Eixo X\n");
    	}
    }
	return 0;
}