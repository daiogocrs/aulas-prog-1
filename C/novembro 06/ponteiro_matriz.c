#include <stdio.h>

int main()
{
    int m[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}, i, j;

    printf("Matriz: \n");
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            printf("%i ", *(*(m+i)+j));
        }
        printf("\n");
    }

    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            printf("Endereço de linha [%i]: %p\n", i, (m+i));
            printf("Endereço de coluna [%i]: %p\n", i, (*(m+i)+j));
        }
        printf("\n");
    }

    return 0;
}