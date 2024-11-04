#include <stdio.h>
#include <string.h>

typedef char string[100];

void ler_string(string str);

int main()
{
    string nome;

    strcpy(nome, "Diogo");

    printf("Nome antes: %s\n", nome);

    ler_string(nome);

    printf("Nome depois: %s\n", nome);

    return 0;
}

void ler_string(string str)
{
    strcpy(str, "qualquercoisa");
}