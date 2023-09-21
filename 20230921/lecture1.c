#include <stdio.h>

int checkPrimeNumber(int a)
{
    for(int div=a-1;div>1;div--){
        if(a%div==0){
        return 0;
        }
    }
    return 1;
}

int main(void)
{
    int number;
    printf("소수인지 확인할 수를 입력하시오");
    scanf("%d", &number);
    
    printf("%d\n",checkPrimeNumber(number));

    return 0;
}
