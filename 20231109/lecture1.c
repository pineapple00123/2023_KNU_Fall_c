#include <stdio.h>
double div(int a, int b)
{
    return (double)a / (double)b;
}
int main(void)
{
    int a;
    int b;

    scanf("%d %d", &a, &b);
    printf("%f\n", div(a, b));
}
