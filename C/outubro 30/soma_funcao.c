#include <stdio.h>

void soma(int *a); //parametro por referência

int main()
{
    int valor = 10;

    printf("Conteúdo do valor: %i\n", valor);

    soma(&valor);

    printf("Conteúdo do valor: %i\n", valor);

    return 0;
}

void soma(int *a)
{
    *a += 1;
}