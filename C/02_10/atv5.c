#include <stdio.h>

#define LINHA 10
#define COLUNA 10

int main()
{
    int i, j;
    char ma[LINHA][COLUNA] = {'A', 'W', 'P', 'Y', 'K', 'T', 'T', 'A', 'B', 'C', 'F', 'M', 'H', 'F', 'Q', 'A', 'R', 'I', 'V', 'N', 'R', 'F', 'E', 'L', 'M', 'R', 'P', 'U', 'D', 'T', 'H', 'A', 'S', 'T', 'I', 'F', 'Q', 'E', 'M', 'E', 'F', 'P', 'D', 'A', 'I', 'I', 'G', 'C', 'J', 'E', 'D', 'D', 'U', 'D', 'M', 'N', 'S', 'U', 'S', 'V', 'L', 'J', 'K', 'T', 'N', 'S', 'E', 'R', 'E', 'Z', 'A', 'I', 'A', 'J', 'F', 'N', 'R', 'S', 'Z', 'I', 'T', 'O', 'H', 'L', 'G', 'E', 'X', 'X', ' ', 'F', 'J', 'N', 'E', 'J', 'N', 'Y', 'R', 'U', 'R', 'L'};
    char mb[LINHA][COLUNA];

    for (i = 0; i < LINHA; i++){
        for (j = 0; j < COLUNA; j++){
            mb[i][j] = ' ';
        }
    }

    for (i = 0; i < LINHA; i++){
        for (j = 0; j < COLUNA; j++){
            if(ma[i][j] == 'A' || ma[i][j] == 'E' || ma[i][j] == 'I' || ma[i][j] == 'O' || ma[i][j] == 'U'){
                mb[i][j] = ma[i][j];  
            }
        }
    }

    printf("Matriz com vogais:\n");
    for (i = 0; i < LINHA; i++){
        for (j = 0; j < COLUNA; j++){
            printf("%c\t", mb[i][j]);
        }    
        printf("\n");
    }

    return 0;
}
