#include <stdio.h>
#include <stdlib.h>

struct ponto {
    int x;
    int y;
    struct ponto *p_prox;
};


int main()
{

    printf("%d\n\n", sizeof(struct ponto));

    struct ponto *p1 = (struct ponto*)malloc(sizeof(struct ponto) * 100);
    int *v = malloc(sizeof(int) * 10);
    struct ponto *p2 = (struct ponto*)malloc(sizeof(struct ponto) * 100);

    printf("P1: %p\n", &p1);
    printf("P2: %p\n", &p2);

    return 0;
}