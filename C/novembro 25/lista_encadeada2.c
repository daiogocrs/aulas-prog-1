#include <stdio.h>
#include <stdlib.h>

struct ponto {
    int x;
    int y;
    struct ponto *p_prox;
};

int menu();
struct ponto* inserir_novo_ponto(int x, int y);
void mostrar_pontos(struct ponto* lista);
struct ponto* localizar_ultimo(struct ponto* lista);

int main()
{
    int opcao, x, y;

    struct ponto *listas_pontos = NULL;

    do {
        opcao = menu();
        switch (opcao) {
            case 1: printf("Informe a coordenada X: ");
                    scanf("%d", &x);
                    printf("Informe a coordenada Y: ");
                    scanf("%d", &y);
                    if (listas_pontos == NULL)
                    {
                        listas_pontos = inserir_novo_ponto(x, y);
                    }
                    else
                    {
                        struct ponto *aux = localizar_ultimo(listas_pontos);

                        aux->p_prox = inserir_novo_ponto(x, y);
                    }
                    printf("Ponto inserido com sucesso!\n");
                    break;
            case 2: mostrar_pontos(listas_pontos);
                    break;
            case 3: break;
            case 0:
                printf("Saindo...\n");
                    break;
            default:
                printf("Opcao invalida\n");
                    break;
        }
    } while (opcao != 0);

    return 0;
}

int menu()
{
    int opcao;

    printf("1 - Inserir novo ponto\n");
    printf("2 - Mostrar pontos\n");
    printf("3 - Localizar um ponto\n");
    printf("0 - Sair\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    return opcao;
}

struct ponto* inserir_novo_ponto(int x, int y)
{
    struct ponto *novo; 
    
    novo = (struct ponto*)malloc(sizeof(struct ponto));

    novo->x = x;
    novo->y = y;
    novo->p_prox = NULL;

    return novo;
}

void mostrar_pontos(struct ponto* lista)
{
    struct ponto* aux = lista;

    while (aux != NULL)
    {
        printf("Valor de X: %d\n", aux->x);
        printf("Valor de Y: %d\n", aux->y);
        printf("Meu endereço: %p\n", aux);
        printf("Valor do p_prox: %p\n", aux->p_prox);
        aux = aux->p_prox;
    }
}

struct ponto* localizar_ultimo(struct ponto* lista)
{
    struct ponto* aux = lista;

    while (aux->p_prox!= NULL)
    {
        aux = aux->p_prox;
    }   

    return aux;
}