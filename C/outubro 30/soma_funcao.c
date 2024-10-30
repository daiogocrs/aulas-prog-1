#include <stdio.h>

int soma(int a);

int main()
{
    int valor = 10;

    printf("Conteúdo do valor: %i\n", valor);

    valor = soma(valor);

    printf("Conteúdo do valor: %i\n", valor);

    return 0;
}

int soma(int a)
{
    return ++a;
}