#include <stdio.h>
int main()
{
    int a[10][10],row,col,i,j;
    int max, min;
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
    max = a[0][0];
    min = a[0][0];
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(a[i][j]>max)
                max = a[i][j];
            if(a[i][j]<min)
                min = a[i][j];
        }
    }
    printf("maximum element: %d",max);
    printf("\n");
    printf("minimum element: %d",min);
    return 0;
}