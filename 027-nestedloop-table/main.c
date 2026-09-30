#include <stdio.h>
int main()
{
    int i,j,table;
    for(i=1;i<=20;i++)
    {
        for(j=1;j<=10;j++)
        {
            table=i*j;
            printf("%d ",table);
        }
        printf("\n");
    }
    return 0;
}