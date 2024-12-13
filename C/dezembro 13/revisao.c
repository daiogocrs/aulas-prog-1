#include <stdio.h>

int main() 
{
    int dado = 10;
    //FILE *fp = fopen("revisao.bin", "wb");

    //fwrite(&dado, sizeof(int), 1, fp);

    FILE *fp = fopen("revisao.bin", "rb");

    fread(&dado, sizeof(int), 1, fp);

    printf("Dado: %i\n", dado);

    fclose(fp);

    return 0;
}