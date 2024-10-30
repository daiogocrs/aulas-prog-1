#include <stdio.h>

#define STR_TAM 30

typedef char string[STR_TAM];

struct dados_pessoa{
    string nome;
    string email;
    int idade;
};

int main()
{
    struct dados_pessoa pessoa;

    printf("Digite seu nome: ");
    fgets(pessoa.nome, STR_TAM, stdin);
    printf("Digite seu email: ");
    fgets(pessoa.email, STR_TAM, stdin);
    printf("Digite sua idade: ");
    scanf("%d", &pessoa.idade);

    printf("Dados do usuario\n");
    printf("Nome: %s\n", pessoa.nome);
    printf("Email: %s\n", pessoa.email);
    printf("Idade: %d anos\n", pessoa.idade);

    return 0;
}