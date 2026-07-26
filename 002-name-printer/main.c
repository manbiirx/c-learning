#include <stdio.h>
int main(void)
{
    char name[20];

    printf("This program will display the name of the user after the user inputs their name.\n");

    printf("Enter your name: ");
    scanf("%19s", name);

    printf("Hello, %s\n", name);
    return 0;
}