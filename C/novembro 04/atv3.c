#include <stdio.h>
#include <stdbool.h>

bool compara_3_ponteiros(char *a, char *b, char *c);

int main()
{
    char a, b, c;
    bool resposta;

    resposta = compara_3_ponteiros(&a, &b, &c);

    if (resposta == true){
        printf("São iguais!!!\n");
    }
    else {
        printf("São diferentes!!!\n");
    }

    return 0;
}

bool compara_3_ponteiros(char *a, char *b, char *c)
{
    if (*a == *b && *b == *c)
        return true;
    else
        return false;
}