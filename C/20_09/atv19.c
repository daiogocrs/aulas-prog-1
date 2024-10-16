#include <stdio.h>

int main()
{
    int voto, candidato_1 = 0, candidato_2 = 0, candidato_3 = 0, candidato_4 = 0, nulo = 0, branco = 0, total;
    float x, branconulo;

    printf("Digite o seu voto: ");
    scanf("%i", &voto);

    do
    {
        switch (voto)
        {
        case 1: candidato_1++;
            break;
        case 2: candidato_2++;
            break;
        case 3: candidato_3++;
            break;
        case 4: candidato_4++;
            break;
        case 5: nulo++;
            break;
        case 6: branco++;
            break;
        default: nulo++;
        }

    printf("Digite o seu voto: ");
    scanf("%i", &voto);

    } while (voto > 0);

    total = branco + nulo + candidato_1 + candidato_2 + candidato_3 + candidato_4;
    branconulo = branco + nulo;
    x = branconulo / total;

    printf("Votos do candidato 1: %i\n", candidato_1);
    printf("Votos do candidato 2: %i\n", candidato_2);
    printf("Votos do candidato 3: %i\n", candidato_3);
    printf("Votos do candidato 4: %i\n", candidato_4);
    printf("Votos nulo: %i\n", nulo);
    printf("Votos em branco: %i\n", branco);
    printf("Percentual de brancos e nulos: %f\n", x);

    return 0;
}