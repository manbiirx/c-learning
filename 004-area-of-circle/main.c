#include <stdio.h>
int main()
{
    int r, A=0;
    double pi=3.14;
    printf("This program will find area of the circle.\n");
    printf("Enter radius r: \n");
    scanf("%d", &r);
    A=pi*r*r;
    printf("Area =%d", A);
    return 0;
}