#include <stdio.h>

int main() {
    int x = 1;
    int *px;

    px = x;
    *px = 2;
    
    printf("O endereço de x é: %p\n", &x);

    return 0;
}