#include <stdio.h>

int main(void)
{
    FILE *fp = NULL;

    fopen_s(&fp, "test.txt", "wt");

    fprintf(fp, "%d %d %d", 100, 200, 300);
    fprintf(fp, "%d %d %d", 400, 500, 600);

    fclose(fp);
    return 0;
}