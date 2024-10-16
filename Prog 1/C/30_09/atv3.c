#include <stdio.h>

#define LINHA 5
#define COLUNA 5

int main ()
{
    float m[LINHA][COLUNA] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25};
    float aux[LINHA]; 
    int i, j;

    printf("Matriz original:\n");
    for (i = 0; i < LINHA; i++){
        for (j = 0; j < COLUNA; j++){
            printf("%.2f\t", m[i][j]);
        }
        printf("\n");
    }

    //• a linha 2 com a linha 4

    for (j = 0; j < COLUNA; j++){
        aux[j] = m[2][j];  
        m[2][j] = m[4][j]; 
        m[4][j] = aux[j]; 
    }

    printf("\nMatriz após a troca da linha 2 pela linha 4:\n");
    for (i = 0; i < LINHA; i++){
        for (j = 0; j < COLUNA; j++){
            printf("%.2f\t", m[i][j]);
        }
        printf("\n");
    }

    //• a coluna 1 com a coluna 3

    for (i = 0; i < LINHA; i++){
        aux[i] = m[i][1];  
        m[i][1] = m[i][3]; 
        m[i][3] = aux[i]; 
    }

    printf("\nMatriz após a troca da coluna 1 pela coluna 3:\n");
    for (i = 0; i < LINHA; i++){
        for (j = 0; j < COLUNA; j++){
            printf("%.2f\t", m[i][j]);
        }
        printf("\n");
    }

    //• a diagonal principal com a secundária

    for (i = 0; i < LINHA; i++) {
        aux[i] = m[i][i]; 
        m[i][i] = m[i][COLUNA - 1 - i]; 
        m[i][COLUNA - 1 - i] = aux[i]; 
    }

    printf("\nMatriz após a troca da diagonal principal com a secundária:\n");
    for (i = 0; i < LINHA; i++) {
        for (j = 0; j < COLUNA; j++) {
            printf("%.2f\t", m[i][j]);
        }
        printf("\n");
    }

    //• a linha 3 com a coluna 2

    for (i = 0; i < LINHA; i++) {
        aux[i] = m[2][i];  
        m[2][i] = m[i][1];
        m[i][1] = aux[i]; 
    }

    printf("\nMatriz após a troca da linha 3 pela coluna 2:\n");
    for (i = 0; i < LINHA; i++) {
        for (j = 0; j < COLUNA; j++) {
            printf("%.2f\t", m[i][j]);
        }
        printf("\n");
    }

    return 0;  
}
