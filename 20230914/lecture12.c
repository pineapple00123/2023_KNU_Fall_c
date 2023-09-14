#include <stdio.h>

int main(void)
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("   ");
        }
        if (i % 2 == 0)
            printf("| O |");
        else
            printf("| X |");

        printf("\n-----------------\n");
    }
    return 0;
}