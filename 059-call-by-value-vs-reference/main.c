#include <stdio.h>
void changeByValue(int x)
{
    x = 100;
    printf("Inside changeByValue: x = %d\n", x);
}
void changeUsingPointer(int *x)
{
    *x = 100;
    printf("Inside changeUsingPointer: *x = %d\n", *x);
}
int main(void)
{
    int number = 10;
    printf("Original number = %d\n", number);
    changeByValue(number);
    printf("After call by value = %d\n", number);
    changeUsingPointer(&number);
    printf("After passing address to pointer function = %d\n", number);
    return 0;
}
