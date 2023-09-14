#include <stdio.h>

int main(void)
{

    for (int i = 2; i <= 9; i++)
    {
        for (int j = 1; j <= 9; j++)
        {
            if (i == 5)
                continue;

            printf("%d * %d = %d\n", i, j, i * j);
        }
        printf("\n");
    }
}