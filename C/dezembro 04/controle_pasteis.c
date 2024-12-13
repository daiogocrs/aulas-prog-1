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
void inserir_novo_pastel_lista(pastel_t **lista, pastel_t *novo);
void mostrar_pasteis(pastel_t *lista);
void salvar_dados_pasteis_arquivo(pastel_t *lista);
void ler_dados_pasteis_arquivo(pastel_t **lista);


int main()
{
    pastel_t *lista_pasteis = NULL;
    pastel_t *novo;

    int opcao;

    // Importa dados do arquivo texto
    printf("Importando dados ...\n");
    ler_dados_pasteis_arquivo(&lista_pasteis);

    do {

        opcao = menu();

        switch (opcao) {

            case 1: novo = cria_novo_pastel();
                    inserir_novo_pastel_lista(&lista_pasteis, novo);
                    break;
            case 2: mostrar_pasteis(lista_pasteis);
                    break;
            case 3: break;
            case 4: break;
            case 0: printf("Salvando dado ...\n");
                    salvar_dados_pasteis_arquivo(lista_pasteis);
                    printf("Obrigado por comprar na pastelaria Canoas\n");
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

void inserir_novo_pastel_lista(pastel_t **lista, pastel_t *novo)
{
    if (*lista == NULL) {
        *lista = novo;
    }
    else {
        novo->prox = *lista;
        *lista = novo;
    }
}

void mostrar_pasteis(pastel_t *lista)
{
  pastel_t *aux = lista;

  while (aux != NULL) {
     printf("Qual o codigo do pastel...........: %i\n", aux->codigo);
     printf("Descricao do pastel...............: %s\n", aux->descricao);
     printf("Quais os ingredientes do pastel...: %s\n", aux->ingredientes);
     printf("Preco do pastel...................: %.2f\n", aux->preco);
     aux = aux->prox;
  }
}

void salvar_dados_pasteis_arquivo(pastel_t *lista)
{
  FILE *fp;

  fp = fopen("pasteis.txt", "w");

  while (lista != NULL) {
    fprintf(fp, "%i\n", lista->codigo);
    fprintf(fp, "%s\n", lista->descricao);
    fprintf(fp, "%s\n", lista->ingredientes);
    fprintf(fp, "%.2f\n", lista->preco);
    lista = lista->prox;
  }

  fclose(fp);
}

void ler_dados_pasteis_arquivo(pastel_t **lista)
{
  FILE *fp;
  int codigo;
  float valor;
  string descricao, ingredientes;
  pastel_t *novo = NULL;

  fp = fopen("pasteis.txt", "r");

  while (!feof(fp)) {
    fscanf(fp, "%i", &codigo);
    fgets(descricao, T, fp);
    fgets(ingredientes, T, fp);
    fscanf(fp, "%f", &valor);

    // Aloca um registro na heap
    novo = (pastel_t*)malloc(sizeof(pastel_t));

    // Coloca os dados em novo
    novo->codigo = codigo;
    strcpy(novo->descricao, descricao);
    strcpy(novo->ingredientes, ingredientes);
    novo->preco = valor;
    novo->prox = NULL;

    // Inserir o novo registro na lista
    inserir_novo_pastel_lista(lista, novo);

  }

  fclose(fp);

}