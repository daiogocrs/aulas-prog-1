#include <stdio.h>

int main ()
{
    int v[10], i;
    float f[8];

    v[0] = 100;
    v[1] = 200;
    v[2] = 300;
    v[3] = 400;
    v[4] = 500;
    v[5] = 600;
    v[6] = 700;
    v[7] = 800;
    v[8] = 900;
    v[9] = 1000;

    for(i = 0; i < 10; i++){
        printf("%i\n", v[i]);
    }

    /*
    printf("Tamanho de um int.....: %i\n", sizeof(int));
    printf("Tamanho de um char....: %i\n", sizeof(char));
    printf("Tamanho de um float...: %i\n", sizeof(float));
    printf("Tamanho de um long....: %i\n", sizeof(long));
    printf("Tamanho de um double..: %i\n", sizeof(double));
    printf("Tamanho de um void....: %i\n", sizeof(void));
    printf("Tamanho de um v.......: %i\n", sizeof(v));
    */

    return 0;
}