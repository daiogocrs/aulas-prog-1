#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[10], i;

 /*   srand(time(NULL));
    
    for(i = 0; i < 10; i++){
        v[i] = rand() % 100;
    }

    FILE *fp = fopen("dados_vetor.bin", "wb");

    fwrite(v, sizeof(int), 10, fp); */

    FILE *fp = fopen("dados_vetor.bin", "rb");

    fread(v, sizeof(int), 10, fp);

    for (i = 0; i < 10; i++){
        printf("Dado: %i\n", v[i]);
    }

    fclose(fp);

    return 0;
}