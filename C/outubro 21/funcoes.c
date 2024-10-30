#include <stdio.h>

#define T 5

char matriz[T][T];

//Cabeçalho das subrotinas (funções auxiliares)
void ler_matriz();
void mostrar_matriz();

//Função principal
int main()
{
    ler_matriz();
    mostrar_matriz();

    return 0;
}

//Implementação de subrotinas
void ler_matriz()
{
    int i, j;

    for (i = 0; i < T; i++) {
        for (j = 0; j < T; j++) {
            printf("Digite um caractere: ");
            scanf("%c", &matriz[i][j]);
            getchar();
        }
    }
}
void mostrar_matriz()
{
    int i, j;

    for (i = 0; i < T; i++) {
        for (j = 0; j < T; j++) {
            printf("%c ", matriz[i][j]);
        }
        printf("\n");
    }
}