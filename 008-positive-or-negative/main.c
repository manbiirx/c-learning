#include <stdio.h>
int main()
{
    int a;
    printf("This program will check if your number is positive or negative.\n");
    printf("Enter your number: ");
    scanf("%d",&a);
    if (a==0)
    {
        printf("The number is 0");
    }
    else if (a>0)
    { 
        printf("The number is positive");
    }
    else if (a<0)
    {
        printf("The number is negative");
    }

    return 0;
}