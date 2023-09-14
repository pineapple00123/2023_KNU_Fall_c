#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char ch;
    char str[10];

    printf("1.문자 입력");
    scanf("%c", &ch);

    printf("2.문자열 입력");
    scanf("%s", str);

    printf("입력한 문자 출력: %c\n", ch);
    printf("입력한 문자열 출력: %s\n", str);

    return 0;
}