#include <stdio.h>

#define T 100

typedef char string[T];

struct produto {
    int id;
    string descricao;
    int qtd_estoque;
    float vlr_unitario;
    struct produto *prox;
};

typedef struct produto produto;

// Prot�tipos das fun��es
int menu();
produto* criar_novo_produto(int *qtd);
void inserir_novo_produto_lista_inicio(produto **lista, produto *novo);
void mostrar_produtos_cadastrados(produto *lista);
float calcular_montante_estoque(produto *lista);

// Fun��o principal
int main()
{
    int qtd_produtos = 0, opc;
    produto *lista = NULL, *aux = NULL;

    do {

        opc = menu();

        switch (opc) {

            case 1: aux = criar_novo_produto(&qtd_produtos);
                    if (aux == NULL) {
                        printf("N�o foi possivel cadastrar um novo produto\n");
                    }
                    else {
                        inserir_novo_produto_lista_inicio(&lista, aux);
                    }

                    break;

            case 2: mostrar_produtos_cadastrados(lista);
                    break;

            case 3: break;

            case 4: break;

            case 0: printf("Tchau!!!\n");

            default: printf("Opcao invalida!!!\n");


        }

    } while (opc != 0);


    return 0;
}


// Implementa��o das fun��es auxiliares
int menu()
{
    int opc;

    printf("1.Cadastrar novo produto\n");
    printf("2.Mostrar produtos cadastrados (em estoque)\n");
    printf("3.Calcular montante de estoque (R$)\n");
    printf("4.Localizar produto por descricao\n");
    printf("0.Sair do programa\n");
    printf(":: ");
    scanf("%i", &opc);
    getchar();

    return opc;
}

produto* criar_novo_produto(int *qtd)
{
    produto *novo = NULL;

    // Aloca��o din�mica
    novo = (produto*)malloc(sizeof(produto));

    if (novo == NULL) {
        return NULL;
    }

    novo->id = *qtd + 1;
    *qtd += 1;
    printf("Identificacao do produto......: %d\n", novo->id);
    printf("Descricao do produto..........: ");
    fgets(novo->descricao, T, stdin);
    printf("Quantidade de estoque.........: ");
    scanf("%i", &novo->qtd_estoque);
    printf("Valor unitario................: ");
    scanf("%f", &novo->vlr_unitario);
    novo->prox = NULL;

    return novo;
}

void inserir_novo_produto_lista_inicio(produto **lista, produto *novo)
{
    // Lista vazia
    if (*lista == NULL) {
        *lista = novo;
    }
    // Lista n�o vazia
    else {
        novo->prox = *lista;
        *lista = novo;
    }
}

void mostrar_produtos_cadastrados(produto *lista)
{
    produto *aux = lista;

    while (aux != NULL) {
        printf("Identificacao do produto......: %d\n", aux->id);
        printf("Descricao do produto..........: %s\n", aux->descricao);
        printf("Quantidade de estoque.........: %i\n", aux->qtd_estoque);
        printf("Valor unitario................: %.2f\n", aux->vlr_unitario);
        aux = aux->prox;
    }
}

float calcular_montante_estoque(produto *lista)
{

}