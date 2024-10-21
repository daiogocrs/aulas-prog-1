#include <stdio.h>

#define OCUPACAO 5

int i, qtd_resp_otimo = 0, qtd_resp_regular = 0, qtd_resp_bom = 0, qtd_resp_ruim = 0, qtd_resp_pessimo = 0;
int idade, qtd_idade_ruim = 0, qtd_idade_pessimo = 0, qtd_idade_bom = 0, qtd_idade_regular = 0, qtd_idade_otimo = 0;
int total_opiniao = 0, total_idades_ruim = 0;
float percent_bom, percent_regular;

char opiniao;

int main()
{
    for (int i = 0; i < OCUPACAO; i++){

        printf("Digite sua idade: ");
        scanf("%i", &idade);
        getchar();
        printf("Digite sua opinião sobre o filme: ");
        scanf("%c", &opiniao);

        opiniao = toupper(opiniao);

        if (opiniao == 'A') {
            qtd_resp_otimo++;
            if (idade > qtd_idade_otimo){
                qtd_idade_otimo = idade;
            }
        } 
        else if (opiniao == 'B') {
            qtd_resp_bom++;
        } 
        else if (opiniao == 'C') {
            qtd_resp_regular++;
        } 
        else if (opiniao == 'D') {
            qtd_resp_ruim++;
            total_idades_ruim += idade;
            if (idade > qtd_idade_ruim){
                qtd_idade_ruim = idade;
            }
        } 
        else if (opiniao == 'E') {
            qtd_resp_pessimo++;
            if (idade > qtd_idade_pessimo) (
                qtd_idade_pessimo = idade;
            )
        } 
        else {
            printf("Opinião inválida!\n");
        }
    }

    printf("\nRespostas ótimas: %i\n", qtd_resp_otimo);

    percent_bom = qtd_resp_bom / (float)OCUPACAO;
    percent_regular = qtd_resp_regular / (float)OCUPACAO;
    printf("A diferença entre bom e regular é: %.2f\n", percent_bom - percent_regular);

    total_opiniao = qtd_resp_pessimo + qtd_idade_regular + qtd_idade_ruim + qtd_idade_bom + qtd_idade_otimo;

    //NÃO ESTÁ FINALIZADO!

    return 0;
}