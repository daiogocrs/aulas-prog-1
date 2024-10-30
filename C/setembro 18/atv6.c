#include <stdio.h>

int main()
{
	char pais, primeiro_pais, segundo_pais, terceiro_pais;
	int qnt_ouro, qnt_prata, qnt_bronze, primeiro, segundo, terceiro, i, pontos;
	
	primeiro = 0;
	segundo = 0;
	terceiro = 0;
	
	for (i = 1; i <= 3; i++) {
	    printf("Letra do pais: ");
	    scanf("%c", &pais);
	    printf("Quantidade de medalhas de ouro: ");
	    scanf("%i", &qnt_ouro);
	    printf("Quantidade de medalhas de prata: ");
	    scanf("%i", &qnt_prata);
	    printf("Quantidade de medalhas de bronze: ");
	    scanf("%i", &qnt_bronze);
	    
	    pontos = qnt_ouro * 3 + qnt_prata * 2 + qnt_bronze * 1;
	    
	    if (pontos > primeiro) {
	        terceiro = segundo;
	        terceiro_pais = segundo_pais;
	        segundo = primeiro;
	        segundo_pais = primeiro_pais;
	        primeiro = pontos;
	        primeiro_pais = pais;
	    } else if (pontos > segundo) {
	        terceiro = segundo;
	        terceiro_pais = segundo_pais;
	        segundo = pontos;
	        segundo_pais = pais;
	    } else if (pontos > terceiro) {
	        terceiro = pontos;
	        terceiro_pais = pais;
	    }
	}
	
	printf("** RESULTADO DA CLASSIFICAÇÃO **\n\n");
	printf("1° Lugar: %c com %i pontos.", primeiro_pais, primeiro);
	printf("2° Lugar: %c com %i pontos.", segundo_pais, segundo);
	printf("3° Lugar: %c com %i pontos.", terceiro_pais, terceiro);
	

	return 0;
}