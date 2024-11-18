#include <stdio.h>
#include <stdlib.h>

#define LINHA 3
#define COLUNA 3

int main()
{
    int **matriz, i;

    // Aloca as linhas de forma dinâmica
    matriz = (int**)malloc(sizeof(int*) * LINHA);

    for (i = 0; i < LINHA; i++){
        matriz[i] = (int*)malloc(sizeof(int) * COLUNA);
    }

    printf("Digite os elementos da matriz:\n");
    for (i = 0; i < LINHA; i++){
        for (int j = 0; j < COLUNA; j++){
            scanf("%i", (*(matriz+i)+j));
        }
    }

    for (i = 0; i < LINHA; i++){
        for (int j = 0; j < COLUNA; j++){
            printf("%i\t", *(*(matriz+i)+j));
        }
        printf("\n");
    }

    return 0;
}
