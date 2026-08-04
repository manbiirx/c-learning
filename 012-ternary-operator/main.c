#include <stdio.h>
int main()
{
    int a;
    printf("This program will determine if you are eligible for voting\n");
    printf("Enter your age: ");
    scanf("%d",&a);
    a>=18 ? printf("You are eligible for voting") : printf("You are ineligible for voting");
    return 0;
}