//escopo é o local onde uma variável pode ser acessada ou onde ela se localiza em sí.
//escopo local é quando está dentro de uma variável.
//escopo global é quando está fora de uma variável.
#include <stdio.h>

void fa();
void fb();

int main(void)
{
    fa();

    return 0;
}

void fa()
{
    fb(); 
}

void fb()
{
    
}

/*int soma(int* px, int* py)              REFERÊNCIA
{
    int resposta;
    
    resposta = *px + *py;

    return resposta;
} */

/*int soma(int x, int y)                  VALOR
{
    int resposta;

    resposta = x + y;

    return resposta;
}*/