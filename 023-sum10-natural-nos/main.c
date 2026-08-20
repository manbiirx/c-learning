#include <stdio.h>
int main()
{
    int num, sum = 0;
    for(num = 1; num <= 10;)
    {
        sum=sum+num;
        num++;
    }
    printf("Sum = %d", sum);
    return 0;
}