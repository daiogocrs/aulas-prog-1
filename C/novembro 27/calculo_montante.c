#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define T 100

typedef char string [T];

struct produto{
int id;
string descricao;
int
qtd_estoque;
float vlr_unitario;
struct produto *prox;
};

typedef struct produto produto;

//PROTOTIPO DE FUN��O
int menu();
produto* criar_novo_produto(int *qtd_produtos);
void inserir_novo_produto_lista_inicio(produto **lista, produto *novo);
void mostrar_produtos_cadastrados(produto *lista);
float calcular_montante_estoque(produto *lista);
void retirar_enter(string descricao);

int main(){

    string localizar;
    float montante;
    int qtd_produtos = 0, opc;
    produto *lista = NULL, *aux = NULL;

    do {

    opc = menu();
        switch(opc){
        case 1: aux = criar_novo_produto(&qtd_produtos);
            if(aux == NULL){
            printf("Nao foi possivel alocar memoria\n");
            }
            else {
            inserir_novo_produto_lista_inicio(&lista, aux);
            }
        break;

        case 2: mostrar_produtos_cadastrados(lista);
        break;

        case 3: montante = calcular_montante_estoque(lista);
                printf("O montante do seu estoque e de R$ %.2f\n", montante);
        break;

        case 4:
        break;

        case 0: printf("Adeus =( \n");
        break;

        default: printf("Opcao invalida!!!!\n");
        break;
        }
    }while (opc != 0);

return 0;
}

int menu(){

    int opc;

        printf("[1] - CADASTRAR NOVO PRODUTO\n");
        printf("[2] - MOSTAR PRODUTOS CADASTRADOS\n");
        printf("[3] - CALCULAR MONTANTE DE ESTOQUE\n");
        printf("[4] - LOCALIZAR PRODUTO POR DESCRICAO\n");
        printf("[0] - SAIR DO PROGRAMA\n");
        scanf("%i", &opc);
        getchar();

return opc;
}

produto* criar_novo_produto(int *qtd_produtos){

    produto *novo = NULL;
    novo = (produto*)malloc(sizeof(produto));

    if(novo == NULL)
    {
        return NULL;
    }

    novo -> id = *qtd_produtos += 1;
    *qtd_produtos =+ 1;
    printf("Identificacao do produto.....: %i\n", novo->id);
    printf("Descricao do produto.........: ");
    fgets(novo->descricao, T, stdin);
    retirar_enter(novo->descricao);
    printf("Quantidade de estoque........: ");
    scanf("%i", &novo->qtd_estoque);
    printf("Valor unitario...............: ");
    scanf("%f", &novo->vlr_unitario);
    novo->prox = NULL;

return novo;
}

void inserir_novo_produto_lista_inicio(produto **lista, produto *novo){

    if(*lista == NULL){
    *lista = novo;
    }

    else {
    novo -> prox = *lista;
    *lista = novo;
    }

}

void mostrar_produtos_cadastrados(produto *lista){

produto *aux = lista;

    while (aux != NULL){
        printf("Identificacao do produto.....: %i\n", aux->id);
        printf("Descricao do produto.........: %s\n", aux->descricao);
        printf("Quantidade de estoque........: %i\n", aux->qtd_estoque);
        printf("Valor unitario...............: %.2f\n\n", aux->vlr_unitario);
        aux = aux->prox;
    }

}

float calcular_montante_estoque(produto *lista){

    float mult = 0, montante = 0;
    produto *aux = lista;

        while (aux != NULL){
            mult = aux->qtd_estoque * aux->vlr_unitario;
            montante = mult + montante;
            aux = aux->prox;
        }

        return montante;
}

void retirar_enter(string descricao){

    int t;

    t = strlen(descricao);
    descricao[t - 1] = '\0';
}