#include <stdio.h>
#include <ctype.h> 

char vogal_consoante(char x);

int main()
{
    char letra, resposta;

    printf("Digite uma letra: ");
    scanf(" %c", &letra); 
    
    letra = toupper(letra);
    
    resposta = vogal_consoante(letra);
    
    printf("Sua letra é: %c\n", resposta);

    return 0;
}

char vogal_consoante(char x)
{   
    if (x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U') {
        return 'V';
    }
    return 'C';
}
