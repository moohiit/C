
//Write a program to print the sum digits of a given number.
#include<stdio.h>
int main()
{
    int n,rem,sum=0,no;
    printf("Enter any number to find the sum of its digit: ");
    scanf("%d",&n);
    no=n;
    while (n>0)
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    printf("Sum of digits of %d is %d",no,sum);
    
    return 0;
}