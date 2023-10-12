#include <stdio.h>

void sort(int arry[])
{
    int swap;

    for (int a = 0; a < 4; a++)
    {
        for (int b = a + 1; b < 5; b++)
        {
            if (arry[a] > arry[b])
            {
                swap = arry[a];
                arry[a] = arry[b];
                arry[b] = swap;
            }
        }
    }
}

int main(void)
{
    int arry[5] = {1, 9, 20, 10, 2};
    printf("현재 배열상태\n");
    for (int a = 0; a < 5; a++)
    {
        printf("%d ", arry[a]);
    }
    printf("\n");

    printf("정렬 후 배열상태\n");
    sort(arry);
    for (int a = 0; a < 5; a++)
    {
        printf("%d ", arry[a]);
    }
}