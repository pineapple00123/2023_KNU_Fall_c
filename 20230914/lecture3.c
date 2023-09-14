#include <stdio.h>

int main(void)
{

    int val_1, val_2, a, b;

    printf("a=10,b=15일때 \n");

    a = 10;
    b = 15;

    val_1 = ++a + b--; // 전위 연산 후위 연산 차이점

    printf("1. val_1 = ++a + b-- =%d, a=%d, b=%d\n", val_1, a, b);

    return 0;
}