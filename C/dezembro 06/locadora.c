#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

#define STR_T   80
#define T       30


typedef char string[STR_T];

struct carro {
  string marca;
  string modelo;
  int ano_fabricacao;
  float vlr_aluguel;
  bool status;   // false - se alugado; true - se dispon�vel
  struct carro *prox;
};

struct cliente {
    int id;
    string nome;
    string telefone;
    string endereco;
    string cpf;
    struct cliente *prox;
};

struct aluguel {
  int id_cliente;
  string carro_modelo;
  int qtd_dias;
  float vlr_aluguel;
  struct aluguel *prox;
};



// Cabe�alho das fun��es auxiliares
char menu();
struct carro *criar_novo_carro();
void inserir_carro_lista(struct carro **lista_carros, struct carro *novo);

struct cliente *criar_novo_cliente(struct cliente *lista);
void inserir_cliente_lista(struct cliente **lista_clientes, struct cliente *novo);

void listar_carros_cadastrados(struct carro *lista);
void listar_clientes_cadastrados(struct cliente *lista);

struct carro* localizar_carro_por_modelo(struct carro *lista, string modelo);
struct cliente* localizar_cliente_por_nome(struct cliente *lista, string nome);

void mostrar_dados_carro(struct carro *carro);
void mostrar_dados_cliente(struct cliente *cliente);

void retirar_enter_string(string str);
void formatar_maiuscula(string str);

struct aluguel *alugar_veiculo(struct cliente *cliente, struct carro *carro, int qtd_dias);
void inserir_aluguel_lista(struct aluguel **lista_aluguel, struct aluguel *novo);
void mostrar_alugueis(struct aluguel *lista);
int quantidade_de_clientes(struct cliente *lista);

// Gera��o de arquivos
void exportar_dados_clientes_arquivo_texto(string nome_arq, struct cliente *lista);
void exportar_dados_carros_arquivo_texto(string nome_arq, struct carro *lista);
void exportar_dados_alugeis_arquivo_texto(string nome_arq, struct aluguel *lista);

// Importar dados
void importar_clientes_arquivo_texto(string nome_arq, struct cliente **lista);

int main()
{
    char opcao;
    string modelo, nome, nome_arq;

    int qtd_dias;

    struct carro *lista_carros = NULL, *carro;
    struct cliente *lista_clientes = NULL, *cliente;
    struct aluguel *lista_alugueis = NULL;


    do {
        opcao = menu();

        switch (opcao) {
            case 'a':
            case 'A': inserir_carro_lista(&lista_carros, criar_novo_carro());
                      break;

            case 'b':
            case 'B': listar_carros_cadastrados(lista_carros);
                      break;

            case 'c':
            case 'C': inserir_cliente_lista(&lista_clientes, criar_novo_cliente(lista_clientes));
                      break;

            case 'd':
            case 'D': listar_clientes_cadastrados(lista_clientes);
                      break;

            case 'e':
            case 'E': printf("Qual o modelo do carro que vc procura? ");
                      fgets(modelo, STR_T, stdin);
                      retirar_enter_string(modelo);
                      formatar_maiuscula(modelo);

                      carro = localizar_carro_por_modelo(lista_carros, modelo);
                      if (carro == NULL) {
                        printf("O veiculo %s nao foi encontrado!\n", modelo);
                      }
                      else {
                        mostrar_dados_carro(carro);
                      }

                      break;

            case 'f':
            case 'F': printf("Qual o nome do cliente? ");
                      fgets(nome, STR_T, stdin);
                      retirar_enter_string(nome);
                      formatar_maiuscula(nome);

                      cliente = localizar_cliente_por_nome(lista_clientes, nome);

                      if (!cliente) {
                        printf("O cliente %s nao foi encontrado\n", nome);
                      }
                      else {
                        mostrar_dados_cliente(cliente);
                      }

                      break;

            case 'g':
            case 'G': printf("Qual o modelo de veiculo que quer locar? ");
                      fgets(modelo, STR_T, stdin);
                      retirar_enter_string(modelo);
                      formatar_maiuscula(modelo);

                      carro = localizar_carro_por_modelo(lista_carros, modelo);
                      if (!carro) {
                        printf("O veiculo %s nao existe!\n", modelo);
                      }
                      else {
                        if (carro->status == true) {
                            printf("Qual o nome do cliente? ");
                            fgets(nome, STR_T, stdin);
                            retirar_enter_string(nome);
                            formatar_maiuscula(nome);

                            cliente = localizar_cliente_por_nome(lista_clientes, nome);

                            if (!cliente) {
                                printf("O cliente %s n�o existe!\n", nome);
                            }
                            else {
                                printf("Por quantos dias vai alugar o carro %s?\n", modelo);
                                scanf("%i", &qtd_dias);
                                inserir_aluguel_lista(&lista_alugueis, alugar_veiculo(cliente, carro, qtd_dias));
                           }

                        }
                        else {
                            printf("O veiculo %s nao esta disponivel para aluguel!\n", modelo);
                        }
                      }

                      break;

            case 'h':
            case 'H': mostrar_alugueis(lista_alugueis);
                      break;

            case 'i': printf("Qual o nome do arquivo de saida? ");
                      fgets(nome_arq, STR_T, stdin);
                      retirar_enter_string(nome_arq);
                      exportar_dados_clientes_arquivo_texto(nome_arq, lista_clientes);
                      break;

            case 'j': printf("Qual o nome do arquivo de entrada? ");
                      fgets(nome_arq, STR_T, stdin);
                      retirar_enter_string(nome_arq);
                      importar_clientes_arquivo_texto(nome_arq, &lista_clientes);
                      break;

            case 'x':
            case 'X': printf("Tchau!");
                      break;

            default: printf("Opcao invalida!!!\n\n");

        }

    } while (opcao != 'x' && opcao != 'X');

    return 0;
}


