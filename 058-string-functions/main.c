#include <stdio.h>
#include <string.h>
int main(void)
{
    char first[100];
    char second[50];
    char copy[100];
    printf("Enter first word/string: ");
    if (scanf("%99s", first) != 1)
    {
        printf("Input error.\n");
        return 1;
    }
    printf("Enter second word/string: ");
    if (scanf("%49s", second) != 1)
    {
        printf("Input error.\n");
        return 1;
    }
    printf("Length of first string = %zu\n", strlen(first));
    strcpy(copy, first);
    printf("Copied string = %s\n", copy);
    strcat(first, second);
    printf("Concatenated string = %s\n", first);
    if (strcmp(copy, second) == 0)
    {
        printf("The original first string and second string are equal.\n");
    }
    else
    {
        printf("The original first string and second string are different.\n");
    }
    return 0;
}
