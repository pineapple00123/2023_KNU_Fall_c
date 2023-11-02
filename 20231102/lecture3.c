#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int strike(int computer[], int user[])
{
    int strike = 0;

    for (int i = 0; i < 3; i++)
    {
        if (computer[i] == user[i])
        {
            strike++;
        }
    }
    return strike;
}
int ball(int computer[], int user[])
{
    int ball = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int e = 0; e < 3; e++)
        {
            if (computer[i] == user[i]) // 스트라이크 중복 검사 방지
            {
                continue;
            }

            if (computer[i] == user[e])
            {
                ball++;
            }
        }
    }
    return ball;
}

int main(void)
{
    int computer[3];
    int user[3];
    srand(time(NULL));

    printf("숫자 야구 게임에 오신 것을 환영합니다!\n");

    for (int i = 0; i < 3; i++)
    {
        computer[i] = rand() % 9 + 1; // 1~9까지
        for (int e = 0; e < i; e++)
        {
            if (computer[i] == computer[e]) // 중복되면 다시 할당
                i--;
        }
        printf("%d ", computer[i]);
    }
    printf("1~9사이 정수만 입력 가능\n");
    while (strike(computer, user) != 3) // 스트라이크가 3이면 반복 탈출
    {
        printf("세 자리 숫자를 입력해주세요 : ");

        scanf("%d %d %d", &user[0], &user[1], &user[2]);
        printf("%d 스트라이크, %d 볼\n", strike(computer, user), ball(computer, user));
    }
    printf("\n축하합니다! 정답을 맞추셨습니다!");
    return 0;
}