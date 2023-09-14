#include <stdio.h>

int main(void)
{

    int num;

    printf("정수를 입력해주시요");

    scanf("%d", &num);

    if (num > 0)
    {
        printf("%d는양수", num);
    }
    else if (num < 0)
    {
        printf("%d는음수", num);
    }
    else
    {
        printf("0입니다");
    }

    return 0;
}