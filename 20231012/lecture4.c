#include <stdio.h>

int main(void)
{
    int score[5] = {1, 2, 3, 4, 5};
    int cnf;

    int *p_score = score;

    for (cnf = 0; cnf < 5; cnf++)
    {
        printf("%d\n", *p_score);
        p_score++;
    }

    return 0;
}