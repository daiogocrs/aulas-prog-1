#include <stdio.h>

#define T 10

int main()
{
    float vetor_a[T] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    float vetor_b[T] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    float vetor_c[T];
    int i;

    for(i = 0; i < T; i++){
        vetor_c[i] = vetor_a[i] + vetor_b[i];
    }

    for(i = 0; i < T; i++){
        printf("%f\n", vetor_c[i]);
    }    

    return 0;
}