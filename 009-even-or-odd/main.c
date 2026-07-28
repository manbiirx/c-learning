#include <stdio.h>
int main()
{
    int a;
    printf("This program will determine if your number is odd or even.\n");
    printf("Enter your number: ");
    scanf("%d",&a);
    if (a%2==0)
        {
            printf("The number is positive");
        }
    else
        {
            printf("The number is odd");

         }

    return 0;
        
}