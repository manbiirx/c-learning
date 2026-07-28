#include <stdio.h>
int main()
{
    int a,b,x=0,y=0,z=0;
    printf("Combinations that will be used:\n (a++) + (++a)\n (++a) + (--a) + (++b) + (a++)\n (++a) + (++a) + (a--)\n");
    printf("Enter the number (a):");
    scanf("%d", &a);
    printf("Enter the number (b):");
    scanf("%d", &b);
    x=((a++) + (++a));
    y=((++a) + (--a) + (++b));
    z=((++a) + (++a) + (a--));
    printf("Value of first combination :%d\n",x);
    printf("Value of second combination :%d\n",y);
    printf("Value of third combination :%d\n",z);
    return 0;

}