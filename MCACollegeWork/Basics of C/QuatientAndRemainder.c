#include<stdio.h>
int main()
{
    int n,d,q,r;
    printf("Enter a Number to divide:\n");
    scanf("%d",&n);
    printf("Enter the divisor: \n");
    scanf("%d",&d);
    q=n/d;
    printf("Quatient: %d\n",q);
    r=n%d;
    printf("Remainder: %d\n",r);
    printf("Equation: %d=%d*%d+%d",n,q,d,r);
return 0;
}