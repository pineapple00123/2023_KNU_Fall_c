#include <stdio.h>

int main(void)
{

    int year;

    printf("연도를 입력하세요\n");
    scanf("%d", &year);

    int yy = (year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0);

    if (yy)
    {
        printf("윤년");
    }
    else
    {
        printf("윤년아님");
    }

    /*if ((year%4==0)&&(year%100!=0)||(year%400==0))//400의 배수 이면 윤년, 4의 배수 이면서 100의 배수가 아니면 윤년
    {
        printf("윤년임");
    }else{
    printf("윤년아님");
    }*/

    return 0;
}
