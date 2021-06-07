/*Erros encontrados até agora:
while sendo executado até quando o op == 3
loop infinito ao informar qualquer coisa além de números
quando aguém ganha o jogo da velha com linhas diagonais o código não "breka" e não mostra na tela quem ganhou
goto sendo usado no código
a criação de uma matriz auxiliar era necessário?
*/
#include<stdio.h>
#include<stdlib.h>
//variavel global para ela funcionar em qualquer funcao
int op = 0;
int main(op){
    //while para mostrar o menu na tela somente quando op for != de 4
    if(op == 4){
            printf("%d", op);
        }
    while(op != 4){
        if(op == 4){
            printf("%d", op);
        }
        printf("Qual jogo deseja jogar?\n");
        printf("1 - Jogo da velha\n");
        printf("2 - Jogo da forca >>>Em Manutencao tente outro<<<\n");
        printf("3 - Creditos\n");
        printf("4 - Sair(antes de sair jogue algo antes :)\n");
        scanf("%d", &op);
        //limpa o menu para acontecer uma "passagem de pagina"
        system("cls");
        //switch para verificar os valores de op
        switch(op){
            //inicializa a funcao Jogo_da_Velha
            case 1:
                op = 1;
                Jogo_da_Velha(1);
                break;
            //inicializa a função Jogo_da_Forca
            case 2:
                Jogo_da_Forca();
                break;
            //Exibe os creditos do programa
            case 3:
                Creditos();
                break;
            //Retorna a funcao main caso nao haja uma opcao para op
            default:
                printf("Opção inválida\n");
                main(0);
                break;
        }
    }
    return 0;
}
int Jogo_da_Velha(op){
    int velha[3][3], i, j, k, a = 0, play, cont = 1, aux2 = 0, j2, dp = 0, ds = 0, l = 0, c = 0, plays = 0;
    char aux[3][3], player;
    //while que faz a validacao de "jogar novamente"
    while(op == 1){
        //for que atribui valores para as matrizes "velha" e "aux"
        for(i = 0; i < 3; i++){
            for(j = 0; j < 3; j++){
                velha[i][j] = cont;
                //aux para auxiliar na validacao de vitoria e de erros no jogo
                aux[i][j] = velha[i][j] + '0';
                //cont que auxilia o preenchimento da matriz "aux"
                cont++;
            }
        }
        //for que mostra de fato o jogo da velha
        for(i = 0; i < 3; i++){
            printf("+---+---+---+\n");
            for(j = 0; j < 3; j++){
                printf("| %d ", velha[i][j]);
            }
            printf("|\n");
        }
        printf("+---+---+---+\n");
        //for que faz a troca dos players
        for(k = 0; k < 9; k++){
            //verifica o resto para definir cada player (X e sempre o primeiro a jogar por enquanto depois iremos adicionar uma opcao para o usuario definir os nomes de cada player e quem começa)
            a = k % 2;
            switch(a){
                //se a == 0 o player é o que joga com o X
                case 0:
                    player = 'X';
                    //variavel que faz o contador para ajudar quando ninguem ganhar, ou seja, der "velha"(se houver 5 "X" no "tabuleiro" significa que deu velha)
                    plays++;
                    break;
                //se a != 0 é o player que joga com o O
                default:
                    player = 'O';
                    break;
            }
            //goto para voltar ao inicio caso o usuario jogue em um local que ja tenha sido jogado anteriormente(depois adicionaremos uma opcao "Retornar um movimento")
            repetiu:
            printf("Vai jogar [%c] em qual posicao?\n", player);
            //leitura da posição que o player indicado anteriormente irá jogar
            scanf("%d", &play);
            //limpa a tela para reatualização da matriz
            system("cls");
            //for que de fato reatualiza o anterior, mas modificando logo em seguida
            for(i = 0; i < 3; i++){
                printf("+---+---+---+\n");
                for(j = 0; j < 3; j++){
                    //if que verifica se a posição da matriz é a mesma da qual foi definida pelo usuario na variavel play
                    if(velha[i][j] == play){
                        //if que verifica se a posição indicada pelo usuário já não foi jogada anteriormente
                        if(aux[i][j] == 'X' || aux[i][j] == 'O'){
                            printf("| %c ", aux[i][j]);
                            //variavel que auxilia o goto a retornar para "repetiu:" na linha 80
                            aux2++;
                        }
                        //else para casos em que o usuario nao e burro e joga na casa certa hehe
                        else{
                            //reatualiza a matriz auxiliar
                            aux[i][j] = player;
                            printf("| %c ", aux[i][j]);
                        }
                    }
                    //mostra na tela todo o resto da matriz (os valores diferentes de play que é a posicao que o player vai jogar)
                    else{
                        printf("| %c ", aux[i][j]);
                    }
                }
                printf("|\n");
            }
            printf("+---+---+---+\n");
            //if que usa aux2 como auxiliar para verificar se a casa ja foi preenchida
            if(aux2 >= 1){
                printf("A casa %d ja esta ocupada jogue em um lugar vazio\n", play);
                //o k e subtraido para uma jogada nao se perder
                k--;
                //reatualiza aux2 para nao interferir em seu contador, assim interferindo neste if
                aux2 = 0;
                //go to que de fato retorna para o inicio do for
                goto repetiu;
            }
            //j2 para ajudar na verificacao se alguem venceu na diagonal secundaria
            j2 = 3;
            for(i = 0; i < 3; i++){
                //subtrai para matriz ir descendo o percurso comecando no canto superior direito
                j2--;
                //if que verifica se alguem ganhou na diagonal principal (e obviamente o player a ganhar foi o ultimo a jogar)
                if(aux[i][i] == player){
                    //contador que ajuda a encerrar o para caso alguem ganhe
                    dp++;
                }

                else{
                    if(aux[i][j2] == player){
                        ds++;
                    }
                }
                //if que encerra o for atual caso haja 3 valores iguais (no caso o player)
                if(dp == 3 || ds == 3){
                    break;
                }
                //reatualiza o valor dos contadores para que os mesmos nao interfiram no retorno do laco
                else{
                    dp = 0; 
                    ds = 0;
                }
                //for que verifica as colunas e linhas
                for(j = 0; j < 3; j++){
                    //verifica as colunas
                    if(aux[i][j] == player){
                        //contador para encerrar o for
                        l++;
                    }
                    //verifica as linhas
                    if(aux[j][i] == player){
                        //contador para encerrar o for
                        c++;
                    }
                }
                //if que encerra o for
                if(l == 3){
                    break;
                }
                //else que reatualiza o l caso o if for falso
                else{
                    l = 0;
                }
                //if que encerra o for
                if(c == 3){
                    break;
                }
                //else que reatualiza o l caso o if for falso
                else{
                    c = 0;
                }
            }
            //if que verifica se os contadores das diagonais estao completos
            if(dp == 3 || ds == 3){
                printf("O jogador [%c] ganhou!\n", player);
                break;
            }
            //caso nao seja verifica as linhas e colunas
            else if(l == 3 || c == 3){
                printf("O jogador [%c] ganhou!\n", player);
                break;
            }
            //e se ninguem ganhar simplesmente da velha(seriam eles muito bons ou muito ruins para ninguem ganhar????)
            else if(plays == 5){
                printf("Deu velha!\n");
            }
        }
        //menu de finalizacao do jogo
        printf("1 - Jogar novamente?\n");
        printf("2 - Menu\n");
        printf("3 - Sair\n");
        scanf("%d", &op);
        //switch que altera o valor de op
        switch(op){
            //caso o jogador escolha jogar novamente simplesmente encerra o switch fazendo com que o while de verificação de play again funcione
            case 1:
                break;
            //caso o jogador queira ir para o menu
            case 2:
                //atribui o valor 0 a op para que seu while se inicie
                main(0);
                //limpa a tela para simular uma troca de paginas
                system("cls");
                break;
                //caso o usuario informe uma opcao nao encontrada o jogo retorna ao menu
            //atualiza o valor de op para o while não ser inicializado
            case 3:
                main(4);
                break;
            default:
                printf("Função não encontrada retornando ao menu principal...");
                main(0);
                break;
        }
    }
}
//Jogo não acabado
int Jogo_da_Forca(){
    printf("Estamos em Manutencao! Tente outro jogo, Desculpe o incoveniente!");
    //retorna para o menu com o 0 atribuido a op para que seu while se inicie
    main(0);
    return 0;
}
//os creditos do jogo
int Creditos(){
    printf("-Isaque Nunes\n");
    printf("-Augusto Mercado\n");
    printf("-Rafael Veiga\n");
    printf("1 - Voltar ao menu\n");
    printf("2 - Encerrar o programa");
    scanf("%d", &op);
    //switch para atualizar o valor de op fazendo com que o main não retorne com valores errados
    switch(op){
        case 1:
            main(0);
            //cls para simular uma troca de paginas
            system("cls");
            break;
        case 2:
            main(4);
            //cls para simu
            system("cls");
            break;
        default:
            //caso nao exista uma opcao para a escolha retorna ao menu
            printf("Função não encontrada retornando ao menu...");
            main(0);
            break;
    }
    return 0;
}