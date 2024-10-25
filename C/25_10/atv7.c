#include <stdio.h>

void soma_pares(int x, int y);

int main()
{
    int x, y, soma;

    printf("Digite um valor para x: ");
    scanf("%i", &x);

    printf("Digite um valor para y: ");
    scanf("%i", &y);

    soma = soma_pares(x, y);
    
    printf("Soma dos pares entre %i e %i: %i\n", x, y, soma);

    return 0;
}

void soma_pares(int x, int y)
{
    int soma = 0, i;

    for (i = x; i <= y; i++)
    {
        if (i % 2 == 0)
        {
            soma += i;
        }    
    }
    return soma;
}