// Implementa��o das fun��es auxiliares
char menu()
{
    char opc;

    printf("[a] - Incluir novo veiculo\n");
    printf("[b] - Mostrar veiculos cadastrados\n");
    printf("[c] - Incluir novo cliente\n");
    printf("[d] - Mostrar clientes cadastrados\n");
    printf("[e] - Localizar carro por modelo\n");
    printf("[f] - Localizar cliente por nome\n");
    printf("[g] - Alugar veiculo\n");
    printf("[h] - Mostrar alugueis\n");
    printf("[i] - Exportar dados dos clientes para arquivo texto\n");
    printf("[j] - Importar dados dos clientes para arquivo texto\n");
    printf("[x] - Sair do programa\n");
    printf(":: ");
    fflush(stdin);
    scanf("%c", &opc);
    getchar();

    return opc;
}

struct carro *criar_novo_carro()
{
    struct carro *novo;

    novo = (struct carro*)malloc(sizeof(struct carro));

    fflush(stdin);

    printf("Marca do carro.............: ");
    fgets(novo->marca, STR_T, stdin);
    retirar_enter_string(novo->marca);
    formatar_maiuscula(novo->marca);


    printf("Modelo do carro............: ");
    fgets(novo->modelo, STR_T, stdin);
    retirar_enter_string(novo->modelo);
    formatar_maiuscula(novo->modelo);

    printf("Ano de fabricacao..........: ");
    scanf("%i", &novo->ano_fabricacao);

    printf("Valor da diaria............: ");
    scanf("%f", &novo->vlr_aluguel);

    novo->prox = NULL;

    novo->status = true;

    return novo;
}

void inserir_carro_lista(struct carro **lista_carros, struct carro *novo)
{
    // Inserir carro pelo in�cio da lista
    if (*lista_carros != NULL) {
        novo->prox = *lista_carros;
    }
    *lista_carros = novo;

}

struct cliente *criar_novo_cliente(struct cliente *lista)
{
    struct cliente *novo;

    novo = (struct cliente*)malloc(sizeof(struct cliente));

    fflush(stdin);

    printf("Nome do cliente............: ");
    fgets(novo->nome, STR_T, stdin);
    retirar_enter_string(novo->nome);
    formatar_maiuscula(novo->nome);


    printf("Telefone...................: ");
    fgets(novo->telefone, STR_T, stdin);
    retirar_enter_string(novo->telefone);
    formatar_maiuscula(novo->telefone);


    printf("Endereco...................: ");
    fgets(novo->endereco, STR_T, stdin);
    retirar_enter_string(novo->endereco);
    formatar_maiuscula(novo->endereco);

    printf("CPF........................: ");
    fgets(novo->cpf, STR_T, stdin);
    retirar_enter_string(novo->cpf);
    formatar_maiuscula(novo->cpf);

    novo->prox = NULL;
    novo->id = quantidade_de_clientes(lista) + 1;

    return novo;
}

void inserir_cliente_lista(struct cliente **lista_clientes, struct cliente *novo)
{
    if (*lista_clientes != NULL) {
        novo->prox = *lista_clientes;
    }
    *lista_clientes = novo;
}

void listar_carros_cadastrados(struct carro *lista)
{
    while (lista != NULL) {
        mostrar_dados_carro(lista);
        lista = lista->prox;
    }
}

void listar_clientes_cadastrados(struct cliente *lista)
{
    while (lista) {
        mostrar_dados_cliente(lista);
        lista = lista->prox;
    }
}

