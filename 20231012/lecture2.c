#include <stdio.h>

int main(void)
{
    int num = 100;
    int *ptr = &num;

    printf("%d\n", ptr);
    printf("%d\n", *ptr);

    int num1 = 100;
    int num2 = 100;
    int *pnum;

    pnum = &num1;
    (*pnum) += 30;

    pnum = &num2;
    (*pnum) -= 30;

    printf("num1 : %d\n", num1);
    printf("num2 : %d\n", num2);

    return 0;
}