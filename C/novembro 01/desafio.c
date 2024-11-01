#include <stdio.h>

int soma(int* px, int* py);
double divide(double r, double s);

int main()
{
    int r;
    int x = 10;
    int y = 20;

    r = soma(&x, &y);
    printf("Soma: %d\n", r);

    double s;
    double u = 10;
    double t = 2;

    s = divide(u, t);
    printf("Divisao: %f\n", s);

    return 0;
}

int soma(int* px, int* py)
{
    return *px + *py;
}

double divide(double r, double s)
{
    return (r / s);
}