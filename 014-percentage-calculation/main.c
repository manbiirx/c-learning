#include <stdio.h>
int main()
{
    float a,b,c,d,e,P=0,total;
    printf("This program will calculate your percentage.\n");
    printf("Enter your marks: ");
    scanf("%f %f %f %f %f", &a, &b, &c, &d, &e);
    total=a+b+c+d+e;
    P=total/5;
    printf("Your total marks are: %f", total);
    printf("\n");
    printf("Your percentage is: %f",P);
    printf("\n");
    if (P>=90 && P<100)
        printf("Grade A");
    else if (P>=80 && P<90)
        printf("Grade B");
    else if (P>=70 && P<80)
        printf("Grade C");
    else if (P>=60 && P<70)
        printf("Grade D");
    else if (P>=50 && P<60)
        printf("Grade E");
    else
        printf("Grade F");
    return 0;
}