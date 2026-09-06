#include <stdio.h>
int main()
{
    int a[10][10],row,col,i,j;
    int b[10][10];
    printf("enter no. of rows for both arrays");
    scanf("%d",&row);
    printf("enter no. of columns for both arrays");
    scanf("%d",&col);
    printf("enter elements for first array:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter elements for second array:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("\nPlus\tMinus\tMultiply\n");
    for(i=0; i<row; i++) 
    {
        for(j=0; j<col; j++)
        {
            printf("%d\t%d\t%d\n", a[i][j]+b[i][j], a[i][j]-b[i][j], a[i][j]*b[i][j]);
        }
    }
    return 0;
}  
