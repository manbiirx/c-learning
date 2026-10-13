#include <stdio.h>
int main(void)
{
    int number = 10;
    int *ptr = &number;
    printf("Original value of number = %d\n", number);
    printf("Address of number = %p\n", (void *)&number);
    printf("Address stored in ptr = %p\n", (void *)ptr);
    printf("Value accessed through ptr = %d\n", *ptr);
    *ptr = 25;
    printf("Value after modifying through ptr = %d\n", number);
    return 0;
}
