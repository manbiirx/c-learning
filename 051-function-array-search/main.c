#include <stdio.h>
#include "../headers.h"
int main()
{
    int arr[5], num, i;
    printf("Enter 5 numbers:\n");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter number to find: ");
    scanf("%d", &num);
    search(arr, 5, num);
    return 0;
}