
#include<stdio.h>
int main()
{
    int n,sum=0,rem,no;
    printf("Enter any number :");
    scanf("%d",&n);
    no=n;
    while (n>0) 
    {
        rem=n%10;
        sum=sum*10+rem;
        n/=10;

    }
    if (sum==no)
    {
        printf("%d is Palindrome Number.",no);
    }else{
        printf("%d is not Palindrome Number.",no);
    }
    return 0;
}