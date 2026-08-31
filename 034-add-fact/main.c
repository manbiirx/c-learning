#include <stdio.h>
int main()
{
    int i, f=1,sum=0;
    for(i=1;i<=5;i++)
    {
        f=f*i;
        sum=sum+f;
    }
    printf("sum=%d",sum);
    return 0;
}