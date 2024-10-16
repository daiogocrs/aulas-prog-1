#include <stdio.h>
#include <string.h>

int main()
{
    char letras[30], copia[30], letra;
    int tamanho = 0;

    printf("Digite letras\n");

    /*do {
        scanf("%c", &letra);
        getchar();
        letras[tamanho++] = letra;
    } while (letra != '\n');
    
    letras[tamanho-3] = '\0';*/

    //scanf("%s", letras);

    //gets(letras);

    //fgets(letras, 30, stdin);

    fgets(letras, sizeof(letras), stdin);
    
    printf("%s\n", letras);

    //Tamanho
    printf("Tamanho da string: %d\n", strlen(letras));

    //Cópia
    strcpy(copia, letras);
    printf("String copiada: %s\n", copia);

    //Concatenação
    strcat(letras, "Corso");
    printf("String concatenada: %s\n", letras);

    return 0;
}