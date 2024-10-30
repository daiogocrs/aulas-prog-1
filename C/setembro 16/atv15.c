#include <stdio.h> // biblioteca de entrada e saída 

int main()
{
    int numero;

    printf("Digite um numero inteiro\n");
    scanf("%i", &numero);

    if ((numero % 2) == 0) {
        printf("Numero eh par\n");
    } 
    else {
        printf("Numero eh impar\n");
    }

    return 0;
}