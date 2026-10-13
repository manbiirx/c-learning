#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int n, i;
    int *arr;
    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0)
    {
        printf("Please enter a positive number.\n");
        return 1;
    }
    arr = malloc((size_t)n * sizeof(int));
    if (arr==NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }
    printf("Enter %d integers:\n", n);
    for (i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Array elements: ");
    for (i=0;i<n;i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    free(arr);
    arr=NULL;
    return 0;
}
