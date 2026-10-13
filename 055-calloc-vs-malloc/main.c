#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int i;
    int *a;
    int *b;
    int n=5;
    a=malloc((size_t)n * sizeof(int));
    b=calloc((size_t)n, sizeof(int));
    if (a == NULL || b == NULL)
    {
        printf("Memory allocation failed.\n");
        free(a);
        free(b);
        return 1;
    }
    for (i=0;i<n;i++)
    {
        a[i] = (i + 1) * 10;
    }
    printf("Values stored in the malloc array: ");
    for (i=0;i<n;i++)
    {
        printf("%d ", a[i]);
    }
    printf("\nInitial values in the calloc array: ");
    for (i=0;i<n;i++)
    {
        printf("%d ", b[i]);
    }
    printf("\n");
    free(a);
    free(b);
    return 0;
}
