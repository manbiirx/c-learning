#include <stdio.h>
int main()
{
    char ch;
    while(ch != 'y')
    {
        printf("Welcome to C Programming\n");
        printf("Press y to stop: ");
        scanf("%c", &ch);
    }
    return 0;
}