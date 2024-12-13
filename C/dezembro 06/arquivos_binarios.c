#include <stdio.h>

int main()
{
    //int a = 100;
    //FILE *fp = fopen("dados.bin", "wb");
    //fwrite(&a, sizeof(int), 1, fp);

    int a;

    FILE *fp = fopen("dados.bin", "rb");

    fread(&a, sizeof(int), 1, fp);

    printf("Dado: %i\n", a);

    fclose(fp);

    return 0;
}