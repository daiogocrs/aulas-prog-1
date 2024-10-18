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

Nodo* pInicio;
Nodo* pFim;
Nodo* pAux;

int main(void)
{
    Pessoa *pPessoa = (Pessoa*) malloc(sizeof(Pessoa));
    Nodo* pNodo = (Nodo*) malloc(sizeof(Nodo));
    pInicio = pNodo;
    pFim = pNodo;

    Pessoa *pPessoa = (Pessoa*) malloc(sizeof(Pessoa));
    Nodo* pNodo = (Nodo*) malloc(sizeof(Nodo));
    pNodo->pPessoa = pPessoa;

    pInicio->pProx = pNodo;
    pInicio->pAnt = NULL;
    pFim = pNodo;


    return 0;
}