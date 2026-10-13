#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int i;
    int oldSize=3;
    int newSize=5;
    int *arr;
    int *temp;
    arr=malloc((size_t)oldSize * sizeof(int));
    if (arr==NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }
    for (i=0;i<oldSize;i++)
    {
        arr[i]=(i + 1) * 10;
    }
    printf("Before resizing: ");
    for (i=0;i<oldSize;i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    temp = realloc(arr, (size_t)newSize * sizeof(int));
    if (temp==NULL)
    {
        printf("Resizing failed. Original memory is still available.\n");
        free(arr);
        return 1;
    }
    arr = temp;
    for (i=oldSize;i<newSize;i++)
    {
        arr[i]=(i + 1) * 10;
    }
    printf("After resizing: ");
    for (i=0;i<newSize;i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    free(arr);
    arr=NULL;
    return 0;
}
