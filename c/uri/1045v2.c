#include <stdio.h>
int main(){
    int i;
    double v[3], p[3];
    int n = sizeof(v)/sizeof(v[0]);

    v[] = organiza_vetor();

    switch (verifica_tipo_triangulo(v, p)){
        case 0: printf("NAO FORMA TRIANGULO\n");    break;
        case 1: printf("TRIANGULO RETANGULO\n");    break;
        case 2: printf("TRIANGULO OBTUSANGULO\n");  break;
        case 3: printf("TRIANGULO ACUTANGULO\n");   break;
    }
    switch(verifica_tam_triangulo(v)){
        case 0: printf("TRIANGULO EQUILATERO\n");   break;
        case 1: printf("TRIANGULO ISOSCELES\n");    break;
    }
    
    return 0;
}

int verifica_tipo_triangulo(double v[3], double p[3]){
    int op;
    if(v[0] >= v[1] + v[2]){
        op = 0;
    }else{
        if(p[0] == p[1] + p[2]){
            op = 1;
        }
        else if(p[0] > p[1] + p[2]){
            op = 2;
        }
        else if(p[0] < p[1] + p[2]){
            op = 3;
        }
    }
    
    return op;
}

int verifica_tam_triangulo(double v[3]){
    int aux;
    if(v[0] == v[1] && v[1] == v[2]){
        aux = 0;
	}
	else if(v[0] == v[1] || v[1] == v[2] || v[2] == v[0]){
		aux = 1;
	}
    return aux;
}

organiza_vetor(){
    
}