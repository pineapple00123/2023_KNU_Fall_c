#include <stdio.h>

int sum(int num1, int num2)
{
    return num1 + num2;
}
int sub(int num1, int num2)
{
    return num1 - num2;
}
int mul(int num1, int num2)
{
    return num1 * num2;
}
int div(int num1, int num2)
{
    return num1 / num2;
}

void calculator(int selector, int num1, int num2)
{
    switch (selector)
    {
    case 1:
        printf("%d", sum(num1, num2));
        break;
    case 2:
        printf("%d", sub(num1, num2));
        break;
    case 3:
        printf("%d", mul(num1, num2));
        break;
    case 4:
        printf("%d", div(num1, num2));
        break;
    }
}

int main(void)
{
    int selector;
    int num1;
    int num2;

    printf("1.더하기 2.빼기 3.곱하기 4.나누기 원하는 연산을 입력하세요");
    scanf("%d", &selector);

    printf("연산하고 싶은 수를 입력하세요");
    scanf("%d", &num1);
    printf("연산하고 싶은 수를 입력하세요");
    scanf("%d", &num2);

    calculator(selector, num1, num2);
}