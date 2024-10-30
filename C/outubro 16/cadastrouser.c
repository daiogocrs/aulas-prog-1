#include <stdio.h>
#include <string.h>

#define STR_TAM 30

typedef char string[STR_TAM];

struct dados_pessoa{
    string nome;
    string email;
    int idade;
};

int main()
{
    struct dados_pessoa cadastro_pessoas[10];
    int opcao, qtd_pessoas = 0, i;

    do {
        printf("1.Inserir pessoa\n");
        printf("2. Listar pessoas cadastradas\n");
        printf("3. Localizar pessoa por nome\n");
        printf("0. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        getchar();

        switch (opcao) {
            case 0:
                printf("Saindo...\n");
                break;
            case 1:
                printf("Digite o nome: ");
                fgets(cadastro_pessoas[qtd_pessoas].nome, STR_TAM, stdin);
                printf("Digite o email: ");
                fgets(cadastro_pessoas[qtd_pessoas].email, STR_TAM, stdin);
                printf("Digite a idade: ");
                scanf("%d", &cadastro_pessoas[qtd_pessoas].idade);
                qtd_pessoas++;
                break;
            case 2:
                for (i = 0; i < qtd_pessoas; i++) {
                    printf("Nome: %s\n", cadastro_pessoas[i].nome);
                    printf("Email: %s\n", cadastro_pessoas[i].email);
                    printf("Idade: %d\n\n", cadastro_pessoas[i].idade);
                }
                break;
            case 3:
                
                break;
            default:
                printf("Opção invalida!\n");
                break;
        }
    } while (opcao != 0);

    return 0;
    
}