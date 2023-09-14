#include <stdio.h>

int main(void)
{

    int i = 2;
    int j = 1;
    while (i <= 9)
    {
        if (i == 5){
            i++;
            continue;
        }
        while (j <= 9)
        {
            printf("%d*%d=%d\n", i, j, i * j);
            j++;
        }
        printf("\n");
        i++;
        j = 1;
    }
}