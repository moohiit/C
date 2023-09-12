
//Write a program to Check Amstrong number.
#include<stdio.h>
int main()
{
    int n,sum=0,rem,no;
    printf("Enter Any number to check: ");
    scanf("%d",&n);
    no=n;
    while (n>0)
    {
        rem=n%10;
        sum=sum+rem*rem*rem;
        n/=10;
    }
    if (sum==no)
    {
        printf("%d is Amstrong Number.",no);
    }else{
        printf("%d is not Amstrong Number.",no);
        }
    return 0;
}