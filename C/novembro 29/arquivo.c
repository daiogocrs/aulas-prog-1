#include <stdio.h>

int main()
{
    FILE *fp = NULL;
    int i;

    fp = fopen("arquivo.txt", "a");

    fprintf(fp, "%s\n\n", "Vamo dale grêmioooooo");

    for (i = 1; i < 10; i++) {
        fprintf(fp, "%i\n", i);
    }

    fprintf(fp, "%s\n", "Vamo dale grêmio 2");

    fclose(fp);

    return 0;
}