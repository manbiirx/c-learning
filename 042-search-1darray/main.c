#include <stdio.h>

int main() {

    int a[5], n, i, position = 0,found=0;
    printf("Enter Elements: ");

    for (i=0; i<5; i++)
    {
        scanf("%d", &a[i]);
    }
    
    printf("The array is:");
    for( i = 0; i<5; i++)
    {
        printf("%d ", a[i]);
    }

    printf("Enter no. to be searched: ");
    scanf("%d", &n);
    for(i=0; i<5 ; i++)
    {
        if(a[i] == n)
        {
            position = i;
            found=1;
        }
    }
        if(found==1)
        {
            printf("no. %d found at position=%d",a[position],position);
        }
        else 
        {
            printf("No. not found ");  
        }

    
    return 0;


}