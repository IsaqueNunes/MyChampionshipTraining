/*Maria acabou de iniciar seu curso de graduação na faculdade de medicina e precisa de sua ajuda para organizar os experimentos de um laboratório o qual ela é responsável. Ela quer saber no final do ano, quantas cobaias foram utilizadas no laboratório e o percentual de cada tipo de cobaia utilizada.

Este laboratório em especial utiliza três tipos de cobaias: sapos, ratos e coelhos. Para obter estas informações, ela sabe exatamente o número de experimentos que foram realizados, o tipo de cobaia utilizada e a quantidade de cobaias utilizadas em cada experimento.

Entrada
A primeira linha de entrada contém um valor inteiro N que indica os vários casos de teste que vem a seguir. Cada caso de teste contém um inteiro Quantia (1 ≤ Quantia ≤ 15) que representa a quantidade de cobaias utilizadas e um caractere Tipo ('C', 'R' ou 'S'), indicando o tipo de cobaia (R:Rato S:Sapo C:Coelho).

Saída
Apresente o total de cobaias utilizadas, o total de cada tipo de cobaia utilizada e o percentual de cada uma em relação ao total de cobaias utilizadas, sendo que o percentual deve ser apresentado com dois dígitos após o ponto.*/
int main (void){
	int q, cont, a, c, r, s, tot;
	char t;
	r = 0;
	s = 0;
	c = 0;
	scanf("%d", &q);
	for(cont = 1; cont <= q; cont++){
		scanf("%d %c", &a, &t);
		switch(t){
			case "R":
				r = r + a;
			break;

			case "S":
				s = s + a;	
			break;

			case "R":
				c = c + a;
			break;
		}
	}
	printf("Total: %d", s + c + r);
	printf("Total de coelhos: \n");
	printf("Total de ratos: \n");
	printf("Total de sapos: \n");
	
	return 0;
}