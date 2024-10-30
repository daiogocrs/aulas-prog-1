#include <stdio.h>

int soma_numeros();

int main()
{
    /*int soma;

    soma = soma_numeros();
    printf("A soma dos valores digitados é: %i\n", soma);*/

    printf("A soma dos valores digitados é: %i\n", soma_numeros());

    return 0;
}

int soma_numeros()
{
    int num1, num2;

    printf("Digite o primeiro numero: ");
    scanf("%i", &num1);
    printf("Digite o segundo numero: ");
    scanf("%i", &num2);

    return num1 + num2;
}