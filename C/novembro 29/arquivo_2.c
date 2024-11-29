#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    FILE *fp = NULL;
    int dado, intervalo, i;

    srand(time(NULL));

    fp = fopen("numeros.num", "w");

    intervalo = (rand() % 300) + 1;

    for (int i = 0; i < intervalo; i++) {
        dado = rand() % 1000;
        fprintf(fp, "%i\n", dado);
    }

    fclose(fp);

    return 0;
}
