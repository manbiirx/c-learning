#include <stdio.h>
int main()
{
    int num;
    for(num = 1; num <= 10;)
    {
        printf("%d ", num);
        printf("Square:%d",num*num);
        printf("\n");
        num++;
    }
    return 0;
}