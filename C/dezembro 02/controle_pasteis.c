#include <stdio.h>

#define T 100

typedef char string[T];


struct dados_pastel {
  int codigo;
  string descricao;
  string ingredientes;
  float preco;
  struct dados_pastel *prox;
};

typedef struct dados_pastel pastel_t;

// Prot�tipo das fun��es
int menu();
pastel_t *cria_novo_pastel();
void inserir_novo_pastel_lista(pastel_t *lista, pastel_t *novo);
void mostrar_pasteis(pastel_t *lista);
void salvar_dados_pasteis_arquivo(pastel_t *lista);


int main()
{
    pastel_t *lista_pasteis = NULL;
    int opcao;

    do {

        opcao = menu();

        switch (opcao) {

            case 1: pastel_t *novo = cria_novo_pastel();
                    inserir_novo_pastel_lista(lista_pasteis, novo);
                    break;
            case 2: break;
            case 3: break;
            case 4: break;
            case 0: printf("Obrigado por comprar na pastelaria Canoas\n");
        }

    } while (opcao != 0);





    return 0;
}

int menu()
{
    int opc;

    printf("1.Inserir pastel\n");
    printf("2.Listar pasteis\n");
    printf("3.Localizar pastel por descricao\n");
    printf("4.Vender pastel\n");
    printf("0.Sair do programa\n");
    printf("::: ");
    scanf("%d", &opc);

    getchar();

    return opc;
}

pastel_t *cria_novo_pastel()
{
     pastel_t *novo = (pastel_t*)malloc(sizeof(pastel_t));

     printf("Qual o codigo do pastel...........: ");
     scanf("%i", &novo->codigo);
     getchar();

     printf("Descricao do pastel...............: ");
     fgets(novo->descricao, T, stdin);

     printf("Quais os ingredientes do pastel...: ");
     fgets(novo->ingredientes, T, stdin);

     printf("Preco do pastel...................: ");
     scanf("%f", &novo->preco);

     novo->prox = NULL;

     return novo;
}

void inserir_novo_pastel_lista(pastel_t *lista, pastel_t *novo)
{
    if (lista == NULL) {
        lista = novo;
    }
    else {
        novo->prox = lista;
        lista = novo;
    }
}

void mostrar_pasteis(pastel_t *lista)
{

}

void salvar_dados_pasteis_arquivo(pastel_t *lista)
{

}