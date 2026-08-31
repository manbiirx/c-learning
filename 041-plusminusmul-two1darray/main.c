#include <stdio.h>
int main() 
{
    int a[100], b[100], n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements for array A:\n");
    for(i=0; i<n; i++) 
    {
        scanf("%d", &a[i]);
    }
    printf("Enter %d elements for array B:\n", n);
    for(i=0; i<n; i++) 
    {
        scanf("%d", &b[i]);
    }
    printf("\nPlus\tMinus\tMultiply\n");
    for(i=0; i<n; i++) 
    {
        printf("%d\t%d\t%d\n", a[i]+b[i], a[i]-b[i], a[i]*b[i]);
    }
    return 0;
}