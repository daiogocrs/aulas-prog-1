#include <stdio.h>

int main()
{
    FILE *fp = NULL;
    int dado, i = 0, j =0;

    fp = fopen("numeros.num", "r");

    while (!feof(fp)) {
        fscanf(fp, "%*i\n");
        i++;
    }

    printf("Qtd. dados no arquivo: %i\n", i);

    int *dados = (int*)malloc(sizeof(int) * i);

    rewind(fp);

    while (!feof(fp)) {
        //fscanf(fp, "%i\n", &dados[j]);
        fscanf(fp, "%i\n", (dados+j));
        j++;
    }

    for (j = 0; j < i; j++) {
        printf("%i\n", *(dados+j));
    }

    fclose(fp);

    return 0;
}