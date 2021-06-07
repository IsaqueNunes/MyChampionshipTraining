#include<stdio.h>
int main(){
	int i, indice[2999], sizestr = 0, aux, n, j;
	char texto[2999];
	scanf("%d", &n);
	for(j = 0; j < n; j++){
		for(i = 0; i < 2999; i++){
			texto[i] = 0;
		}
		scanf("%[^\n]", texto);
		for(i = 0; i < 2999; i++){
			indice[i] = 0;
			indice[i] = texto[i];
			if(indice[i] == 0){
				sizestr = i - 1;
				break;
			}
			if((indice[i] >= 'a' && indice[i] <= 'z') || (indice[i] >= 'A' && indice[i] <= 'Z')){
				indice[i]+=3;
			}
		}
		for(i = 0; i <= sizestr / 2; i++){
			aux = indice[sizestr - i];
			indice[sizestr - i] = indice[i];
			indice[i] = aux;
		}
		for(i = 0; i <= sizestr; i++){
			if(i >= ((sizestr / 2) + 1)){
				indice[i] -= 1;
			}
			texto[i] = indice[i];
		}
		printf("%s\n", texto);
	}

	return 0;
}