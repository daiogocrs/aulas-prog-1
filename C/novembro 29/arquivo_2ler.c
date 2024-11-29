#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
    FILE *fp = NULL;
    int dado;

    fp = fopen("numeros.num", "r");

    while (!feof(fp)) {
        fscanf(fp, "%i\n", &dado);
        printf("Numero: %i\n", dado);
    }

    fclose(fp);

    return 0;
}