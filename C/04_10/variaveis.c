#include <stdio.h>

int main()
{
    int x = 10;
    int *p;

    p = &x;

    printf("--SEM PONTEIRO--\n");
    printf("O endereço de x é = %p\n", &x);
    printf("O conteúdo de x é = %d\n\n", x);

    *p = 20;

    printf("--COM PONTEIRO--\n");
    printf("O endereço de x é = %p\n", &x);
    printf("O conteúdo de x é = %d\n", x);
    printf("O endereço de x pelo ponteiro é = %p\n\n", p);

    return 0;
}