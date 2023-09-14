#include <stdio.h>

int main(void)
{

    int score;

    printf("점수를 입력해주세요");
    scanf("%d", &score);

    if (score < 0 || score > 100)
    {
        printf("wrong input");
        return 0;
    }

    score = score / 10;

    switch (score)
    {
    case 10:
    case 9:
        printf("A");
        break;
    case 8:
        printf("B");
        break;
    case 7:
        printf("C");
        break;
    case 6:
        printf("D");
        break;
    case 5:
    case 4:
    case 3:
    case 2:
    case 1:
    case 0:
        printf("F");
        break;
    }
    return 0;
}