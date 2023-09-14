#include <stdio.h>

int main(void)
{
    int sum = 0;
    int i;
    for (i = 0; i < 10; i++)
    {
        sum += (i + 1);
        printf("i=%d sum=%d\n", i, sum);
    }
    printf("sum=%d", sum);
    return 0;
}