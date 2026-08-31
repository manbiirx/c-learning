#include <stdio.h>
int main()
{
    int i,j,f=1,sum=0;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            f=f*j;
        }
        sum=sum+(i/f);
    }
    printf("sum=%d",sum);
    return 0;
}