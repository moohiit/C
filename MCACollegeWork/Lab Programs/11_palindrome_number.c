
//Write a program to Check Palindrome number.
#include<stdio.h>
int main()
{
    int n,rev=0,rem,no;
    printf("Enter Any number to check: ");
    scanf("%d",&n);
    no=n;
    while (n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n/=10;
    }
    if (rev==no)
    {
        printf("%d is Palindrome Number.",no);
    }else{
        printf("%d is not Palindrome Number.",no);
        }
    return 0;
}