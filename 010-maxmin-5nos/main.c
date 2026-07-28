#include <stdio.h>

int main() {
    int a, b, c, d, e;

    printf("Enter 5 numbers: \n");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    
    if (a >= b && a >= c && a >= d && a >= e)
        printf("Maximum = %d\n", a);
    else if (b >= a && b >= c && b >= d && b >= e)
        printf("Maximum = %d\n", b);
    else if (c >= a && c >= b && c >= d && c >= e)
        printf("Maximum = %d\n", c);
    else if (d >= a && d >= b && d >= c && d >= e)
        printf("Maximum = %d\n", d);
    else
        printf("Maximum = %d\n", e);

    
    if (a <= b && a <= c && a <= d && a <= e)
        printf("Minimum = %d\n", a);
    else if (b <= a && b <= c && b <= d && b <= e)
        printf("Minimum = %d\n", b);
    else if (c <= a && c <= b && c <= d && c <= e)
        printf("Minimum = %d\n", c);
    else if (d <= a && d <= b && d <= c && d <= e)
        printf("Minimum = %d\n", d);
    else
        printf("Minimum = %d\n", e);

    return 0;
}