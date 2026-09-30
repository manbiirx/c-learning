#include <stdio.h>
int main()
{
    int choice;
    float a,b;
    float cal=0;
    char again;
 start:
    printf("This is a menu driven program to calculate addition/ subtraction/ multiplication/ division\n");
    printf("Enter the first number: ");
    scanf("%f", &a);
    printf("Enter the second number: ");
    scanf("%f", &b);
    printf("1 = addition\n2 = subtraction\n3 = multiplication\n4 = division\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch(choice)
    {
        case 1:
        {
            cal=a+b;
            printf("Result = %f\n", cal);
            break;
        }
        case 2:
        {
            cal=a-b;
            printf("Result = %f\n", cal);
            break;
        }
        case 3:
        {
            cal=a*b;
            printf("Result = %f\n", cal);
            break;
        }
        case 4:
        {
            if (b!=0)
            {
                cal=a/b;
                printf("Result = %f\n", cal);
            }
            else
            {
                printf("Division by zero is not possible.\n");
            }
            break;
        }
        default:
        {
            printf("Invalid Option\n");
        }
    }
    printf("\nDo you want to calculate again? (y/n): ");
    scanf(" %c", &again);
    if (again=='y'|| again=='Y')
    {
        goto start;
    }
    printf("Program ended.\n");
    return 0;
}