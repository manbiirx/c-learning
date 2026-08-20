#include <stdio.h>
int main()
{
    int i, j, fact;
    for(i = 1; i <= 10; i++)
    {
        fact = 1;
        for(j = 1; j <= i; j++)
        {
            fact = fact * j;
        }
        printf("%d! = %d\n", i, fact);
    }
    return 0;
}