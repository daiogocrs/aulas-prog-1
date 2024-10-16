#include <stdio.h>

#define T 20

int main()
{
    int i;
    char vetor_a[T] = {'M', 'F', 'P', 'Z', 'H', 'K', 'T', 'N', 'Q', 'W', 'A', 'G', 'L', 'X', 'J', 'C', 'D', 'V', 'O', 'R'};
    char vetor_b[T];

    for(i = 0; i < T; i++){
        if(vetor_a[i] == 'A' || vetor_a[i] == 'E' || vetor_a[i] == 'I' || vetor_a[i] == 'O' || vetor_a[i] == 'U'){
            vetor_b[i] = 'V';
        } else {
            vetor_b[i] = 'C';
        }
    }

    for(i = 0; i < T; i++){
        printf("A letra %c é: %c\n", vetor_a[i], vetor_b[i]);
    }    

    return 0;
}