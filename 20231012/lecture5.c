#include <stdio.h>

void swap(int *num1, int *num2)
{
    int c = *num1;
    *num1 = *num2;
    *num2 = c;
}

int main(void)
{
    int num1 = 20;
    int num2 = 30;

    printf("num1 %d\n", num1);
    printf("num2 %d\n", num2);

    swap(&num1, &num2);

    printf("num1 %d\n", num1);
    printf("num2 %d\n", num2);

    return 0;
}