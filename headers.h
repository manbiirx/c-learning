#include <stdio.h>
void search(int arr[], int n, int num)
{
    int i;
    for(i = 0; i < n; i++)
    {
        if(arr[i] == num)
        {
            printf("Number found at position %d", i + 1);
            return;
        }
    }
    printf("Number not found");
}

int factorial(int n)
{
    int i, fact = 1;
    for(i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

void table(int n)
{
    int i;
    for(i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", n, i, n * i);
    }
}