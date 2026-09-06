#include <stdio.h>
int main()
{
    int a[10][10],i,j,row,col,sum=0;
    printf("enter no. of rows");
    scanf("%d",&row);
    printf("enter no. of columns");
    scanf("%d",&col);
    printf("enter elements:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            sum+=a[i][j];
        }
    }
    printf("sum of elements: %d",sum);
    return 0;
}