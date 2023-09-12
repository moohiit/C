
//Write a program to check handsome numbers.
#include<stdio.h>
int main()
{
    int n,rem,sum=0,no,last;
    printf("Enter any number to check :");
    scanf("%d",&n);
    no=n;
    last=n%10;
    n/=10;
    while(n>0){
        rem=n%10;
        sum+=rem;
        n/=10;
    }
    if (sum==last)
    {
        printf("%d is Handsome Number.",no);
    }else{
        printf("%d is Not Hansome Number.",no);
    }
    return 0;
}