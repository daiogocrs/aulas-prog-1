#include <stdio.h>

int main()
{
	int num, pares = 0, impares = 1;

    printf("Digite um numero inteiro: \n");
        scanf("%i", &num);

	do {
        if(num % 2 == 0){
            pares += num;
        }else{
            impares *= num;
        }
        scanf("%i", &num);
    } while (num > 0);
    
    printf("Soma dos pares: %i\n", pares);
    printf("Multiplicacao dos impares: %i\n", impares);

	return 0;
}