#include <stdio.h>
int main()
{
    int a[10][10], i, j, row, col, n;
    int positionRow = -1, positionCol = -1;
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
    printf("Enter no. to be searched: ");
    scanf("%d", &n);
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            if(a[i][j] == n)
            {
                positionRow = i;
                positionCol = j;
            }
        }
    }
    if(positionRow != -1)
    {
        printf("No. %d found at position [%d][%d]", n, positionRow, positionCol);
    }
    else
    {
        printf("No. not found");
    }
    return 0;
}