#include <stdio.h>

int main ()
{
    float pi = 3.14, *p_pi;

    int vetor[] = {1, 2, 3, 4, 5}, i, *p_int;

/*
    p_pi = &pi;

    printf("O valor de pi: %.2f\n", pi);
    printf("O endereço de pi: %p\n", &pi);

    p_pi = p_pi + 0;

    printf("O valor de p_pi: %p\n", p_pi);
    printf("O endereço de p_pi: %p\n", &p_pi);
    printf("O valor apontado por p_pi: %.2f\n", *p_pi);
*/

    p_int = &vetor[0];

    for (i = 0; i < 5; i++) {
        //printf("O valor de vetor[%i]: %i\n", i, vetor[i]);
        //printf("O endereço de vetor[%i]: %p\n\n", i, &vetor[i]);
        printf("O valor de p_int: %i\n", *p_int);
        printf("O endereço de p_int: %p\n\n", p_int);
        p_int++;
    }

    return 0;
}