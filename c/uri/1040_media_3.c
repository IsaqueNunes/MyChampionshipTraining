	/*Leia quatro números (N1, N2, N3, N4), cada um deles com uma casa decimal, correspondente às quatro notas de um aluno. Calcule a média com pesos 2, 3, 4 e 1, respectivamente, para cada uma destas notas e mostre esta média acompanhada pela mensagem "Media: ". Se esta média for maior ou igual a 7.0, imprima a mensagem "Aluno aprovado.". Se a média calculada for inferior a 5.0, imprima a mensagem "Aluno reprovado.". Se a média calculada for um valor entre 5.0 e 6.9, inclusive estas, o programa deve imprimir a mensagem "Aluno em exame.".

No caso do aluno estar em exame, leia um valor correspondente à nota do exame obtida pelo aluno. Imprima então a mensagem "Nota do exame: " acompanhada pela nota digitada. Recalcule a média (some a pontuação do exame com a média anteriormente calculada e divida por 2). e imprima a mensagem "Aluno aprovado." (caso a média final seja 5.0 ou mais ) ou "Aluno reprovado.", (caso a média tenha ficado 4.9 ou menos). Para estes dois casos (aprovado ou reprovado após ter pego exame) apresente na última linha uma mensagem "Media final: " seguido da média final para esse aluno.

Entrada
A entrada contém quatro números de ponto flutuante correspendentes as notas dos alunos.

Saída
Todas as respostas devem ser apresentadas com uma casa decimal. As mensagens devem ser impressas conforme a descrição do problema. Não esqueça de imprimir o enter após o final de cada linha, caso contrário obterá "Presentation Error".*/

#include<stdio.h>
int main (void){
	//notas das provas 1, 2, 3, 4 respectivamente
	double a[4];
	//peso das notas
	double b[4] = {2, 3, 4, 1};
	//media sem exame, nota do exame, media final com exame respectivamente
	double c, d, E;
	scanf("%lf %lf %lf %lf", &a[0], &a[1], &a[2], &a[3]);

	//calculo das medias das provas sem exame
	c = ((a[0] * b[0]) + (a[1] * b[1]) + (a[2] * b[2]) + (a[3] * b[3])) / (b[0] + b[1] + b[2] + b[3]); 
	
	//se a média for maior ou igual a 7 o aluno é aprovado
	if(c >= 7){
		printf("Media: %.1lf\n", c);
		printf("Aluno aprovado.\n");
	}
		else{
				//Se a média for menor que 5 o aluno é reprovado 
				if(c < 5){
				printf("Media: %.1lf\n", c);	
				printf("Aluno reprovado.\n");
				}

				//se a media estiver entre 7(excluindo o 7) e 5 (incluindo o 5) o aluno fica de exame
				if(c < 7 && c >= 5){
					scanf("%lf", &d);
					printf("Media: %.1lf\n", c);
					printf("Aluno em exame.\n");
					printf("Nota do exame: %.1lf\n", d);

					//calculo da média com exame
					E = (d + c) / 2;					

					//verifica se a nova média está maior que 5 e se estiver o aluno é aprovado
					if(E >= 5){
						printf("Aluno aprovado.\n");
					}

					//verifica se a nova média esta menor que 5 e se estiver o aluno é reprovado
					if(E < 5){
						printf("Aluno reprovado.\n");
					}

					//mostra na tela a média final
					printf("Media final: %.1lf\n", E);
			}
		}
	return 0;
}