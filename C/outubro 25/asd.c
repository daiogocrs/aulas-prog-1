#include <stdio.h>

void mostra_numero(int n);

//Variável global
//int numero;

int main()
{
    int numero;
    
    printf("Insira um número: ");
    scanf("%i", &numero);
    mostra_numero(numero);

    return 0;
}

void mostra_numero(int n)
{
    //int numero;

    printf("O número inserido foi: %i\n", n);
}