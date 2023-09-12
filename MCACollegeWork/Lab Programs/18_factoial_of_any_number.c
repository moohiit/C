
//Write a program to find the factorial of any number.
#include<stdio.h>
int main()
{
    int i=1,n,fact=1;
    printf("Enter Any number to its Factorial: ");
    scanf("%d",&n);
    while (i<=n)
    {
        fact=fact*i;
        i++;
    }
    printf("Factorial of %d is %d",n,fact);
    
    return 0;
}