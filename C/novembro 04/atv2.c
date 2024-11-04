#include <stdio.h>

void troca(int *a, int *b);

int main()
{
    int a, b;

    scanf("%i", &a);
    scanf("%i", &b);

    printf("Antes da troca | A: %i e B: %i\n", a, b);

    troca(&a, &b);

    printf("Depois da troca | A: %i e B: %i\n", a, b);

    return 0;
}

void troca(int *a, int *b)
{
    int temp; 
    
    temp = *a;
    *a = *b;
    *b = temp;  
}
