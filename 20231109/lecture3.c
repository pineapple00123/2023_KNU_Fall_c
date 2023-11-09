#include <stdio.h>

void swap(int *pointer1, int *pointer2)
{
    int temp = *pointer1;
    *pointer1 = *pointer2;
    *pointer2 = temp;
}
int main(void)
{
    int a;
    int b;
    int *pointer1;
    int *pointer2;

    scanf("%d %d", &a, &b);
    pointer1 = &a;
    pointer2 = &b;
    swap(pointer1, pointer2);
    printf("%d %d\n", *pointer1, *pointer2);
}