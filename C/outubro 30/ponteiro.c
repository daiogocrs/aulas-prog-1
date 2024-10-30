#include <stdio.h>

int main()
{
    int a = 10, b = 20;
    int *p_a;

    printf("Endereço e conteúdo de a: %p %i\n", &a, a);
    printf("Endereço e conteúdo de b: %p %.1f\n", &b, b);

    p_a = &a;

    printf("Endereço e conteúdo de p_a: %p %i\n", &p_a, *p_a);

    *p_a = 15; // Alterando o conteudo de a

    printf("Endereço e conteúdo de a: %p %i\n", &a, a);

    return 0;
}