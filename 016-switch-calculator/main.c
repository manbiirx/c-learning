#include <stdio.h>
int main()
{
    int choice;
    float a,b;
    float cal=0;
    printf("This is a menu driven program to calculate addition/ subtraction/ multiplication/ divison\n");
    printf("Enter the first number: ");
    scanf("%f",&a);
    printf("Enter the second number: ");
    scanf("%f",&b);
    printf("1 = addition\n2 = subtraction\n3 = multiplication\n4 = division\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        {
            cal=a+b;
            printf("%f",cal);
            break;
        }
        case 2:
        {
            cal=a-b;
            printf("%f",cal);
            break;
        }
        case 3:
        {
            cal=a*b;
            printf("%f",cal);
            break;
        }
        case 4:
        {
            cal=a/b;
            printf("%f", cal);
            break;
        }
        default:
        {
            printf("Invalid Option");
        }
    }
    return 0;
}