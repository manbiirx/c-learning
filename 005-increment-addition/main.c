#include <stdio.h>
int main()
{
    int a;
    printf("This program will perform increment operator (additive) on the number entered by the user\n");
    printf("Enter your number\n");
    scanf("%d",&a);
    a++;
    printf("addition by ++ = %d", a);
    return 0;
}