#include <stdio.h>

int main()
{
    int a = 3;
    int *ptr1 = &a;

    char b = 'b';
    char *ptr2 = &b;

    printf("%p\n", ptr1);
    printf("%lu\n", sizeof(ptr1));

    printf("%p\n", ptr2);
    printf("%lu\n", sizeof(ptr2));

    return 0;
}