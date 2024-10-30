#include <stdio.h>

int main()
{
	int contador = 0;

	//MELHOR PARA TESTE NO INICIO
	while (contador < 10) {
		printf("Contador: %i\n", contador);
		contador++;
	}
    
    do {
        printf("Contador: %i\n", contador);
		contador++;
    } while (contador < 10);
    
	//MELHOR PARA TESTE NO FIM
    for (contador; contador < 10; contador++) {
        printf("Contador: %i\n", contador);
    }
    
	return 0;
}