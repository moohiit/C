
//Write a program to check a number is palindrome or not.
#include<stdio.h>
int main()
{
    int n,rev=0,rem,no;
    printf("Enter any number to check, number is palindrome or not:");
    scanf("%d",&n);
    no=n;
    while (n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if (rev==no)
    {
        printf("\nThe number %d is Palindrome number",no);
    }
    else{
        printf("\nThe number %d is not Palindrome number",no);

    }
    return 0;
}