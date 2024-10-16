#include <stdio.h>

#define LINHA 4
#define COLUNA 4

int main ()
{
    int m[LINHA][COLUNA] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
    int i, j;

    for (i = 0; i < LINHA; i++){
        for (j = 0; j < COLUNA; j++){
            if(i == j){
                printf("%i\t", m[i][j]);
            }
        }
    }

    return 0;  
}