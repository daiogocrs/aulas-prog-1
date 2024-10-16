#include <stdio.h>
    
int main ()
{
    int v[10], i;
    
    for(i = 0; i < 10; i++){
        printf("Digite um numero para v[%i]: ", i);
        scanf("%i", &v[i]);
    }
        
    for(i = 0; i < 10; i++){
        if(v[i] % 2 == 0){
            printf("Os numeros pares sao: %i\n", v[i]);
        }
    }
    
	return 0;
}