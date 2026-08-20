#include <stdio.h>
int main()
{
    int num, fact = 1;
    printf("Enter Number: ");
    scanf("%d", &num);
    for(;num>=1;num--)
    {
        fact=fact*num;
    }
    printf("Factorial = %d", fact);
    return 0;
}