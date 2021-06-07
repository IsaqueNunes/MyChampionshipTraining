#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int main()
{
    int N, F, i, j;
    char **matriz;
    scanf("%d %d", &N, &F);

    matriz = malloc(N * sizeof(char *));

    for(i = 0; i < N; i++)
    {
        matriz[i] = malloc(sizeof(char) * N + 1);
        scanf("%s", matriz[i]);         
    }
    
    //teste
    // printf("\n%c\n\n", matriz[0][0]);
    if(matriz[0][0] - '0' <= F)
    {
        bool stop = false;
        matriz[0][0] = '*';
        for (i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {                
                if(i == 0 && j != 0)
                {
                    if(
                        (matriz[i][j - 1] == '*') &&
                        (matriz[i][j] - '0' <= F)
                    ){
                        matriz[i][j] = '*';
                    }
                    else printf("BREAK\n");break;
                }

                else if(j == 0 && i != 0)
                {
                    if(
                        (matriz[i - 1][j] == '*') &&
                        (matriz[i][j] - '0' <= F)
                    ){
                        printf("TESTEEEEEEEEEEEEEE\n");
                        matriz[i][j] = '*';
                    }
                    else printf("BREAK\n"); break;
                }

                else if(i == 0 && j == 0) continue;
                else
                {
                    if(
                        (matriz[i - 1][j] == '*' && matriz[i - 1][j] - '0' <= F) ||
                        (matriz[i][j - 1] == '*' && matriz[i][j - 1] - '0' <= F)
                    ){
                        matriz[i][j] = '*';
                    }else
                    {
                        stop = true;
                        break;
                    }
                }
            }
            if(stop) break;
        }
    }

    for (int i = 0; i < N; i++)
        printf("%s\n", matriz[i]);

    for (int i = 0; i < N; i++)
        free(matriz[i]);
    free(matriz);

    return 0;
}

