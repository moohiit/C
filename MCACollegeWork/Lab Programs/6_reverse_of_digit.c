
//Write a program to print the reverse of any number.
#include<stdio.h>
int main()
{
    int n,no,rev=0,rem;
    printf("Enter any number : ");
    scanf("%d",&n);
    no=n;
    while (n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n/=10;
    }
    printf("Reverse of %d is %d",no,rev);
    
    return 0;
}