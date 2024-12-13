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

void salvar_dados_arquivo_binario(string nome, pastel_t *lista);
void ler_dados_arquivo_binario(string nome, pastel_t **lista);

void remove_enter(string str);


int main()
{
    pastel_t *lista_pasteis = NULL;
    pastel_t *novo;

    int opcao;

    // Importa dados do arquivo texto
    printf("Importando dados ...\n");
    //ler_dados_pasteis_arquivo(&lista_pasteis);
    ler_dados_arquivo_binario("pasteis.bin", &lista_pasteis);

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
                    //salvar_dados_pasteis_arquivo(lista_pasteis);
                    salvar_dados_arquivo_binario("pasteis.bin", lista_pasteis);
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
     remove_enter(novo->descricao);

     printf("Quais os ingredientes do pastel...: ");
     fgets(novo->ingredientes, T, stdin);
     remove_enter(novo->ingredientes);

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
     printf("Preco do pastel...................: %.2f\n\n", aux->preco);
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

  if (fp ==  NULL) {
    return;
  }

  while (!feof(fp)) {
    fscanf(fp, "%i\n", &codigo);
    fgets(descricao, T, fp);
    remove_enter(descricao);
    fgets(ingredientes, T, fp);
    remove_enter(ingredientes);
    fscanf(fp, "%f\n", &valor);

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

void remove_enter(string str)
{
    int tam = strlen(str);

    str[tam-1] = '\0';
}

void salvar_dados_arquivo_binario(string nome, pastel_t *lista)
{
    FILE *fp = fopen(nome, "wb");

    if (fp == NULL) {
        printf("Nao foi possivel abrir o arquivo %s\n", nome);
        return;
    }

    while (lista) {
       fwrite(lista, sizeof(pastel_t), 1, fp);
       lista = lista->prox;
    }

    fclose(fp);
}

void ler_dados_arquivo_binario(string nome, pastel_t **lista)
{
    FILE *fp = fopen(nome, "rb");
    pastel_t *aux = NULL;

    if (fp == NULL) {
        printf("Nao foi possivel abrir o arquivo %s\n", nome);
        return;
    }

    while (!feof(fp)) {
        aux = (pastel_t*)malloc(sizeof(pastel_t));
        fread(aux, sizeof(pastel_t), 1, fp);
        aux->prox = NULL;
        inserir_novo_pastel_lista(lista, aux);
    }

    fclose(fp);
}


  