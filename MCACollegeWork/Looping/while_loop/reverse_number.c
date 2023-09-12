
//Write a program to reverse a number.
#include<stdio.h>
int main()
{
    int n,no,rev=0,rem;
    printf("Enter any number to reverse: ");
    scanf("%d",&n);
    no=n;
    while(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    printf("\nReverse of %d is %d",no,rev);
    return 0;
}