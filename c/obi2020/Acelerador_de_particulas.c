#include <stdio.h>

#define DISTANCIA_MINIMA 6

int main()
{
    int D, sobra;
    scanf("%d", &D);
    sobra = D - DISTANCIA_MINIMA;

    if(sobra <= 2)
        printf("%d\n", sobra + 1);
    else
        printf("%d\n", (sobra % 8) + 1);

    return 0;
}
