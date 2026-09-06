#include <stdio.h>
int main()
{
    int a[10][10],i,j,row,col;
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
    printf("the elements are:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}