#include <stdio.h>
int main()
{
    int a[10][10], row, col, i, j;
    printf("Enter no. of rows: ");
    scanf("%d", &row);
    printf("Enter no. of columns: ");
    scanf("%d", &col);
    printf("Enter elements:\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Original array:\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("Transpose of array:\n");
    for(i=0; i<col; i++)
    {
        for(j=0; j<row; j++)
        {
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }
    return 0;
}