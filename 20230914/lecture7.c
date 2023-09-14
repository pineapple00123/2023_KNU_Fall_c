#include <stdio.h>

int main(void)
{

    int score;

    printf("점수를 입력해주세요");
    scanf("%d", &score);

    if (score > 100 || score < 0)
    {
        printf("worng input");
    }
    else if (score >= 90)
    {
        printf("A");
    }
    else if (score >= 80)
    {
        printf("B");
    }
    else if (score >= 70)
    {
        printf("C");
    }
    else if (score >= 60)
    {
        printf("D");
    }
    else if (score <= 59)
    {
        printf("F");
    }

    return 0;
}