struct carro* localizar_carro_por_modelo(struct carro *lista, string modelo)
{
    while (lista) {
        if (strcmp(lista->modelo, modelo) == 0) {
            return lista;
        }
        lista = lista->prox;
    }

    return NULL;
}

void mostrar_dados_carro(struct carro *carro)
{
    printf("Marca do carro.....: %s\n", carro->marca);
    printf("Modelo do carro....: %s\n", carro->modelo);
    printf("Ano de fabricacao..: %i\n", carro->ano_fabricacao);
    printf("Valor da diaria....: %.2f\n", carro->vlr_aluguel);
    printf("Status.............: %i\n\n", carro->status);
}

void retirar_enter_string(string str)
{
    int tamanho;

    tamanho = strlen(str);

    str[tamanho - 1] = '\0';
}

void formatar_maiuscula(string str)
{
    int i;

    for (i = 0; i < strlen(str); i++) {
        str[i] = toupper(str[i]);
    }
}

struct cliente* localizar_cliente_por_nome(struct cliente *lista, string nome)
{
    while (lista) {
        if (strcmp(lista->nome, nome) == 0) {
            return lista;
        }
        lista = lista->prox;
    }

    return NULL;
}


void mostrar_dados_cliente(struct cliente *cliente)
{
    printf("ID do cliente....: %i\n", cliente->id);
    printf("Nome do cliente..: %s\n", cliente->nome);
    printf("Telefone.........: %s\n", cliente->telefone);
    printf("Endereco.........: %s\n", cliente->endereco);
    printf("CPF..............: %s\n\n", cliente->cpf);
}

struct aluguel *alugar_veiculo(struct cliente *cliente, struct carro *carro, int qtd_dias)
{
    struct aluguel *novo;

    novo = (struct aluguel*)malloc(sizeof(struct aluguel));

    strcpy(novo->carro_modelo, carro->modelo);
    novo->id_cliente    = cliente->id;
    novo->qtd_dias      = qtd_dias;
    novo->vlr_aluguel   = qtd_dias * carro->vlr_aluguel;

    carro->status       = false;  // Indica que o carro est� alugado

    return novo;
}

void inserir_aluguel_lista(struct aluguel **lista_aluguel, struct aluguel *novo)
{
    if (*lista_aluguel != NULL) {
        novo->prox = *lista_aluguel;
    }
    *lista_aluguel = novo;
}

void mostrar_alugueis(struct aluguel *lista)
{
    while (lista) {
        printf("Modelo do carro............: %s\n", lista->carro_modelo);
        printf("Identificacao do cliente...: %d\n", lista->id_cliente);
        printf("Quantidade de dias alugado.: %d\n", lista->qtd_dias);
        printf("Valor total do aluguel.....: %2.f\n", lista->vlr_aluguel);
        lista = lista->prox;
    }
}

int quantidade_de_clientes(struct cliente *lista)
{
    int quantidade = 0;

    while (lista) {
        quantidade++;
        lista = lista->prox;
    }

    return quantidade;
}

// Gera��o de arquivos
void exportar_dados_clientes_arquivo_texto(string nome_arq, struct cliente *lista)
{
    FILE *fp = fopen(nome_arq, "w");

    while (lista) {
        fprintf(fp, "%i\n", lista->id);
        fprintf(fp, "%s\n", lista->nome);
        fprintf(fp, "%s\n", lista->telefone);
        fprintf(fp, "%s\n", lista->endereco);
        fprintf(fp, "%s\n", lista->cpf);

        lista = lista->prox;
    }

    fclose(fp);
}

void exportar_dados_carros_arquivo_texto(string nome_arq, struct carro *lista)
{

}

void exportar_dados_alugeis_arquivo_texto(string nome_arq, struct aluguel *lista)
{

}

// Importar dados
void importar_clientes_arquivo_texto(string nome_arq, struct cliente **lista)
{
    FILE *fp = fopen(nome_arq, "r");
    struct cliente *novo_cliente;

    while (!feof(fp)) {
        // Aloca o registro na memoria heap
        novo_cliente = (struct cliente*)malloc(sizeof(struct cliente));

        fscanf(fp, "%i\n", &novo_cliente->id);

        fgets(novo_cliente->nome, STR_T, fp);
        retirar_enter_string(novo_cliente->nome);

        fgets(novo_cliente->telefone, STR_T, fp);
        retirar_enter_string(novo_cliente->telefone);

        fgets(novo_cliente->endereco, STR_T, fp);
        retirar_enter_string(novo_cliente->endereco);

        fgets(novo_cliente->cpf, STR_T, fp);
        retirar_enter_string(novo_cliente->cpf);

        novo_cliente->prox = NULL;

        // Inserir novo cliente na lista encadeada
        inserir_cliente_lista(lista, novo_cliente);
    }

    fclose(fp);

}