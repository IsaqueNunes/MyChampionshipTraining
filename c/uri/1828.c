#include <stdio.h>
#include <string.h>
typedef char String[8];
int main(){
    int t, k, i, j, result;
    String m[5][3] = {{"tesoura", "papel\0\0", "lagarto"}, {"papel\0\0", "pedra\0\0", "Spock\0\0"},  {"pedra\0\0",   "lagarto", "tesoura"}, {"lagarto", "Spock\0\0", "papel\0\0"}, {"Spock\0\0", "tesoura", "pedra\0\0"}}, Sheldon, Raj;
    scanf("%d", &t);
    for(k = 0; k < t; k++){
        scanf(" %s %s", Sheldon, Raj);
        if(strcmp(Sheldon, Raj) == 0)
            printf("Caso #%d: De novo!\n", k + 1);
        else{
            for(j = 0; j < 5; j++)
                if(strcmp(Sheldon, m[j][0]) == 0){
                    if((strcmp(Raj, m[j][1]) == 0) || (strcmp(Raj, m[j][2]) == 0))
                        result = 0;
                    else 
                        result = 1;
                }
            switch(result){
                case 0:
                    printf("Caso #%d: Bazinga!\n", k+1);
                    break;
                case 1:
                    printf("Caso #%d: Raj trapaceou!\n", k+1);
                    break;
            }
        }
        memset(Sheldon, '\0', 8);
        memset(Raj, '\0', 8);
    }
    return 0;
}   