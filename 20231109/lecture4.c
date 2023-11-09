#include <stdio.h>
/*2147483648 0 두개의 수
32비트 정수형 최댓겂 2147483647*/
int main()
{
    int a = 2147483648;
    // printf("%d %d\n",a,-a);
    if (a == -a)
    {
        printf("hello world\n");
    }
    else
    {
        printf("goodbye world");
    }
}