#include <stdio.h>
int main()
{
    int a;
    printf("This program will check the validity of your OTP.\n");
    printf("Enter your OTP: ");
    scanf("%d",&a);
    (a==1234) ? printf("The OTP is valid") : printf("The OTP is invalid");
    return 0;
}