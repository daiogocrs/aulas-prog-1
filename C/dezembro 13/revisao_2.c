#include <stdio.h>

void ler_vetor(float* v, int t);
void mostar_maior(float* v, int t, float valor);
void escrever_arquivo_texto(float* v, int t, char str[30]);

int main() 
{
    int tamanho = 10;
    float *vetor;

    vetor = (float*)malloc(sizeof(float) * tamanho);

    ler_vetor(vetor, tamanho);
    mostar_maior(vetor, tamanho, 9.5);
    escrever_arquivo_texto(vetor, tamanho, "saida.txt");
    
    return 0;
}

void ler_vetor(float* v, int t)
{
    int i;

    for (i = 0; i < t; i++) {
        scanf("%f", v+i);
    }
}

void mostar_maior(float* v, int t, float valor)
{
    int i;

    for (i = 0; i < t; i++) {
        if (v[i] > valor) {
            printf("Elemento %d: %.2f\n", i+1, v[i]);
        }
    }
}

void escrever_arquivo_texto(float* v, int t, char str[30])
{
    int i;

    FILE *fp = fopen(str, "w");

    for (int i = 0; i < t; i++) {
        fprintf(fp, "%.2f\n", v[i]);
    }

    fclose(fp);
}