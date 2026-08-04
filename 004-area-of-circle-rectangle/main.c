#include <stdio.h>
int main()
{
    int r, a, b, A=0, S=0;
    double pi=3.14;
    printf("This program will find area of the circle and rectangle.\n");
    printf("Enter radius of cirle r: ");
    scanf("%d", &r);
    A=pi*r*r;
    printf("Area =%d", A);
    printf("\n");
    printf("Enter the length of rectangle: ");
    scanf("%d", &a);
    printf("Enter the breadth of rectangle: ");
    scanf("%d",&b);
    S=a*b;
    printf("Area =%d",S);
    return 0;
}