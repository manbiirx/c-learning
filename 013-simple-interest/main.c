#include <stdio.h>
int main()
{
    int p;
    float r,t,si=0;
    printf("This program will find Simple Interest\n");
    printf("Enter Principal Amount: ");
    scanf("%d",&p);
    printf("Enter the Rate of Interest: ");
    scanf("%f",&r);
    printf("Enter the Time in years: ");
    scanf("%f",&t);
    si=(p*r*t)/100;
    printf("The calculated Simple Intertest is: %f",si);
    return 0;
}