#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

typedef struct{
    int idade;
    double altura;
}Pessoa;

typedef struct{
    struct Nodo* pProx;
    struct Nodo* pAnt;
    Pessoa* pPessoa;
}Nodo;

int main(void)
{
    Pessoa *pPessoa = (Pessoa*) malloc(sizeof(Pessoa));

    pPessoa->idade = 12;
    pPessoa->altura = 178.56;

    Nodo* pNodo = (Nodo*) malloc(sizeof(Nodo));

    pNodo->pPessoa = pPessoa;

    pNodo->pPessoa->idade = 40;

    printf("%d\n", pNodo->pPessoa->idade);

    return 0;
}