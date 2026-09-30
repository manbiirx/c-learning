#include <stdio.h>
#include "../headers.h"
int main()
{
    int n, result;
    printf("Enter a number: ");
    scanf("%d", &n);
    result = factorial(n);
    printf("Factorial = %d", result);
    return 0;
}