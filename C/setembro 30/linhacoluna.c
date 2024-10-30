#include <stdio.h>

#define LINHA 2
#define COLUNA 5

int main ()
{
    int m[LINHA][COLUNA];
    int i, j;

    for (i = 0; i < LINHA; i++){
        for (j = 0; j < COLUNA; j++){
            printf("Digite 10 números: ");
            scanf("%i", &m[i][j]);
        }
    }

    for (i = 0; i < LINHA; i++){
        for (j = 0; j < COLUNA; j++){
            printf("%i\t", m[i][j]);
        }
        printf("\n");
    }

    return 0;  
}