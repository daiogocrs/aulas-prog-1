/*Faça um algoritmo que leia uma matriz 20x15 de números, calcule e mostre a soma das linhas pares da
matriz.*/

#include <stdio.h>

#define LINHAS 3
#define COLUNAS 3

int main() {
    int matriz[LINHAS][COLUNAS];
    int somaLinhasPares = 0;

    // Leitura da matriz
    printf("Digite os elementos da matriz 3x3:\n");
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Cálculo da soma das linhas pares
    for (int i = 0; i < LINHAS; i++) {
            for (int j = 0; j < COLUNAS; j++) {         
                if (i % 2 == 0) { // Verifica se a linha é par
                somaLinhasPares += matriz[i][j];
            }
        }
    }

    // Exibe o resultado
    printf("A soma das linhas pares da matriz é: %d\n", somaLinhasPares);

    return 0;
}