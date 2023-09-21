#include <stdio.h>

int factorial(int count)
{

    if (count <= 1)
    {
        return 1;
    }
    return count * factorial(count - 1);
}

int main(void)
{
    int count;
    printf("계산할 펙토리얼 값 입력");
    scanf("%d", &count);
    printf("%d! = %d", count, factorial(count));
}