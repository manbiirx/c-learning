#include <stdio.h>
int main()
{
    float a,b,c,d,e,P=0;
    printf("This program will calculate your percentage.\n");
    printf("Enter your marks: ");
    scanf("%f %f %f %f %f", &a, &b, &c, &d, &e);
    P=(a+b+c+d+e)/5;
    printf("Your percentage is: %f",P);
    printf("\n");
    if (P >= 90)
        printf("Grade A\n");
    else if (P >= 80)
        printf("Grade B\n");
    else if (P >= 70)
        printf("Grade C\n");
    else if (P >= 60)
        printf("Grade D\n");
    else if (P >= 50)
        printf("Grade E\n");
    else
        printf("Grade F\n");
    return 0;
}