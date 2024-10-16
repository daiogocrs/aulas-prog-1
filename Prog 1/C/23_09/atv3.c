//Escreva um programa para ler um vetor de 10 elementos do tipo inteiro. Após a leitura do valor mostre todos os números primos.
#include <stdio.h>

int main() {
    int v[10], i, j, primo;

    for(i = 0; i < 10; i++) {
        printf("Digite um numero para v[%i]: ", i);
        scanf("%i", &v[i]);
    }

    printf("Os numeros primos sao:\n");
    for(i = 0; i < 10; i++) {
        if (v[i] <= 1) {
            continue; 
        }

        primo = 1; 
        for (j = 2; j * j <= v[i]; j++) {
            if (v[i] % j == 0) {
                primo = 0; 
                break;
            }
        }

        if (primo) {
            printf("%i\n", v[i]);
        }
    }

    return 0;
}
