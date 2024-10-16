// Comentário
/* Comentário */

/*
Operadores aritiméticos:
+ adição
- subtração
* multiplicação
/ divisão
% módulo

Operadores relacionais:

== igual
!= diferente
> maior que
< menor que
>= maior igual a
<= menor igual a

Operadores lógicos:

&& E (and)
|| OU (or)
! não (not)

Operadores compostos:

+= incremente e atribui
-= decrementa e atribui
*= multiplica e atribui
/= divide e atribui
++ incrementa uma unidade e atribui
-- decrementa uma unidade e atribui

*/

/*
Tipos de dados

int = inteiro
float = real
char = caracter
void = sem definição
long = duplica inteiro
double = duas vezes float

*/

#include <stdio.h> // biblioteca de entrada e saída 

int main()
{
    int numero;

    printf("Hello World!\n");
    scanf("%i", &numero);
    // printf("%i\n", numero);

    // se / senão
    /*
    if (numero > 30) {
        printf("Número maior que 30\n");
    } 
    else {
        printf("Número menor que 30\n");
    }
    */

   // Escolha caso
   switch(numero) {
    case 1: printf("Número 1\n");
        break;

    case 10: printf("Número 10\n");
        break;

    case 50: printf("Número 50\n");
        break;

    default: printf("Qualquer outro número\n");
   }

    return 0;
}