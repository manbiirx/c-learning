#include <stdio.h>
#include <string.h>
int main(void)
{
    char text[100];
    size_t i;
    printf("Enter a line of text: ");
    if (fgets(text, sizeof(text), stdin)==NULL)
    {
        printf("Input could not be read.\n");
        return 1;
    }
    text[strcspn(text, "\n")] = '\0';
    printf("You entered: %s\n", text);
    printf("Characters in the string: ");
    for (i = 0; text[i] != '\0'; i++)
    {
        printf("%c ", text[i]);
    }
    printf("\nNull terminator is at index %zu.\n", i);
    return 0;
}
