#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, i, *T, P, M, PedidosP = 0, PedidosM = 0;
    scanf("%d", &N);

    T = (int *) malloc(N * sizeof(int));

    for (i = 0; i < N; i++)
    {
        scanf("%d", &T[i]);

        if(T[i] == 1)   PedidosP++;
        else            PedidosM++;
    }
    // scanf("%d", &T[sizeof(T) - 1]);
    // if(T[sizeof(T) - 1] == 1) PedidosP++;
    // else PedidosM++;
    free(T);

    scanf("%d %d", &P, &M);

    if( PedidosP <= P &&
        PedidosM <= M )
        printf("S\n");
    else printf("N\n");

    return 0;
}