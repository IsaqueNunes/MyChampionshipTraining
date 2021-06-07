#include <stdio.h>
int somatorio(int N);
int main (){
    int C, N, i;
    scanf("%d", &C);

    for(i = 0; i < C; i++){
        scanf("%d", &N);
        printf("%d\n", somatorio(N));
    }
    return 0;
}
int somatorio(int N){
    int C;
    if(N == 1) return N;
    else{
        int i = 1;
        somatorio(N-1);
        if(i == 0)return i+somatorio(N-1);
        else return i-somatorio(N-1);
    }
}